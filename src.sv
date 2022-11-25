module src #(
    parameter DATA_WIDTH=32
)(
input logic[DATA_WIDTH-1:0] regOp2,
input logic[DATA_WIDTH-1:0] ImmOp,
input logic ALUsrc,
output logic[DATA_WIDTH-1:0] ALUop2
);

assign ALUop2=ALUsrc?regOp2:ImmOp;

endmodule


