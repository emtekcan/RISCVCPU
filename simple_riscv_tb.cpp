#include "Vsth.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


int main(int argc, char **argv, char **env){
  int cyc;
  int clock;

  Verilated::commandArgs(argc, argv);

  Vsth *top = new Vsth;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("sth.vcd");

  top->clk = 1;
  top->rst = 1;

  for (cyc = 0; cyc < 1000; cyc++){
      if (cyc < 2) top->rst = 1;
      else top->rst = 0;

      for (clock = 0; clock < 2; clock++){
          tfp->dump(2 * cyc + clock);
          top->clk = !top->clk;
          top->eval();
      }

      if (Verilated::gotFinish()) exit(0);
  }

  tfp->close();
  exit(0);
}
