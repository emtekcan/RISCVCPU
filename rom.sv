module rom(
    input logic [31:0] A,
    output logic [31:0] RD
);

logic [31:0] rom_array [63:0];

initial begin
    $readmemh("InstructionMemory.mem", rom_array);
end;

assign RD = rom_array [A];

endmodule
