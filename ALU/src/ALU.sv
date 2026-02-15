`timescale 1ns/1ps
//try after to implement at logic level. Or pipelined
module ALU (
    input logic [3:0] sel,
    input logic [3:0] A,
    input logic [3:0] B,
    input logic M,
    input logic Cn,
    output logic [3:0] F,
    output logic ABFlag
);

    logic [3:0] Fin1, Fin2;
    always_comb begin
        Fin1 = 4'd0;
        Fin2 = 4'd0;
        if(M) begin
            case(sel)
                4'd0:Fin1 = ~A;
                4'd1:Fin1 = ~(A+B);
                4'd2:Fin1 = ~A & B;
                4'd3:Fin1 = 4'd0;
                4'd4:Fin1 = ~(A&B);
                4'd5:Fin1 = ~B;
                4'd6:Fin1 = A ^ B;
                4'd7:Fin1 = A & ~B;
                4'd8:Fin1 = ~A + B;
                4'd9:Fin1 = ~(A ^ B);
                4'd10:Fin1 = B;
                4'd11:Fin1 = A & B;
                4'd12:Fin1 = 4'd15;
                4'd13:Fin1 = (A + ~B);
                4'd14:Fin1 = A + B;
                4'd15:Fin1 = A;
                default: Fin1 = A;
            endcase
        end
        else begin
                case(sel)
                    4'd0:Fin2 = A;
                    4'd1:Fin2 = (A+B);
                    4'd2:Fin2 = A + ~B;
                    4'd3:Fin2 = 4'd15;
                    4'd4:Fin2 = A + (~A|B);
                    4'd5:Fin2 = (A+B) + (~A|B);
                    4'd6:Fin2 = (A-B)-1;
                    4'd7:Fin2 = (A&~B)-1;
                    4'd8:Fin2 = A + (A&B);
                    4'd9:Fin2 = (A + B);
                    4'd10:Fin2 = (A+ ~B) + (A&B);
                    4'd11:Fin2 = (A&B)-1;
                    4'd12:Fin2 = A + (A<<1);
                    4'd13:Fin2 = (A+B) + A;
                    4'd14:Fin2 = (A + ~B) + A;
                    4'd15:Fin2 = A-1;
                    default: Fin2 = A-1;
                endcase
                if(Cn) Fin1 = Fin2;
                else Fin1 = Fin2 + 1;
            end
        end
        assign F = Fin1;
        assign ABFlag = (Fin1[0] & Fin1[1] & Fin1[2] & Fin1[3]);
endmodule
