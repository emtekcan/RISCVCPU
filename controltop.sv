module controltop#(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32
)(
input [DATA_WIDTH-1:0] A,
input logic EQ,


output logic RegWrite,
output logic [2:0] ALUctrl,
output logic ALUsrc,
output logic PCsrc,
output logic [ADDRESS_WIDTH-1:0] rs1,
output logic [ADDRESS_WIDTH-1:0] rs2,
output logic [ADDRESS_WIDTH-1:0] rd,
output logic [DATA_WIDTH-1:0] ImmOp,
output logic Resultsrc
);

logic [DATA_WIDTH-1:0] RD_instr;
logic [1:0] ImmSrc;

assign rs1 = RD_instr[19:15];
assign rs2 = RD_instr[24:20];
assign rd = RD_instr[11:7];

ctrlu controlunit(
.EQ(EQ), //after dot is the internal signal and in the brackets external
.op(RD_instr[6:0]),
.funct3(RD_instr[14:12]),

.ALUctrl(ALUctrl),
.ALUsrc(ALUsrc),
.ImmSrc(ImmSrc),
.PCsrc(PCsrc),
.RegWrite(RegWrite),
.Resultsrc(Resultsrc)
);

extend signextend(
.ImmSrc(ImmSrc),
.ImmOp(ImmOp),
.Instr(RD_instr[31:0])
);

rom instructionmemory(
.A(A),

.RD(RD_instr)
);


endmodule


