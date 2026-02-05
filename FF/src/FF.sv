module FF (
    input logic clk,
    input logic en,
    input logic [3:0] dIn,
    output logic [3:0] dOut
);
always_ff @(posedge clk) begin
    if(!en)
        dOut <= dIn;
    else
        dOut <= dOut;
end

endmodule
