module alu (

    input logic ALUop1,
    input logic ALUop2,
    input logic[2:0] ALUctrl,
    output logic ALUout,//SUM
    output logic EQ, 

);

always_ff@(posedge clk) //always comb
    case:
    1'b0: ALUout <= ALUop1+ALUop2;
    1'b1 EQ<=ALUop1;
    default: ALUout<= ALUop1+ALUop2;
    endcase


//assign ALUout=ALUctrl?ALUout:EQ
endmodule 