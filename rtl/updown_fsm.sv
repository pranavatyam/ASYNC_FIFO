module updown_fsm #(
    parameter WIDTH = 4
) (
    input logic clk,
    input logic rst_n,
    output logic [WIDTH-1:0] count
);

typedef enum logic {
    UP,
    DOWN
} state_t;

state_t state, next_state;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        state <= UP;
    else begin
        state <= next_state;
    end
end

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        count <= 0;
    else begin
        case (state)
            UP: begin
                if (count == 10)
                    count <= count - 1;
                else
                    count <= count + 1;
            end

            DOWN: begin
                if (count == 0)
                    count <= count + 1;
                else
                    count <= count - 1;
            end
        endcase
    end
end


always_comb begin
    next_state = state;

    case (state)
        UP:   if (count == 10) next_state = DOWN;
        DOWN: if (count == 0)  next_state = UP;
    endcase
end

endmodule
