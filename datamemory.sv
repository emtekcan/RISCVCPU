module datamemory(
input logic [31:0] A,
//input logic WE,
//input logic [DATA_WIDTH] WD,
output logic[31:0] data_RD
);

logic [31:0] rom_array [4*70:0];

initial begin
    $readmemh("sinerom.mem", rom_array);
end;

//can take out WD3 enable in alutop/ 
//always_comb for asynchronous logic
assign data_RD = rom_array[A];


endmodule


