module pcreg (
    input logic clk,
    input logic rst,
    input logic[11:0] ImmOp,
    input logic PCsrc,

    output logic[31:0] PC
);
(
    logic[31:0] next_PC;
    logic[31:0] inc_PC;
    logic[31:0] branch_PC;

    assign branch_PC = PC + ImmOp;
    assign inc_PC = PC + 4;
    assign next_PC = PCsrc ? branch_PC : inc_PC;

    always_ff(posedge clk, posedge rst) begin
        if(rst) PC <= 0;
        else PC <= next_PC;
    end


)
endmodule
