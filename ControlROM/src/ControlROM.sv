module ControlROM (
    input logic [3:0] addr,
    output logic [9:0] prog
);


logic [7:0] progInt;

always_comb begin : progBlock
    case(addr)
        4'd0: progInt = 8'b10101010;
        4'd1: progInt = 8'b10101010;
        4'd2: progInt = 8'b10010010;
        4'd3: progInt = 8'b10010010;
        4'd4: progInt = 8'b01100010;
        4'd5: progInt = 8'b01100010;
        4'd6: progInt = 8'b10101100;
        4'd7: progInt = 8'b10101100;
        4'd8: progInt = 8'b10101110;
        4'd9: progInt = 8'b10101110;
        // 4'd10: do something with I/O pins
        // 4'd11:
        4'd12: progInt = 8'b01011111;
        4'd13: progInt = 8'b00001111;
        4'd14: progInt = 8'b11001111;
        4'd15: progInt = 8'b11001111;
        default: progInt = 8'd0;
    endcase
end 
assign prog[7:0] = progInt;
assign prog[8] = progInt[4];
assign prog[9] = addr[0];
endmodule