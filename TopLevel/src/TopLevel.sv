`include "ALU/src/ALU.sv"
`include "ControlROM/src/ControlROM.sv"
`include "ProgramCounter/src/PC.sv"
`include "RAM/src/RAM.sv"
`include "MUX/src/mux.sv"
`include "ProgramROM/src/ProgramROM.sv"
`include "FF/src/FF.sv"

module TopLevel(
    input logic clk,
    output logic [3:0] Acc,
    output logic [3:0] programCountOut,
    output logic [7:0] progPOut,
    output logic [9:0] progCOut,
    output logic [3:0] muxOutOut,
    output logic [3:0] addrOutOut,
    output logic [3:0] ramOutOut,
    output logic [3:0] AluOutOut,
    output logic cpOut,
    output logic ABFlagOut,
    output logic PCc0,
    output logic RWc1,
    output logic Accc2,
    output logic Mc3,
    output logic Cnc8,
    output logic S0c4,
    output logic S1c5,
    output logic S2c6,
    output logic S3c7,
    output logic Selc9
);

logic [3:0] programCount;
logic cp;
logic ABFlag;
logic [7:0] progP;
logic [9:0] progC;
logic [3:0] muxOut;
logic [3:0] addrOut;
logic [3:0] ramOut;
logic [3:0] AccOut;
logic [3:0] AluOut;

PC Pcblock(.clk(clk), .programCount(programCount), .cp(cp), .ABFlag(ABFlag), .progC(progC[0]), .progP(progP[3:0]));

ProgramROM programBlock (.prog(progP), .addr(programCount));

ControlROM controlBlock (.addr(progP[7:4]), .prog(progC));

FF addrBlock(.clk(cp), .en(1'd0), .dIn(muxOut), .dOut(addrOut));

FF AccBlock(.clk(cp), .en(progC[2]), .dIn(AluOut), .dOut(AccOut));

RAM ramBlock(.write_en(progC[1]), .CS(1'd1), .addr(addrOut), .dataOut(ramOut), .dataIN(AccOut));

mux muxblock (.programP(progP[3:0]), .sel(progC[9]), .Ram(ramOut), .enable(1'd1), .outBits(muxOut));

ALU aluBlock (.sel(progC[7:4]), .A(AccOut), .B(muxOut), .M(progC[3]), .Cn(progC[8]), .F(AluOut), .ABFlag(ABFlag));

assign Acc = AccOut;
assign ramOutOut = ramOut;
assign programCountOut = programCount;
assign AluOutOut = AluOut;
assign progPOut = progP;
assign muxOutOut = muxOut;
assign addrOutOut = addrOut;
assign cpOut = cp;
assign ABFlagOut = ABFlag;
assign progCOut = progC;
assign PCc0 = progC[0];
assign RWc1 = progC[1];
assign Accc2 = progC[2];
assign Mc3 = progC[3];
assign S0c4 = progC[4];
assign S1c5 = progC[5];
assign S2c6 = progC[6];
assign S3c7 = progC[7];
assign Cnc8 = progC[8];
assign Selc9 = progC[9];




endmodule