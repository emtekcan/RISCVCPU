module alu #(
 parameter DATA_WIDTH=32
 )
 (
    input logic[DATA_WIDTH-1:0] ALUop1,
    input logic[DATA_WIDTH-1:0] ALUop2,
    input logic ALUctrl,
    output logic[DATA_WIDTH-1:0] ALUout,//SUM
    output logic EQ

);

always_comb //always comb //case add aluctrl
    case(ALUctrl)
    1'b0:ALUout = ALUop1+ALUop2;
     //need rs1 and rs2 to be the same.
    1'b1:if(ALUop1 == ALUop2) EQ =1; //
    default: ALUout = 0; //what should default case
    endcase


endmodule 


