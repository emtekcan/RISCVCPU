#include "Vsth.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../vbuddy.cpp"


int main(int argc, char **argv, char **env){
  int cyc;
  int clock;

  Verilated::commandArgs(argc, argv);

  Vsth *top = new Vsth;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("sth.vcd");

  if (vbdOpen("../vbuddy.cfg") != 1) return -1;
  vbdHeader("T2-137F :)");
  vbdSetMode(1);

  top->clk = 1;
  top->en = 1;

  for (cyc = 0; cyc < 10000; cyc++){
      if ((vbdValue() == 51) || (cyc < 2)) top->rst = 1;
      else top->rst = 0;
      top->en = vbdFlag();

      for (clock = 0; clock < 2; clock++){
          tfp->dump(2 * cyc + clock);
          top->clk = !top->clk;
          top->eval();
      }

      vbdBar(top->data_out & 0xFF);
      vbdCycle(cyc);

      if ((Verilated::gotFinish()) || (vbdGetkey()=='x')) exit(0);
  }

  tfp->close();
  vbdClose();
  exit(0);
}
