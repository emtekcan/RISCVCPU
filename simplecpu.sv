module simplecpu#(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32

)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] a0
);

logic [DATA_WIDTH-1:0] ImmOp;
logic [31:0] PC;
logic PCsrc;
logic [DATA_WIDTH-1:0] A;
logic EQ;
logic RegWrite;
logic ALUctrl;
logic ALUsrc;
logic [ADDRESS_WIDTH-1:0] rs1;
logic [ADDRESS_WIDTH-1:0] rs2;
logic [ADDRESS_WIDTH-1:0] rd;
logic ImmSrc;
logic [DATA_WIDTH-1:0] ALUout,



pcreg PC(
    .clk(clk),
    .rst(rst),
    .ImmOp(ImmOp),
    .PCsrc(PCsrc),
    .PC(PC)
);

controltop CU(
    .clk(clk),
    .EQ(EQ), //after dot is the internal signal and in the brackets external
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .funct3(RD_instr[14:12]),
    .RegWrite(RegWrite),
    .A(PC),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd)
);

alutop ALU(
    .clk(clk),
    .immOP(ImmOp),
    .a0(a0),
    .ALUout(ALUout),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .EQ(EQ)
);





endmodule