module extend(
    input logic[1:0] ImmSrc,
    input logic[31:0] Instr,
    output logic[31:0] ImmOp
);

always_comb
    case(ImmSrc)
        2'b00: ImmOp = {{20{Instr[31]}}, Instr[31:20]};
        2'b10: ImmOp = {{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0};
        default: ImmOp = 32'bx;
    endcase

endmodule
