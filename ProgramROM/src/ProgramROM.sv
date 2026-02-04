module ProgramROM (
    input logic [3:0] addr,
    output logic [7:0] prog
);

always_comb begin : progBlock
    case(addr)
        4'd0:prog = 8'h82;
        4'd1:prog = 8'h10;
        4'd2:prog = 8'h21;
        4'd3:prog = 8'h62;
        4'd4:prog = 8'hC0;
        default: prog = 8'hFF;
    endcase
end 
endmodule