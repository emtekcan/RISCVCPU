module alutop#(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32
)(

    input logic clk,
    input logic RegWrite,
    input logic ALUsrc,
    input logic ALUctrl,
    input logic[DATA_WIDTH-1:0] immOp,
    
    input logic [ADDRESS_WIDTH-1:0] rs1,
    input logic [ADDRESS_WIDTH-1:0] rs2,
    input logic [ADDRESS_WIDTH-1:0] rd,
    output logic [ADDRESS_WIDTH-1:0]a0,
    output logic[DATA_WIDTH -1:0] ALUout

);
logic[DATA_WIDTH-1:0] ALUop1;
logic[DATA_WIDTH-1:0] regOp2;
logic[DATA_WIDTH-1:0] ALUop2;

alu alulogic(
    .ALUop1(ALUop1),
    .ALUop2(ALUop2),
    .ALUout(ALUout),
    .ALUctrl(ALUctrl),
    .EQ(EQ)

);

src SelectSignal(
    .regOp2(regOp2),
    .ImmOp(immOp),
    .ALUsrc(ALUsrc),
    .ALUop2(ALUop2)
);

sreg regfile(
    .clk(clk),//after dot is internal signal, inside brackets external signal
    .ad1(rs1),
    .ad2(rs2),
    .ad3(rd),
    .WE3(RegWrite),
    .WD3(ALUout),
    .ALUop1(ALUop1),
    .ALUop2(ALUop2)

);


endmodule

