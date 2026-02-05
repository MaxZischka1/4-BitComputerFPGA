`include "FF/src/FF.sv"
`timescale 1ns / 1ps
module testRAM;

    logic clk;
    logic CS;
    logic write_en;
    logic [3:0] addrIN;
    logic [3:0] accIN;
    logic [3:0] dataOut;
    logic [3:0] addrBuf;
    logic [3:0] accBuf;

    RAM uut(
     .write_en(write_en), .addr(addrBuf), .dataIN(accBuf), .dataOut(dataOut), .CS(1'd1)
    );

    FF address(.clk(clk), .en(1'd1), .dIn(addrIN), .dOut(addrBuf));

    FF accum(.clk(clk), .en(1'd1), .dIn(accIN), .dOut(accBuf));

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin

        $dumpfile("curTest.vcd");
        $dumpvars(0, testRAM);
        #5
        #10
        CS = 1;
        write_en = 1;
        #10
        write_en = 1;
        accIN = 9;
        addrIN = 1;
        #10
        write_en = 0;
        #7
        write_en = 1;
        #7
        // write_en = 0;
        // addr = 0;
        // #10
        // write_en = 0;
        // addr = 3;
        #20 $finish;
        
    end
endmodule