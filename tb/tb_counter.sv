module tb_counter;

    logic clk;
    logic rst_n;
    logic [3:0] count;
    logic en;

    counter #(.WIDTH(4)) dut (
        .clk(clk),
        .rst_n(rst_n),
        .en(en),
        .count(count)
    );

    //clk generation
    always #5 clk = ~clk;

    initial begin 
        //initialization
        clk = 0;
        rst_n = 0;
        en = 0;

        //hold reset for 2 cycles
        repeat (2) @(posedge clk); //wait for 2 positive edges of clk
        rst_n = 1; //release reset

        //enable counting for 5
        en = 1;
        repeat (5) @(posedge clk);

        en = 0; // after 5 clk cycles disable counting
        repeat (5) @(posedge clk);

        $display("Final count value: %d", count); //after 5 more cycles, print the count value
        $finish; //end
    end

endmodule
