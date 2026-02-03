`timescale 1ns / 1ps
module muxtestB;
    logic [3:0] programROM;
    logic [3:0] Ram;
    logic sel;
    logic [3:0] outBits;
    logic enable;

    mux dut(
        .sel(sel), .enable(enable), .outBits(outBits), .Ram(Ram), .programROM(programROM)
    );

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0,muxtestB);
        #5
        enable = 1;
        Ram = 15;
        programROM = 15;
        sel = 0;
        #5
        Ram = 4'd7;
        programROM = 15;
        sel = 1;
        #5
        $finish;
    end

endmodule