module datamemory#(
parameter ADDRESS_WIDTH=5,
DATA_WIDTH =32

)(
input logic clk,
input logic [DATA_WIDTH-1:0] A,
//input logic WE,
//input logic [DATA_WIDTH] WD,
output logic[DATA_WIDTH] RD
);
logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];
//can take out WD3 enable in alutop/ 
//always_comb for asynchronous logic
always_comb
    begin 
         RD=rom_array[A];

  end





endmodule




