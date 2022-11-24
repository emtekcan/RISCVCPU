module ctrlu(
    input logic EQ,
    input logic [6:0] op,
    input logic [2:0] funct3,
    // input logic funct7b5,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [1:0] ImmSrc,
    output logic PCsrc
);

logic branch;
logic [7:0] ctrl;
assign {RegWrite, ImmSrc, ALUsrc, ALUctrl, branch} = ctrl;
assign PCsrc = branch & (~EQ); //branch if not equals

always_comb begin
    case(op)
        7'b0010011: //addi
            case(funct3)
                3'b000: ctrl = 8'b10010000;
                default: ctrl = 8'b1001xxx0;
            endcase
        7'b1100011: //bne
            case(funct3)
                3'b001: ctrl = 8'b01000011;
                default: ctrl = 8'b0100xxx1;
            endcase

        default: ctrl = 8'bxxxxxxxx;
    endcase
end

endmodule
