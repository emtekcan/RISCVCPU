module alu #(
 parameter DATA_WIDTH=32
 )
 (
    input logic[DATA_WIDTH-1:0] ALUop1,
    input logic[DATA_WIDTH-1:0] ALUop2,
    input logic[2:0] ALUctrl,
    output logic[DATA_WIDTH-1:0] ALUout,//SUM
    output logic EQ

);

always_comb //always comb //case add aluctrl
    case(ALUctrl)
    3'b000:begin
        ALUout = ALUop1+ALUop2;
        EQ= 0; //it will keep the value of eq that it had before so needs to be reset
    end

     //need rs1 and rs2 to be the same.
    3'b001:EQ=(ALUop1 == ALUop2) ; //
    default: ALUout = 0; //what should default case
    endcase


endmodule 


