module src(
input logic regOp2,
input logic ImmOp,
input logic ALUsrc,
output logic ALUop2
);

assign ALUop2=ALUsrc?ImmOp:regOp2

endmodule