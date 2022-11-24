// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimplecpu.h for the primary calling header

#include "verilated.h"

#include "Vsimplecpu__Syms.h"
#include "Vsimplecpu___024root.h"

void Vsimplecpu___024root___ctor_var_reset(Vsimplecpu___024root* vlSelf);

Vsimplecpu___024root::Vsimplecpu___024root(Vsimplecpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimplecpu___024root___ctor_var_reset(this);
}

void Vsimplecpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimplecpu___024root::~Vsimplecpu___024root() {
}
