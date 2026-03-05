`timescale 1ns/1ps
module ControlROMTestb;
    logic clk;
    logic [9:0] prog;
    logic [3:0] programCount;
    logic cp;


    PC pcInst(.clk(clk), .programCount(programCount), .cp(cp));

    ControlROM crInst(.addr(programCount), .prog(prog));

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0, ControlROMTestb);
        #10000
        $finish;
    end

endmodule
