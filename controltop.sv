module controltop#(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32
)(
input logic clk,
input [DATA_WIDTH-1:0] A,
input logic EQ,

output logic RegWrite,
output logic ALUctrl,
output logic ALUsrc,
output logic PCsrc,
output logic [ADDRESS_WIDTH-1:0] rs1,
output logic [ADDRESS_WIDTH-1:0] rs2,
output logic [ADDRESS_WIDTH-1:0] rd,
output logic [DATA_WIDTH-1:0] ImmOp
);

logic [DATA_WIDTH-1:0] RD_instr;
logic [1:0]ImmSrc;

ctrlu controlunit(
.EQ(EQ), //after dot is the internal signal and in the brackets external
.op(RD_instr[6:0]),
.funct3(RD_instr[14:12]),

.ALUctrl(ALUctrl),
.ALUsrc(ALUsrc),
.ImmSrc(ImmSrc),
.PCsrc(PCsrc),
.RegWrite(RegWrite)
);

extend signextend(
.ImmSrc(ImmSrc),
.Instr(RD_instr[31:7]),

.ImmOp(ImmOp)
);

rom instructionmemory(
.clk(clk),
.A(A),

.RD(RD_instr)
);


endmodule


