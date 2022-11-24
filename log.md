# Group logbook: 

## PC



## ALU
This is a reduced ALU block. The ALUsrc chooses between using regOP2 (whatever is in the second register) or the sign extended constant ImmOp if the select signal is high. Then ALUOp1 is summed with ALUop2 where ALUout is the outpt for this. EQ checks if ALUop1 and ALUop2 are equal: if they are it is high if not it is low. alu.sv code: 
```sv
always_comb //
    case(ALUctrl)
    1'b0:begin
        ALUout = ALUop1+ALUop2;//summing operator
        EQ= 0; //The EQ flag needs to be reset after summing operation
    end

     //EQ checks if ALUop1 and ALUop2 are equal 
    1'b1:EQ=(ALUop1 == ALUop2) ; //
    default: ALUout = 0; //The default case should be specified as ALUout as 0
    endcase

```

## Control unit


## Testbench