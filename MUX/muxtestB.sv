`timescale 1ns / 1ps
module muxtestB;
    logic [3:0] programP;
    logic [3:0] Ram;
    logic sel;
    logic [3:0] outBits;
    logic enable;

    mux dut(
        .sel(sel), .enable(enable), .outBits(outBits), .Ram(Ram), .programP(programP)
    );

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0,muxtestB);
        #5
        enable = 1;
        Ram = 15;
        programP = 15;
        sel = 0;
        #5
        Ram = 4'd7;
        programP = 15;
        sel = 1;
        #5
        $finish;
    end

endmodule