`timescale 1ns/1ps
module PCTestB;

    logic clk;
    logic [3:0] programCount;


    PC dut (.clk(clk), .programCount(programCount));

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0,PCTestB);
        #10000
        $finish;
    end

        
endmodule