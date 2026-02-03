`include "ALU/src/ALU.sv"
`include "Accumulator/src/Acc.sv"
`include "ControlROM/src/ControlROM.sv"
`include "ProgramCounter/src/PC.sv"
`include "RAM/src/RAM.sv"
`include "MUX/src/mux.sv"
`include "ProgramROM/src/ProgramROM.sv"
`include "Addr/src/Addr.sv"

module TopLevel(
    input logic clk
);

logic [3:0] programCount;
logic cp;
logic [7:0] progP;
logic [9:0] progC;
logic [3:0] muxOut;
logic [3:0] addrOut;
logic [3:0] ramOut;
logic [3:0] AccOut;
logic [3:0] AluOut;

PC Pcblock(.clk(clk), .programCount(programCount), .cp(cp));

ProgramROM programBlock (.prog(progP), .addr(programCount));

ControlROM controlBlock (.addr(progP[3:0]), .prog(progC));

Addr addrBlock(.clk(cp), .en(1'd1), .dIn(muxOut), .dOut(addrOut));

Addr AccBlock(.clk(cp), .en(1'd1), .dIn(AluOut), .dOut(AccOut));

RAM ramBlock(.write_en(progC[1]), .CS(1'd1), .addr(addrOut), .dataOut(ramOut), .dataIN(AccOut));

mux muxblock (.programP(progP[3:0]), .sel(progC[9]), .Ram(ramOut), .enable(1'd1), .outBits(muxOut));

ALU aluBlock (.sel(progP[7:4]), .A(AccOut), .B(muxOut), .M(progC[3]), .Cn(progC[8]), .F(AluOut));


endmodule