`timescale 1ns/1ps
module PC(
    input logic clk,
    input logic progC,
    input logic [3:0] progP,
    input logic ABFlag,
    output logic [3:0] programCount,
    output logic cp
);

logic [3:0]counter = 0;
logic [3:0] programCountint = 0;

always_ff @(posedge clk) begin : blockName
    if(progC && ABFlag) begin
        counter <= 0;
    end else begin
        if(counter == 4'hF)
            counter <= 0;
        else
            counter <= counter + 1;
    end
end
always_ff @(posedge counter[3]) begin
    if(progC && ABFlag) begin
        programCountint <= progP;
    end
        else begin
            if(programCountint<15) 
            programCountint <= programCountint + 1;
            else
            programCountint <= 0;
        end
end

assign cp = counter[3];
assign programCount = programCountint;


endmodule