`timescale 1ns/1ps
module RAM
    (
        input logic write_en,
        input logic CS,
        input logic [3:0] addr,
        input logic [3:0] dataIN,
        output logic [3:0] dataOut
    );

    logic [3:0] dataCells [15:0];


    initial begin
    integer i;
        for (i = 0; i <= 15; i = i + 1) begin
            dataCells[i] = 4'd0;
        end
    end


    always_comb begin
        if(CS) begin
            if(~(write_en)) begin
                dataOut = 4'd0;
            end
            else begin
                dataOut = dataCells[addr];
            end
        end
    end

    always_latch begin
        if (CS && ~write_en) begin
            dataCells[addr] = dataIN;
        end
    end

endmodule