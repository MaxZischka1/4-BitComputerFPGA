
module PC(
    input logic clk,
    input logic progC,
    input logic [3:0] progP,
    input logic ABFlag,
    input logic [3:0] AccIn,
    output logic [3:0] programCount,
    output logic cp
);

logic [19:0]counter = 0;
logic [3:0] programCountint = 0;

always_ff @(posedge clk) begin : blockName
    if(progC && ABFlag) begin
        counter <= 0;
        programCountint <= progP;
    end else begin
        if(counter == 20'hFFFFF)
            counter <= 0;
        else
            counter = counter + 1;
    
        if(counter[1]) programCountint <= programCountint + 1;
    end
end
assign cp = counter[1];
assign programCount = programCountint;


endmodule