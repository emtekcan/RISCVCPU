#include "Vcontroltop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>


int main(int argc, char **argv, char **env){
  std::cout << std::endl;

  int cyc;
  int clock;

  /*
  test0:
  0. check RegWrite and ImmSrc on relevant instr (regwrite and imm) and see ImmOp output -> high, 00
  1. check RegWrite and ImmSrc on relevant instr (eq and branch) and see ImmOp output -> low, 10
  2. check ALUctrl and ALUsrc, for sum and reg -> high, high
  3. check ALUctrl and ALUsrc, for eq and imm -> low, low
  4. check PCsrc for EQ high and branch instr -> high   // same instr as 3
  5. check PCsrc for EQ low and branch instr -> low     // same instr as 3
  6. check PCsrc for EQ high and not branch instr -> low
  */

  const int addresses[7] {0, 4, 6, 1, 3, 5, 2};

  /*
  instr_mem instructions:
  0 - 100101011001_01010_000_01011_0010011  - 95950593
  4 - 0100101_01010_01011_001_11000_1100011 - 4AA59C63
  6 - 0000000_00110_01011_000_01010_0110011 - 00658533
  1 - 0100101_00110_01010_000_10110_1100011 - 4A650B63
  3 - 0100101_00110_01010_000_10110_1100011 - 4A650B63
  5 - 0100101_00110_01010_000_10110_1100011 - 4A650B63
  2 - 000000000000_00000_000_01010_0010011  - 00000513
  */
  
  bool eq_sig[7]{0, 0, 0, 0, 1, 0, 1};

  // ------------------ Verilator stuffs ---------------------

  Verilated::commandArgs(argc, argv);

  Vcontroltop *top = new Vcontroltop;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("controltop.vcd");

  // ------------------ The test begins ---------------------

  top->clk = 1;

  for (cyc = 0; cyc < 7; cyc++){

    top->A = addresses[cyc];
    top->EQ = eq_sig[cyc];

    for (clock = 0; clock < 2; clock++){
      tfp->dump(2 * cyc + clock);
      top->clk = !top->clk;
      top->eval();
    }

    printf("for cycle %d, "
    "RegWrite is %d, "
    "ALUctrl is %d, "
    "ALUsrc is %d, "
    "PCsrc is %d, "
    "ImmOp is %x \n",
    cyc, top->RegWrite, top->ALUctrl, 
    top->ALUsrc, top->PCsrc, top->ImmOp);

    if (Verilated::gotFinish()) exit(0);
  }

  tfp->close();
  exit(0);
}
