module fifo_sync #(
    parameter int DW = 8,
    parameter int DEPTH = 8
)(
    input  logic clk,
    input  logic rst_n,

    input  logic w_en, //push data into FIFO cycle
    input  logic [DW-1:0] w_data, //data to store
    output logic full, //FIFO is full, cannot push more data

    input  logic r_en, //pop data from FIFO cycle
    output logic [DW-1:0] r_data, //data popped out, valid only when r_en=1 and empty=0
    output logic empty //FIFO is empty, cannot pop data
);

    localparam int AW = $clog2(DEPTH);

    logic [DW-1:0] mem [0:DEPTH-1]; //FIFO storage
    logic [AW-1:0] w_ptr, r_ptr; // write and read pointers
    logic [AW:0] count; //counts how many data items are currently stored in the FIFO

    /*
    on reset, w_ptr is set to 0. On each clock cycle, if w_en is high and the FIFO is not full, 
    the input data w_data is written into the memory at the location pointed to by w_ptr, and 
    then w_ptr is incremented by 1 to point to the next write location for the next write operation.
    */
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            w_ptr <= '0;
        end else if (w_en && !full) begin 
            mem[w_ptr] <= w_data;
            w_ptr <= w_ptr + 1'b1;
        end
    end

    /*
    on reset, r_ptr is set to 0 and r_data is cleared. On each clock cycle, if r_en is high and the FIFO is not empty,
    the data at the location pointed to by r_ptr is read from the memory and assigned to r_data, and then r_ptr is 
    incremented by 1 to point to the next read location for the next read operation.
    */
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            r_ptr  <= '0;
            r_data <= '0;
        end else if (r_en && !empty) begin
            r_data <= mem[r_ptr];
            r_ptr  <= r_ptr + 1'b1;
        end
    end

    /*
    
    */
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= '0;
        end else begin
            unique case ({(w_en && !full), (r_en && !empty)})
                2'b10: count <= count + 1'b1; //write only
                2'b01: count <= count - 1'b1; //read only
                default: count <= count; //both read and write, or neither
            endcase
        end
    end

    localparam logic [AW:0] DEPTH_U = (AW+1)'(DEPTH);

    assign full  = (count == DEPTH_U);
    assign empty = (count == '0);

endmodule
