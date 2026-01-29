`timescale 1ns / 1ps
module testprogramROM;

    logic [3:0] addr;
    logic [7:0] prog;


    ProgramROM uut(
        .addr(addr), .prog(prog)
    );

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0, testprogramROM);
        #5
        addr = 3;
        #5
        addr = 0;
        #5
        addr = 4;
        #5
        addr = 2;
        #5
        $finish;
    end
endmodule


