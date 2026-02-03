module mux (
    input logic sel,
    input logic [3:0] programROM,
    input logic [3:0] Ram,
    input logic enable,
    output logic [3:0] outBits
);

always_comb begin
    if(enable) begin
        if(sel)
            outBits = Ram;
        else
            outBits = programROM;
    end
    else outBits = 4'd0;
end


endmodule