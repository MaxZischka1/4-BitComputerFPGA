`timescale 1ns/1ps
module TopLevelTestB;

    logic clk;
    logic ABFlagOut;
    logic cpOut;
    logic [3:0] Acc;
    logic [3:0] programCountOut;
    logic [3:0] AluOutOut;
    logic [9:0] progCOut;
    logic [7:0] progPOut;
    logic [3:0] ramOutOut;
    logic [3:0] addrOutOut;
    logic [3:0] muxOutOut;
    logic PCc0;
    logic RWc1;
    logic Accc2;
    logic Mc3;
    logic S0c4;
    logic S1c5;
    logic S2c6;
    logic S3c7;
    logic Cnc8;
    logic Selc9;

    TopLevel uut (.clk(clk), .Acc(Acc), .programCountOut(programCountOut), .AluOutOut(AluOutOut), 
    .progCOut(progCOut), .progPOut(progPOut), .muxOutOut(muxOutOut), .ramOutOut(ramOutOut), .addrOutOut(addrOutOut),
    .cpOut(cpOut), .ABFlagOut(ABFlagOut),
    .PCc0(PCc0),
    .RWc1(RWc1),
    .Accc2(Accc2),
    .Mc3(Mc3),
    .S0c4(S0c4),
    .S1c5(S1c5),
    .S2c6(S2c6),
    .S3c7(S3c7),
    .Cnc8(Cnc8),
    .Selc9(Selc9)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end



    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0,TopLevelTestB);
        #10000
        $finish;
    end
endmodule