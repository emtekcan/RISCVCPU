#include "Valutop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>


int main(int argc, char **argv, char **env){
  int cyc;
  int clock;

  /*
  test0:
  0. load a value into a0
  1. load a value into a1
  2. t1 = a0 + a1
  3. a0 = t1
  4. check if a0 and t1 are equal
  expecting: a0 = t1 = 300, a1 = 185

  test1:
  0. load 14 into a1
  1. see that a0 != 314
  2. a0 = a0 + a1, with immop = 28
  3. check that a0 == 314, with rd == t1
  4. check that t1 still == 300
  */

  //int 😂 = 5;

  //{ad1, ad2, ad3}
  std::vector<int[3]> addresses{
    {0, 0, 10}, {0, 0, 11}, {10, 11, 6}, {6, 0, 10}, {10, 6, 0}, 
    {0, 0, 11}, {10, 0 , 0}, {10, 11, 10}, {10, 0, 6}, {6, 0, 0}};
  
  std::vector<bool> write_en{
    1, 1, 1, 1, 0, 
    1, 0, 1, 0, 0};

  std::vector<bool> alu_src{
    1, 1, 0, 0, 0, 
    1, 1, 0, 1, 1};
  
  std::vector<bool> alu_ctrl{
    0, 0, 0, 0, 1, 
    0, 1, 0, 1, 1};
  
  std::vector<int> imm_op{
    125, 185, 0, 0, 0, 
    14, 314, 28, 314, 300};

  // ------------------ Verilator stuffs ---------------------

  Verilated::commandArgs(argc, argv);

  Valutop *top = new Valutop;

  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("alutop.vcd");

  // ------------------ The test begins ---------------------

  top->clk = 1;
  int aluout_val = 0;  // may need this, not sure

  for (test = 0; test < 2; test++){
    for (cyc = 0; cyc < 5; cyc++){
      cur_idx = 5*test + cyc;
      top->rs1 = addresses[cur_idx][0];
      top->rs2 = addresses[cur_idx][1];
      top->rd = addresses[cur_idx][2];

      top->RegWrite = write_en[cur_idx];
      top->ALUout = top->aluout;
      
      top->immOp = imm_op[cur_idx];

      top->ALUsrc = alu_src[cur_idx];
      top->ALUctrl = alu_ctrl[cur_idx];


      for (clock = 0; clock < 2; clock++){
          tfp->dump(2 * cyc + clock);
          top->clk = !top->clk;
          top->eval();

          aluout_val = top->aluout;  // not sure if this is necessary
      }

      printf("for test %d, at cycle %d,\n
      a0 is %x,\n
      ALUout is %x,\n
      and eq is %d", 
      test, cyc, top->a0, top->ALUout, top->EQ);

      if (Verilated::gotFinish()) exit(0);
    }
  }

  tfp->close();
  exit(0);
}
