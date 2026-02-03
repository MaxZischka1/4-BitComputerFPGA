module PC(
    input logic clk,
    output logic [3:0] programCount,
    output logic cp
);

logic [19:0]counter = 0;
logic [3:0] programCountint = 0;

always_ff @(posedge clk) begin : blockName
    if(counter == 20'hFFFFF)
        counter <= 0;
    else
        counter = counter + 1;
    
    if(counter[1]) programCountint <= programCountint + 1;
end
assign cp = counter[1];
assign programCount = programCountint;


endmodule