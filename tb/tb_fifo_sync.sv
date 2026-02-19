module tb_fifo_sync;

    logic clk, rst_n;

    logic        w_en;
    logic [7:0]  w_data;
    logic        full;

    logic        r_en;
    logic [7:0]  r_data;
    logic        empty;

    fifo_sync #(.DW(8), .DEPTH(8)) dut (
        .clk(clk), .rst_n(rst_n),
        .w_en(w_en), .w_data(w_data), .full(full),
        .r_en(r_en), .r_data(r_data), .empty(empty)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0; rst_n = 0;
        w_en = 0; r_en = 0; w_data = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;
        $display("t=%0t RESET RELEASED empty=%0b full=%0b", $time, empty, full);

        // WRITE 5 values
        for (int i = 0; i < 5; i++) begin
            @(posedge clk);
            w_en   = 1;
            w_data = 8'(10 + i);
            $display("t=%0t WRITE data=%0d full=%0b empty=%0b", $time, w_data, full, empty);
        end
        @(posedge clk);
        w_en = 0;

        // READ 5 values (print after a tiny delay so r_data is updated)
        for (int i = 0; i < 5; i++) begin
            @(posedge clk);
            r_en = 1;
            #1;
            $display("t=%0t READ  data=%0d full=%0b empty=%0b", $time, r_data, full, empty);
        end
        @(posedge clk);
        r_en = 0;

        $finish;
    end

endmodule
