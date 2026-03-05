`timescale 1ns/1ps
module mux (
    input logic sel,
    input logic [3:0] programP,
    input logic [3:0] Ram,
    input logic enable,
    output logic [3:0] outBits
);

always_comb begin
    if(enable) begin
        if(sel)
            outBits = Ram;
        else
            outBits = programP;
    end
    else outBits = 4'd0;
end


endmodule