#include "Vpcreg.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>


int main(int argc, char **argv, char **env){
  std::cout << std::endl;

  int cyc;
  int clock;

  /*
  test:
  0-2. nop
  3. keep counting, but immop goes up to 214 (000000D6)
  4. pcsrc high, but immop is 0
  5. pcsrc high, immop = -9 (FFFFFFF7)
  6. pcsrc high, immop = 3 (00000003)
  7. resets to 0
  8. nop
  */
  //                     0  1   2   3     4   5   6   7   8
  const bool resets[9]  {0, 0,  0,  0,    0,  0,  0,  1,  0};
  const bool pcsrc[9]   {0, 0,  0,  1,    0,  0,  0,  0,  0};
  const int immop[9]    {0, 0,  0,  214,  0,  -8,  3,  0,  0};

  // ------------------ Verilator stuffs ---------------------

  Verilated::commandArgs(argc, argv);

  Vpcreg *top = new Vpcreg;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("pcreg.vcd");

  // ------------------ The test begins ---------------------

  top->clk = 1;

  for (cyc = 0; cyc < 7; cyc++){

    top->rst = resets[cyc];
    top->ImmOp = immop[cyc];
    top->PCsrc = pcsrc[cyc];

    for (clock = 0; clock < 2; clock++){
      tfp->dump(2 * cyc + clock);
      top->clk = !top->clk;
      top->eval();
    }

    printf("for cycle %d, "
    "PC is %d \n",
    cyc, top->PC);

    if (Verilated::gotFinish()) exit(0);
  }

  tfp->close();
  exit(0);
}
