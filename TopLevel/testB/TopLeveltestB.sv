`timescale 1ns/1ps
module TopLevelTestB;

    logic clk;
    logic [3:0] Acc;

    TopLevel uut (.clk(clk), .Acc(Acc));

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