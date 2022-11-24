module ctrl_unit#(
  parameter DATA_WIDTH = 32;
)(
  input logic EQ,
  input logic [31:0] instr,

  output logic RegWrite,
  output logic ALUctrl,
  output logic ALUsrc,
  output logic ImmSrc,
  output logic PCsrc
);

logic [6:0] op;
logic [2:0] funct3;
logic [6:0] funct7;

always_comb begin
  op = instr[6:0];
  funct3 = instr[14:12];
  funct7 = instr[31:25];
end

always_comb begin
  case(op):
    0: 
    1:

    default:
  endcase 
end

endmodule
