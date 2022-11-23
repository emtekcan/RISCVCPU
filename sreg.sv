module sreg#(
    parameter ADDRESS_WIDTH=5,
              DATA_WIDTH=32
)(
    input logic clk,
    input logic[ADDRESS_WIDTH-1:0] ad1,
    input logic[ADDRESS_WIDTH-1:0] ad2,
    input logic [ADDRESS_WDITH-1:0]ad3,
    input logic WE3,
    input logic [DATA_WIDTH-1:0] WD3,
    output logic[DATA_WIDTH-1:0] ALUop1,
    output logic[DATA_WIDTH-1:0] regOp2,
    output logic [ADDRESS_WIDTH-1:0]a0
);

//TEMPORARY REFERNEC ETABLE
//ad3 determines which register the ALUout result writes to
logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

//link between ALUout and WD3
//SET POSITION 0 TO 0
//sequential write
always_ff@(posedge clk) begin
    if(WE3)
    rom_array[ad3]<=WD3;
    
end 

//combinatorial read ->combinatorial should be equal
always_comb
    begin
    ALUop1=rom_array[ad1];
    regOp2=rom_array[ad2];
    a0=rom_array[5'b00101]; // this is rom_array 10: //A0 is register 10: abi name, risc v abi: application binary interfcae
    end
endmodule



