`timescale 1ns / 1ps
module testRAM;

    logic clk;
    logic write_en;
    logic [3:0] addr;
    logic [3:0] dataIN;
    logic [3:0] dataOut;

    RAM uut(
        .clk(clk), .write_en(write_en), .addr(addr), .dataIN(dataIN), .dataOut(dataOut)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end


    initial begin

        $dumpfile("curTest.vcd");
        $dumpvars(0, testRAM);
        #5
        @(posedge clk)
        #1
        write_en = 1;
        addr = 0;
        dataIN = 9;
        @(posedge clk);
        #1
        write_en = 1;
        addr = 1;
        dataIN =5;
        @(posedge clk);
        #1
        write_en = 1;
        addr = 3;
        dataIN = 2;
        @(posedge clk);
        #1
        write_en = 0;
        addr = 1;
        @(posedge clk);
        #1
        write_en = 0;
        addr = 0;
        @(posedge clk);
        #1
        write_en = 0;
        addr = 3;
        #20 $finish;
        
    end
endmodule