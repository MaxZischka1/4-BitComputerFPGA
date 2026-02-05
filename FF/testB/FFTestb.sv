`include "ProgramCounter/src/PC.sv"
`timescale 1ns/1ps
module FFTestb;
    logic clk;
    logic en;
    logic cp;
    logic [3:0] dIn;
    logic [3:0] dOut;


    PC Cinst (.clk(clk), .cp(cp), .programCount());

    FF Ainst(.clk(cp), .en(en), .dIn(dIn), .dOut(dOut));

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0, AddrTestb);
        #10
        en = 1;
        #16
        dIn = 6;
        #16
        dIn = 15;
        #16
        dIn = 3;
        #16
        dIn = 9;
        #16
        dIn = 14;
        #100
        $finish;
    end
endmodule
