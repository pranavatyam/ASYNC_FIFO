`timescale 1ns/1ps

module tb_apb_fifo_async_rand;

    localparam int DW    = 8;
    localparam int DEPTH = 8;

    // Clocks / resets
    logic PCLK, PRESETn;
    logic r_clk, r_rst_n_in;

    // APB
    logic        PSEL;
    logic        PENABLE;
    logic        PWRITE;
    logic [7:0]  PADDR;
    logic [31:0] PWDATA;

    wire  [31:0] PRDATA;
    wire         PREADY;
    wire         PSLVERR;

    // Read-side
    logic          r_en_in;
    wire [DW-1:0]  r_data_out;
    wire           empty_out;
    wire           full_out;

    apb_fifo_async #(.DW(DW), .DEPTH(DEPTH)) dut (
        .PCLK      (PCLK),
        .PRESETn   (PRESETn),
        .PSEL      (PSEL),
        .PENABLE   (PENABLE),
        .PWRITE    (PWRITE),
        .PADDR     (PADDR),
        .PWDATA    (PWDATA),
        .PRDATA    (PRDATA),
        .PREADY    (PREADY),
        .PSLVERR   (PSLVERR),
        .r_clk     (r_clk),
        .r_rst_n_in(r_rst_n_in),
        .r_en_in   (r_en_in),
        .r_data_out(r_data_out),
        .empty_out (empty_out),
        .full_out  (full_out)
    );

    // Different rates
    always #5  PCLK  = ~PCLK;   // 10ns
    always #7  r_clk = ~r_clk;  // 14ns

    // APB helpers
    task automatic apb_write(input logic [7:0] addr, input logic [31:0] data);
        begin
            @(posedge PCLK);
            PADDR   = addr;
            PWDATA  = data;
            PWRITE  = 1'b1;
            PSEL    = 1'b1;
            PENABLE = 1'b0;

            @(posedge PCLK);
            PENABLE = 1'b1;

            @(posedge PCLK);
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
            PENABLE = 1'b1;

            @(posedge PCLK);
            data = PRDATA;

            PSEL    = 1'b0;
            PENABLE = 1'b0;
            PADDR   = '0;
        end
    endtask

    // Scoreboard
    byte exp_q[$];
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

    int ok_reads;

    always_ff @(posedge r_clk or negedge r_rst_n_in) begin
        if (!r_rst_n_in) begin
            ok_reads <= 0;
        end else if (r_fire_d) begin
            if (r_data_out !== exp_front_d) begin
                $display("ERROR: Data mismatch t=%0t got=0x%0h exp=0x%0h",
                         $time, r_data_out, exp_front_d);
                $fatal(1);
            end else begin
                ok_reads <= ok_reads + 1;
            end
        end
    end

    // Registers
    localparam logic [7:0] ADDR_CTRL   = 8'h00;
    localparam logic [7:0] ADDR_STATUS = 8'h04;
    localparam logic [7:0] ADDR_WDATA  = 8'h08;

    logic [31:0] st;

    // Random driver knobs
    int N_STEPS = 200;          // bump to 2000+ for heavy stress
    int write_attempts, read_pulses;

    initial begin
        // init signals
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

        $dumpfile("waves.vcd");
        $dumpvars(0, tb_apb_fifo_async_rand);

        // reset
        repeat (5) @(posedge PCLK);
        PRESETn    = 1'b1;
        r_rst_n_in = 1'b1;

        // enable peripheral
        apb_write(ADDR_CTRL, 32'h0000_0001);

        // random mixed traffic
        for (int k = 0; k < N_STEPS; k++) begin
            // 0..99
            int coin = $urandom_range(0, 99);

            // ~55% chance: attempt a write via APB
            if (coin < 55) begin
                byte val = byte'($urandom_range(0, 255));
                // push into expected only if not full (model should match hardware)
                if (!full_out) begin
                    exp_q.push_back(val);
                end
                apb_write(ADDR_WDATA, {24'h0, val});
                write_attempts++;
            end

            // ~45% chance: attempt a read pulse
            if (coin >= 55) begin
                // pulse read enable for 1 cycle on r_clk
                @(posedge r_clk);
                r_en_in = 1'b1;
                @(posedge r_clk);
                r_en_in = 1'b0;
                read_pulses++;
            end

            // occasionally read STATUS
            if ((k % 25) == 0) begin
                apb_read(ADDR_STATUS, st);
            end
        end

        // drain anything left
        while (exp_q.size() > 0) begin
            @(posedge r_clk);
            r_en_in = (!empty_out) ? 1'b1 : 1'b0;
            @(posedge r_clk);
            r_en_in = 1'b0;
        end

        apb_read(ADDR_STATUS, st);
        $display("RAND DONE: steps=%0d writes=%0d reads=%0d ok_reads=%0d status=0x%08h",
                 N_STEPS, write_attempts, read_pulses, ok_reads, st);

        // end condition: empty should be 1 after draining
        if (st[0] !== 1'b1) begin
            $display("ERROR: Expected EMPTY=1 at end");
            $fatal(1);
        end

        $display("PASS Random stress completed (ordering + integrity preserved).");
        $finish;
    end

endmodule