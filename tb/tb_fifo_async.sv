`timescale 1ns/1ps

module tb_fifo_async;

    logic w_clk, w_rst_n;
    logic r_clk, r_rst_n;

    logic        w_en;
    logic [7:0]  w_data;
    logic        full;

    logic        r_en;
    logic [7:0]  r_data;
    logic        empty;

    fifo_async #(.DW(8), .DEPTH(8)) dut (
        .w_clk(w_clk), .w_rst_n(w_rst_n),
        .w_en(w_en), .w_data(w_data), .full(full),

        .r_clk(r_clk), .r_rst_n(r_rst_n),
        .r_en(r_en), .r_data(r_data), .empty(empty)
    );

    always #4 w_clk = ~w_clk;   // 8 time unit period
    always #7 r_clk = ~r_clk;   // 14 time unit period

    initial begin
        w_clk = 0; r_clk = 0;

        w_rst_n = 0; r_rst_n = 0;
        w_en = 0; r_en = 0; w_data = 0;

        // release both resets after a bit
        #30;
        w_rst_n = 1;
        r_rst_n = 1;

        // WRITE 8 bytes 100..107
        for (int i = 0; i < 8; i++) begin
            @(posedge w_clk);

            if (!full) begin
                w_en   = 1;
                w_data = 8'(100 + i);
                $display("t=%0t W  data=%0d full=%0b", $time, w_data, full);
            end else begin
                w_en = 0;
                $display("t=%0t W  SKIP (FULL)", $time);
                i--; // try again next cycle
            end

            // deassert after one cycle
            @(posedge w_clk);
            w_en = 0;
        end

        #50;// wait a bit before reading

        // READ 8 bytes
        for (int i = 0; i < 8; i++) begin
            @(posedge r_clk);

            if (!empty) begin
                r_en = 1;
            end else begin
                r_en = 0;
                $display("t=%0t R  SKIP (EMPTY)", $time);
                i--;
            end

            // print after a tiny delay so r_data has updated (registered)
            #1;
            if (r_en && !empty)
                $display("t=%0t R  data=%0d empty=%0b", $time, r_data, empty);

            // deassert after one cycle
            @(posedge r_clk);
            r_en = 0;
        end

        $finish;
    end

endmodule