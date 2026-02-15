`timescale 1ns/1ps
module ProgramROM (
    input logic [3:0] addr,
    output logic [7:0] prog
);

always_comb begin : progBlock
    case(addr)
        4'd0:prog = 8'h05;
        4'd1:prog = 8'h22;
        4'd2:prog = 8'h63;
        4'd3:prog = 8'h87;
        4'd4:prog = 8'h10;
        default: prog = 8'h00;
    endcase
end 
endmodule