module resultsrc #(
    parameter DATA_WIDTH=32
)(
input logic[DATA_WIDTH-1:0] ALUout,
input logic[DATA_WIDTH-1:0] data_RD,
input logic Resultsrc,
output logic[DATA_WIDTH-1:0] Result
);

assign Result = Resultsrc ? data_RD : ALUout;

endmodule
