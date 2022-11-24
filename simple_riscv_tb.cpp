#include "Vsimplecpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>


int main(int argc, char **argv, char **env){
  int cyc;
  int clock;

  Verilated::commandArgs(argc, argv);

  Vsimplecpu *top = new Vsimplecpu;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("simplecpu.vcd");

  top->clk = 1;
  top->rst = 1;

  for (cyc = 0; cyc < 10000; cyc++){
      if (cyc < 2) top->rst = 1;
      else top->rst = 0;

      for (clock = 0; clock < 2; clock++){
          tfp->dump(2 * cyc + clock);
          top->clk = !top->clk;
          top->eval();
      }

      printf("at cycle %d, a0 is %d \n", cyc, top->a0);

      if (Verilated::gotFinish()) exit(0);
  }

  tfp->close();
  exit(0);
}
