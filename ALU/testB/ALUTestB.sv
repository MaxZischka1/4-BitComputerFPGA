`timescale 1ns / 1ps
module ALUTestB;
    logic [3:0] sel;
    logic [3:0] A;
    logic [3:0] B;
    logic M;
    logic Cn;
    logic [3:0] F;

    ALU uut (
        .sel(sel), .A(A), .B(B), .M(M), .Cn(Cn), .F(F)
    );

    initial begin
        $dumpfile("curTest.vcd");
        $dumpvars(0, ALUTestB);
        #2
        M = 1;
        A = 4;
        B = 3;
        sel = 0;
        #4
        sel = 4;
        #4
        M = 0;
        sel = 1;
        Cn = 1;
        A = 4;
        B = 3;
        #5
        $finish;
    end

endmodule
