`timescale 1ns/1ps

module tb_apb_fifo_async;

    initial begin
        $dumpfile("waves.vcd");
        $dumpvars(0, tb_apb_fifo_async);
    end

    localparam int DW = 8;
    localparam int DEPTH = 8;

    // Clocks / resets
    logic PCLK, PRESETn;
    logic r_clk, r_rst_n_in;

    // -------------------------
    // APB signals
    // -------------------------
    logic        PSEL;
    logic        PENABLE;
    logic        PWRITE;
    logic [7:0]  PADDR;
    logic [31:0] PWDATA;

    wire  [31:0] PRDATA;
    wire         PREADY;
    wire         PSLVERR;

    // -------------------------
    // Read-side interface
    // -------------------------
    logic              r_en_in;
    wire  [DW-1:0]     r_data_out;
    wire               empty_out;
    wire               full_out;

    // DUT
    apb_fifo_async #(.DW(DW), .DEPTH(DEPTH)) dut (
        .PCLK    (PCLK),
        .PRESETn (PRESETn),
        .PSEL    (PSEL),
        .PENABLE (PENABLE),
        .PWRITE  (PWRITE),
        .PADDR   (PADDR),
        .PWDATA  (PWDATA),
        .PRDATA  (PRDATA),
        .PREADY  (PREADY),
        .PSLVERR (PSLVERR),

        .r_clk      (r_clk),
        .r_rst_n_in (r_rst_n_in),
        .r_en_in    (r_en_in),
        .r_data_out (r_data_out),
        .empty_out  (empty_out),
        .full_out   (full_out)
    );

    // Clocks (different rates)
    always #5  PCLK  = ~PCLK;   // 10ns period
    always #7  r_clk = ~r_clk;  // 14ns period

    // -------------------------
    // APB helpers (simple APB3-style)
    // Transfer happens on: PSEL=1 && PENABLE=1
    // -------------------------
    task automatic apb_write(input logic [7:0] addr, input logic [31:0] data);
        begin
            @(posedge PCLK);
            PADDR   = addr;
            PWDATA  = data;
            PWRITE  = 1'b1;
            PSEL    = 1'b1;
            PENABLE = 1'b0;

            @(posedge PCLK);
            PENABLE = 1'b1; // ACCESS phase

            @(posedge PCLK);
            // done
            PSEL    = 1'b0;
            PENABLE = 1'b0;
            PWRITE  = 1'b0;
            PADDR   = '0;
            PWDATA  = '0;
        end
    endtask

    task automatic apb_read(input logic [7:0] addr, output logic [31:0] data);
        begin
            @(posedge PCLK);
            PADDR   = addr;
            PWRITE  = 1'b0;
            PSEL    = 1'b1;
            PENABLE = 1'b0;

            @(posedge PCLK);
            PENABLE = 1'b1; // ACCESS phase

            @(posedge PCLK);
            data = PRDATA;

            PSEL    = 1'b0;
            PENABLE = 1'b0;
            PADDR   = '0;
        end
    endtask

    // -------------------------
    // Scoreboard for read checking
    // Compare one cycle after a successful read.
    // -------------------------
    byte  exp_q[$];
    logic r_fire, r_fire_d;
    byte  exp_front_d;

    assign r_fire = r_en_in && !empty_out;

    always_ff @(posedge r_clk or negedge r_rst_n_in) begin
        if (!r_rst_n_in) begin
            r_fire_d    <= 1'b0;
            exp_front_d <= '0;
        end else begin
            r_fire_d <= r_fire;

            if (r_fire) begin
                if (exp_q.size() == 0) begin
                    $display("ERROR: Read fired but scoreboard empty at t=%0t", $time);
                    $fatal(1);
                end
                exp_front_d <= exp_q.pop_front();
            end
        end
    end

    int read_ok_count;

    always_ff @(posedge r_clk or negedge r_rst_n_in) begin
        if (!r_rst_n_in) begin
            read_ok_count <= 0;
        end else if (r_fire_d) begin
            if (r_data_out !== exp_front_d) begin
                $display("ERROR: Data mismatch at t=%0t got=0x%0h exp=0x%0h",
                         $time, r_data_out, exp_front_d);
                $fatal(1);
            end else begin
                read_ok_count <= read_ok_count + 1;
                $display("OK: READ t=%0t data=0x%0h (remaining=%0d empty=%0b full=%0b)",
                         $time, r_data_out, exp_q.size(), empty_out, full_out);
            end
        end
    end

    // -------------------------
    // Test
    // -------------------------
    logic [31:0] st;

    initial begin
        // init
        PCLK       = 1'b0;
        r_clk      = 1'b0;

        PRESETn    = 1'b0;
        r_rst_n_in = 1'b0;

        PSEL       = 1'b0;
        PENABLE    = 1'b0;
        PWRITE     = 1'b0;
        PADDR      = '0;
        PWDATA     = '0;

        r_en_in    = 1'b0;

        // hold reset for a bit
        repeat (5) @(posedge PCLK);
        PRESETn    = 1'b1;
        r_rst_n_in = 1'b1;

        $display("RESET RELEASED at t=%0t", $time);

        // mark as "used" so Verilator stops warning
        if (PREADY !== 1'b1) $display("NOTE: PREADY=%0b (ignored in this TB)", PREADY);
        if (PSLVERR !== 1'b0) $display("WARN: PSLVERR=%0b", PSLVERR);

        // Enable the wrapper: CTRL bit0 = EN (CTRL @ 0x00)
        apb_write(8'h00, 32'h0000_0001);

        // Quick status read (STATUS @ 0x04)
        apb_read(8'h04, st);
        $display("STATUS after enable: 0x%08h (EMPTY=%0b FULL=%0b)",
                 st, st[0], st[1]);

        // Write 8 known bytes to WDATA @ 0x08
        for (int i = 0; i < 8; i++) begin
            byte val = byte'(8'(16 + i));
            exp_q.push_back(val);
            $display("APB WRITE: data=0x%0h", val);
            apb_write(8'h08, {24'h0, val});
        end

        // Let pointers sync across domains a bit
        repeat (6) @(posedge r_clk);

        // Drain: pulse r_en_in until we see 8 good reads
        while (read_ok_count < 8) begin
            @(posedge r_clk);
            r_en_in = (!empty_out) ? 1'b1 : 1'b0;

            // single-cycle pulse
            @(posedge r_clk);
            r_en_in = 1'b0;
        end

        // Final checks
        if (exp_q.size() != 0) begin
            $display("ERROR: Scoreboard not empty at end. remaining=%0d", exp_q.size());
            $fatal(1);
        end

        apb_read(8'h04, st);
        $display("FINAL STATUS: 0x%08h (EMPTY=%0b FULL=%0b OVF=%0b)",
                 st, st[0], st[1], st[2]);

        if (st[0] !== 1'b1) begin
            $display("ERROR: Expected EMPTY=1 at end");
            $fatal(1);
        end

        $display("PASS ✅  Wrote 8 bytes via APB and read them back in-order across CDC.");
        $finish;
    end

endmodule
