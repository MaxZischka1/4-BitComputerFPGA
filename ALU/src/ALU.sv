//try after to implement at logic level. Or pipelined
module ALU (
    input logic [3:0] sel,
    input logic [3:0] A,
    input logic [3:0] B,
    input logic M,
    input logic Cn,
    output logic [3:0] F
);

    logic [3:0] Fin;
    always_comb begin
        if(M) begin
            case(sel)
                4'd0:F = ~A;
                4'd1:F = ~(A+B);
                4'd2:F = ~A & B;
                4'd3:F = 4'd0;
                4'd4:F = ~(A&B);
                4'd5:F = ~B;
                4'd6:F = A ^ B;
                4'd7:F = A & ~B;
                4'd8:F = ~A + B;
                4'd9:F = ~(A ^ B);
                4'd10:F = B;
                4'd11:F = A & B;
                4'd12:F = 4'd1;
                4'd13:F = (A + ~B);
                4'd14:F = A + B;
                4'd15:F = A;
            endcase
        end
        else begin
                case(sel)
                    4'd0:Fin = A;
                    4'd1:Fin = (A+B);
                    4'd2:Fin = A + ~B;
                    4'd3:Fin = 4'd15;
                    4'd4:Fin = A + (~A|B);
                    4'd5:Fin = (A+B) + (~A|B);
                    4'd6:Fin = (A-B)-1;
                    4'd7:Fin = (A&~B)-1;
                    4'd8:Fin = A + (A&B);
                    4'd9:Fin = (A + B);
                    4'd10:Fin = (A+ ~B) + (A&B);
                    4'd11:Fin = (A&B)-1;
                    4'd12:Fin = A + (A<<1);
                    4'd13:Fin = (A+B) + A;
                    4'd14:Fin = (A + ~B) + A;
                    4'd15:Fin = A-1;
                endcase
                if(Cn) F = Fin;
                else F = Fin + 1;
            end
        end
endmodule
