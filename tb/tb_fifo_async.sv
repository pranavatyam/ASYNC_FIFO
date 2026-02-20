`timescale 1ns/1ps

module tb_fifo_async;

    localparam int DW    = 8;
    localparam int DEPTH = 8;

    logic w_clk, w_rst_n;
    logic r_clk, r_rst_n;

    logic           w_en;
    logic [DW-1:0]  w_data;
    logic           full;

    logic           r_en;
    logic [DW-1:0]  r_data;
    logic           empty;

    fifo_async #(.DW(DW), .DEPTH(DEPTH)) dut (
        .w_clk(w_clk), .w_rst_n(w_rst_n),
        .w_en(w_en), .w_data(w_data), .full(full),

        .r_clk(r_clk), .r_rst_n(r_rst_n),
        .r_en(r_en), .r_data(r_data), .empty(empty)
    );

    // Different clock rates
    always #4 w_clk = ~w_clk;   // period 8
    always #7 r_clk = ~r_clk;   // period 14

    // Scoreboard
    byte exp_q[$];

    // "fire" signals (real transfers)
    logic w_fire;
    logic r_fire;

    assign w_fire = w_en && !full;
    assign r_fire = r_en && !empty;

    // Track reads to check data one cycle later
    logic r_fire_d;
    byte  exp_front_d;

    // Track what FULL/EMPTY looked like when we *drove* enables (to avoid false assertion)
    logic full_seen;
    logic empty_seen;

    // Push expected data when a real write happens
    always_ff @(posedge w_clk or negedge w_rst_n) begin
        if (!w_rst_n) begin
            exp_q.delete();
        end else if (w_fire) begin
            exp_q.push_back(byte'(w_data));
        end
    end

    // On a real read, pop expected and remember it for next r_clk (to compare with r_data)
    always_ff @(posedge r_clk or negedge r_rst_n) begin
        if (!r_rst_n) begin
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

    // Compare read data one cycle after r_fire
    always_ff @(posedge r_clk or negedge r_rst_n) begin
        if (!r_rst_n) begin
            // nothing
        end else if (r_fire_d) begin
            if (r_data !== exp_front_d) begin
                $display("ERROR: Data mismatch at t=%0t got=%0d exp=%0d",
                         $time, r_data, exp_front_d);
                $fatal(1);
            end else begin
                $display("OK: READ t=%0t data=%0d (empty=%0b full=%0b qsize=%0d)",
                         $time, r_data, empty, full, exp_q.size());
            end
        end
    end

    // TB-side safety checks (drive-time based, avoids "full predicts next" false trips)
    always_ff @(posedge w_clk or negedge w_rst_n) begin
        if (!w_rst_n) begin
            // nothing
        end else if (w_en && full_seen) begin
            $display("ERROR: TB asserted w_en even though FULL was seen at drive time. t=%0t", $time);
            $fatal(1);
        end
    end

    always_ff @(posedge r_clk or negedge r_rst_n) begin
        if (!r_rst_n) begin
            // nothing
        end else if (r_en && empty_seen) begin
            $display("ERROR: TB asserted r_en even though EMPTY was seen at drive time. t=%0t", $time);
            $fatal(1);
        end
    end

    // Stimulus
    initial begin
        w_clk   = 1'b0;
        r_clk   = 1'b0;

        w_rst_n = 1'b0;
        r_rst_n = 1'b0;

        w_en    = 1'b0;
        r_en    = 1'b0;
        w_data  = '0;

        full_seen  = 1'b0;
        empty_seen = 1'b0;

        // release resets
        #30;
        w_rst_n = 1'b1;
        r_rst_n = 1'b1;
        $display("RESET RELEASED at t=%0t", $time);

        repeat (200) begin
            // -------------------------
            // WRITE side: DRIVE ON NEGEDGE
            // -------------------------
            @(negedge w_clk);
            full_seen = full;   // snapshot "can I write?" at drive time
            w_en = 1'b0;

            if ($urandom_range(0, 99) < 60) begin
                if (!full_seen) begin
                    w_en   = 1'b1;
                    w_data = byte'($urandom_range(0, 255));
                    $display("W: t=%0t data=%0d full=%0b empty=%0b qsize=%0d",
                             $time, w_data, full, empty, exp_q.size());
                end
            end

            // -------------------------
            // READ side: DRIVE ON NEGEDGE
            // -------------------------
            @(negedge r_clk);
            empty_seen = empty; // snapshot "can I read?" at drive time
            r_en = 1'b0;

            if ($urandom_range(0, 99) < 60) begin
                if (!empty_seen) begin
                    r_en = 1'b1;
                    $display("R: t=%0t request (empty=%0b full=%0b qsize=%0d)",
                             $time, empty, full, exp_q.size());
                end
            end
        end

        // Stop driving enables
        @(negedge w_clk);
        w_en = 1'b0;

        @(negedge r_clk);
        r_en = 1'b0;

        //drain, keep reading until the scoreboard is empty. 
        $display("DONE driving. Draining... qsize=%0d", exp_q.size());

        while (exp_q.size() > 0) begin
            @(negedge r_clk);
            empty_seen = empty;
            r_en = 1'b0;

            if (!empty_seen) begin
                r_en = 1'b1;
            end
        end

        // stop read enable
        @(negedge r_clk);
        r_en = 1'b0;

        // final sanity
        if (exp_q.size() != 0) begin
            $display("ERROR: scoreboard not empty at end. qsize=%0d", exp_q.size());
            $fatal(1);
        end

        $display("PASS. Final qsize=%0d empty=%0b full=%0b", exp_q.size(), empty, full);
        $finish;
    end

endmodule
