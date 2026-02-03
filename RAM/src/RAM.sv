module RAM
    (
        input logic write_en,
        input logic CS,
        input logic [3:0] addr,
        input logic [3:0] dataIN,
        output logic [3:0] dataOut
    );

    logic [3:0] dataCells [15:0];


    always_comb begin
        if(CS) begin
            if(!write_en) begin
                dataCells[addr] = dataIN;
            end
            else begin
                dataOut = dataCells[addr];
            end
        end
    end

endmodule