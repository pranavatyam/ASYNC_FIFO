`timescale 1ns/1ps

module apb_fifo_async #(
    parameter int DW    = 8,
    parameter int DEPTH = 8
) (
    // APB interface (PCLK domain)
    input  logic PCLK,
    input  logic PRESETn,

    input  logic PSEL,
    input  logic PENABLE,
    input  logic PWRITE,
    input  logic [7:0]  PADDR,
    input  logic [31:0] PWDATA,

    output logic [31:0] PRDATA,
    output logic        PREADY,
    output logic        PSLVERR,

    // Async FIFO read domain interface
    input  logic         r_clk,
    input  logic         r_rst_n_in,
    input  logic         r_en_in,
    output logic [DW-1:0] r_data_out,
    output logic         empty_out,

    // expose write-side FULL for debug/integration
    output logic         full_out
);

    wire _unused_ok = &PWDATA[31:DW];

    // APB constants / decode
    localparam logic [7:0] ADDR_CTRL   = 8'h00;
    localparam logic [7:0] ADDR_STATUS = 8'h04;
    localparam logic [7:0] ADDR_WDATA  = 8'h08;

    // APB transfer detection (APB3):
    // setup phase: PSEL=1, PENABLE=0
    // access phase: PSEL=1, PENABLE=1
    logic apb_access;
    assign apb_access = PSEL && PENABLE;

    // Always-ready slave (zero wait states)
    assign PREADY  = 1'b1;
    assign PSLVERR = 1'b0;

    // Control/status regs (PCLK domain)
    logic en;
    logic ovf_sticky;

    // Soft reset pulse generated in PCLK domain, used to reset FIFO write domain.
    logic soft_reset_pulse;

    // Clear flags pulse
    logic clr_flags_pulse;

    // Write strobe for WDATA
    logic wdata_wr;
    assign wdata_wr = apb_access && PWRITE && (PADDR == ADDR_WDATA);

    // CTRL writes happen on access phase
    always_ff @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            en               <= 1'b0;
            soft_reset_pulse <= 1'b0;
            clr_flags_pulse  <= 1'b0;
        end else begin
            // default: pulses low unless written
            soft_reset_pulse <= 1'b0;
            clr_flags_pulse  <= 1'b0;

            if (apb_access && PWRITE && (PADDR == ADDR_CTRL)) begin
                // bit0: EN (level)
                en <= PWDATA[0];

                // bit1: SOFT_RESET (write-one pulse)
                if (PWDATA[1])
                    soft_reset_pulse <= 1'b1;

                // bit2: CLR_FLAGS (write-one pulse)
                if (PWDATA[2])
                    clr_flags_pulse <= 1'b1;
            end
        end
    end

    // -------------------------
    // FIFO resets
    // -------------------------
    logic w_rst_n_fifo;
    logic r_rst_n_fifo;

    // Write reset is PRESETn AND not soft-reset pulse (pulse forces one-cycle reset)
    always_ff @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            w_rst_n_fifo <= 1'b0;
        end else begin
            w_rst_n_fifo <= 1'b1;
            if (soft_reset_pulse)
                w_rst_n_fifo <= 1'b0;
        end
    end

    // Read reset: async assert, sync deassert (combines PRESETn and r_rst_n_in)
    wire r_rst_n_async = PRESETn & r_rst_n_in;

    logic r_rst_ff1, r_rst_ff2;
    always_ff @(posedge r_clk or negedge r_rst_n_async) begin
        if (!r_rst_n_async) begin
            r_rst_ff1 <= 1'b0;
            r_rst_ff2 <= 1'b0;
        end else begin
            r_rst_ff1 <= 1'b1;
            r_rst_ff2 <= r_rst_ff1;
        end
    end

    assign r_rst_n_fifo = r_rst_ff2;

    // -------------------------
    // FIFO ports
    // -------------------------
    logic         w_en_fifo;
    logic [DW-1:0] w_data_fifo;
    logic         full_fifo;

    logic         r_en_fifo;
    logic [DW-1:0] r_data_fifo;
    logic         empty_fifo;

    // Make it explicit that we only use the low DW bits (silences PWDATA[31:8] warning)
    wire [DW-1:0] apb_wdata = PWDATA[DW-1:0];

    // Drive FIFO write enable from APB WDATA writes
    assign w_en_fifo   = wdata_wr && en && !full_fifo;
    assign w_data_fifo = apb_wdata;

    // Pass-through read side
    assign r_en_fifo = r_en_in;

    fifo_async #(.DW(DW), .DEPTH(DEPTH)) u_fifo (
        .w_clk   (PCLK),
        .w_rst_n (w_rst_n_fifo),
        .w_en    (w_en_fifo),
        .w_data  (w_data_fifo),
        .full    (full_fifo),

        .r_clk   (r_clk),
        .r_rst_n (r_rst_n_fifo),
        .r_en    (r_en_fifo),
        .r_data  (r_data_fifo),
        .empty   (empty_fifo)
    );

    assign full_out   = full_fifo;
    assign empty_out  = empty_fifo;
    assign r_data_out = r_data_fifo;

    // Sticky overflow flag: APB attempted WDATA write while FULL
    always_ff @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            ovf_sticky <= 1'b0;
        end else begin
            if (clr_flags_pulse)
                ovf_sticky <= 1'b0;
            else if (wdata_wr && en && full_fifo)
                ovf_sticky <= 1'b1;
        end
    end

    // APB read mux
    always_comb begin
        PRDATA = 32'h0;

        if (!PWRITE) begin
            unique case (PADDR)
                ADDR_CTRL: begin
                    PRDATA[0] = en;
                end
                ADDR_STATUS: begin
                    PRDATA[0] = empty_fifo;
                    PRDATA[1] = full_fifo;
                    PRDATA[2] = ovf_sticky;
                end
                default: begin
                    PRDATA = 32'h0;
                end
            endcase
        end
    end

endmodule
