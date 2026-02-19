module fifo_async #(
    parameter int DW    = 8,
    parameter int DEPTH = 8
)(
    // write domain
    input  logic          w_clk,
    input  logic          w_rst_n,
    input  logic          w_en,
    input  logic [DW-1:0] w_data,
    output logic          full,

    // read domain
    input  logic          r_clk,
    input  logic          r_rst_n,
    input  logic          r_en,
    output logic [DW-1:0] r_data,
    output logic          empty
);

    localparam int AW = $clog2(DEPTH);
    // pointers have one extra bit for full/empty detection
    localparam int PW = AW + 1;

    // memory
    logic [DW-1:0] mem [0:DEPTH-1];

    // binary + gray pointers
    logic [PW-1:0] w_bin,  w_bin_next;
    logic [PW-1:0] w_gray, w_gray_next;

    logic [PW-1:0] r_bin,  r_bin_next;
    logic [PW-1:0] r_gray, r_gray_next;

    // synchronized gray pointers across domains
    logic [PW-1:0] r_gray_sync_w;
    logic [PW-1:0] w_gray_sync_r;

    // next flags (registered flags break combinational loops)
    logic full_next;
    logic empty_next;

    // increment enables (use registered full/empty)
    logic w_inc;
    logic r_inc;

    // ----------------------------
    // helper: bin -> gray (sized)
    // ----------------------------
    function automatic logic [PW-1:0] bin2gray(input logic [PW-1:0] b);
        return (b >> 1) ^ b;
    endfunction

    // ============================================================
    // WRITE DOMAIN
    // ============================================================

    assign w_inc      = w_en && !full;
    assign w_bin_next = w_bin + {{(PW-1){1'b0}}, w_inc};
    assign w_gray_next = bin2gray(w_bin_next);

    // sync read gray pointer into write clock domain
    sync2ff #(.W(PW)) u_sync_rptr_to_w (
        .clk  (w_clk),
        .rst_n(w_rst_n),
        .d    (r_gray),
        .q    (r_gray_sync_w)
    );

    // FULL detection compare: invert top two bits of synced read pointer
    logic [PW-1:0] w_gray_full_cmp;
    always_comb begin
        w_gray_full_cmp = r_gray_sync_w;
        w_gray_full_cmp[PW-1 -: 2] = ~r_gray_sync_w[PW-1 -: 2];
    end

    assign full_next = (w_gray_next == w_gray_full_cmp);

    // write memory + update pointers
    always_ff @(posedge w_clk or negedge w_rst_n) begin
        if (!w_rst_n) begin
            w_bin  <= '0;
            w_gray <= '0;
        end else begin
            if (w_inc) begin
                mem[w_bin[AW-1:0]] <= w_data;
            end
            w_bin  <= w_bin_next;
            w_gray <= w_gray_next;
        end
    end

    // register FULL flag (breaks comb loop)
    always_ff @(posedge w_clk or negedge w_rst_n) begin
        if (!w_rst_n) full <= 1'b0;
        else          full <= full_next;
    end

    // ============================================================
    // READ DOMAIN
    // ============================================================

    assign r_inc      = r_en && !empty;
    assign r_bin_next = r_bin + {{(PW-1){1'b0}}, r_inc};
    assign r_gray_next = bin2gray(r_bin_next);

    // sync write gray pointer into read clock domain
    sync2ff #(.W(PW)) u_sync_wptr_to_r (
        .clk  (r_clk),
        .rst_n(r_rst_n),
        .d    (w_gray),
        .q    (w_gray_sync_r)
    );

    assign empty_next = (r_gray_next == w_gray_sync_r);

    // read memory + update pointers/data
    always_ff @(posedge r_clk or negedge r_rst_n) begin
        if (!r_rst_n) begin
            r_bin  <= '0;
            r_gray <= '0;
            r_data <= '0;
        end else begin
            if (r_inc) begin
                r_data <= mem[r_bin[AW-1:0]];
            end
            r_bin  <= r_bin_next;
            r_gray <= r_gray_next;
        end
    end

    // register EMPTY flag (breaks comb loop)
    always_ff @(posedge r_clk or negedge r_rst_n) begin
        if (!r_rst_n) empty <= 1'b1;
        else          empty <= empty_next;
    end

endmodule
