module tb_updown_fsm;

    logic clk;
    logic rst_n;
    logic [3:0] count;

    updown_fsm dut (
        .clk(clk),
        .rst_n(rst_n),
        .count(count)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst_n = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;

        repeat (25) begin
            @(posedge clk);
            $display("t=%0t count=%0d", $time, count);
        end

        $finish;
    end

endmodule
