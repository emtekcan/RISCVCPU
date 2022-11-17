module sreg(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32
)(
    input logic clk,
    input logic[ADDRESS_WIDTH-1:0] rs1,
    input logic[ADDRESS_WIDTH-1:0] rs2,
    input logic [ADDRESS_WDITH-1:0]rd,
    input logic RegWrite,
    input logic WD3,
    output logic[DATA_WIDTH-1:0] ALUop1,
    output logic[DATA_WIDTH-1:0] regOp2
    output logic a0
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];


initial begin 
    $display("Loading rom.");
    $readmemh("rom.mem",rom_array)
end;

always_ff@(posedge clk) begin
    ALUop1<=rom_array[rs1];
    regOp2<=rom_array[rs2];
    a0<=a0;
end 

endmodule