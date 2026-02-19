module gray;

    function automatic logic [31:0] bin2gray32(input logic [31:0] b);
        return (b >> 1) ^ b;
    endfunction

    function automatic logic [31:0] gray2bin32(input logic [31:0] g);
        logic [31:0] b;
        b = '0;
        // prefix XOR
        for (int i = 31; i >= 0; i--) begin
            b[i] = ^g[31:i];
        end
        return b;
    endfunction

endmodule
