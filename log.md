# Group logbook: 

## PC



## ALU
This is a reduced ALU block. The ALUsrc chooses between using regOP2 (whatever is in the second register) or the sign extended constant ImmOp if the select signal is high. Then ALUOp1 is summed with ALUop2 where ALUout is the outpt for this. EQ checks if ALUop1 and ALUop2 are equal: if they are it is high if not it is low. <i>alu.sv code<i>: 
```sv
always_comb //
    case(ALUctrl)
    1'b0:begin
        ALUout = ALUop1+ALUop2;//summing operator
        EQ= 0; //The EQ flag needs to be reset after summing operation otherwise it will keep previous value 
    end

     //EQ checks if ALUop1 and ALUop2 are equal 
    1'b1:EQ=(ALUop1 == ALUop2) ; //
    default: ALUout = 0; //The default case should be specified as ALUout as 0
    endcase

```
<I>This represents the src block:
```sv
assign ALUop2=ALUsrc?ImmOp:regOp2;//A multiplexer when high goes with ImmOp otherwise goes to regOp2. 
```
<i> This represents the sreg:
````sv
//sequential write
always_ff@(posedge clk) begin
    if(WE3)
    rom_array[ad3]<=WD3; //If WE3 is high then WD3 is written into the position on ad3.
    
end 

//combinatorial read ->combinatorial should be equal
always_comb
    begin
    ALUop1=rom_array[ad1];//this reads from ad1 and ad2.
    regOp2=rom_array[ad2];
    a0=rom_array[5'b01010]; // this is rom_array 10: //A0 is register 10: abi name, risc v abi: application binary interface
    end
````
We then made a top level unit for the alu.
## Control unit


## Testbench

### Program to execute
````
main: 
    addi t1,zero,0xFF
    addi a0,zero,0x0
mloop: 
    addi a1,zero,0x0
iloop:
    addi a0,a1,0
    addi a1,a1,0
    bne a1,t1,iloop
    beq t1,zero,mloop