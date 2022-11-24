// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimplecpu.h for the primary calling header

#ifndef VERILATED_VSIMPLECPU___024ROOT_H_
#define VERILATED_VSIMPLECPU___024ROOT_H_  // guard

#include "verilated.h"

class Vsimplecpu__Syms;

class Vsimplecpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ simplecpu__DOT__EQ;
    CData/*4:0*/ simplecpu__DOT__rs1;
    CData/*4:0*/ simplecpu__DOT__rs2;
    CData/*4:0*/ simplecpu__DOT__rd;
    CData/*0:0*/ simplecpu__DOT__ImmSrc;
    CData/*7:0*/ simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ simplecpu__DOT__ImmOp;
    IData/*31:0*/ simplecpu__DOT__PC;
    IData/*31:0*/ simplecpu__DOT__A;
    IData/*31:0*/ simplecpu__DOT__pc__DOT__next_PC;
    IData/*31:0*/ simplecpu__DOT__cu__DOT__RD_instr;
    IData/*31:0*/ simplecpu__DOT__alu__DOT__ALUop1;
    IData/*31:0*/ simplecpu__DOT__alu__DOT__ALUop2;
    VlUnpacked<IData/*31:0*/, 2> simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> simplecpu__DOT__alu__DOT__regfile__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsimplecpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimplecpu___024root(Vsimplecpu__Syms* symsp, const char* name);
    ~Vsimplecpu___024root();
    VL_UNCOPYABLE(Vsimplecpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
