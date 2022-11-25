// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimplecpu.h for the primary calling header

#include "verilated.h"

#include "Vsimplecpu___024root.h"

VL_ATTR_COLD void Vsimplecpu___024root___initial__TOP__0(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h223e20d9__0;
    VlWide<3>/*95:0*/ __Vtemp_habaa847e__0;
    // Body
    __Vtemp_h223e20d9__0[0U] = 0x2e6d656dU;
    __Vtemp_h223e20d9__0[1U] = 0x6d6f7279U;
    __Vtemp_h223e20d9__0[2U] = 0x6f6e4d65U;
    __Vtemp_h223e20d9__0[3U] = 0x75637469U;
    __Vtemp_h223e20d9__0[4U] = 0x6e737472U;
    __Vtemp_h223e20d9__0[5U] = 0x49U;
    VL_READMEM_N(true, 8, 64, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h223e20d9__0)
                 ,  &(vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array)
                 , 0, ~0ULL);
    __Vtemp_habaa847e__0[0U] = 0x2e6d656dU;
    __Vtemp_habaa847e__0[1U] = 0x65726f6dU;
    __Vtemp_habaa847e__0[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 281, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_habaa847e__0)
                 ,  &(vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsimplecpu___024root___settle__TOP__0(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
        [0xaU];
    vlSelf->simplecpu__DOT__cu__DOT__RD_instr = ((vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                  [
                                                  (0x3fU 
                                                   & vlSelf->simplecpu__DOT__PC)] 
                                                  << 0x18U) 
                                                 | ((vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                     [
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->simplecpu__DOT__PC))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                        [
                                                        (0x3fU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->simplecpu__DOT__PC))] 
                                                        << 8U) 
                                                       | vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->simplecpu__DOT__PC))])));
    vlSelf->simplecpu__DOT__alu__DOT__ALUop1 = vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
        [(0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                   >> 0xfU))];
    vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl 
        = ((0x13U == (0x7fU & vlSelf->simplecpu__DOT__cu__DOT__RD_instr))
            ? 0x110U : ((0x63U == (0x7fU & vlSelf->simplecpu__DOT__cu__DOT__RD_instr))
                         ? ((1U == (7U & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                          >> 0xcU)))
                             ? 0x83U : 0x81U) : ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->simplecpu__DOT__cu__DOT__RD_instr))
                                                  ? 0x130U
                                                  : 0U)));
    vlSelf->simplecpu__DOT__ImmOp = ((0U == (3U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                                   >> 6U)))
                                      ? (((- (IData)(
                                                     (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                            >> 0x14U))
                                      : ((2U == (3U 
                                                 & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                                    >> 6U)))
                                          ? (((- (IData)(
                                                         (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                         >> 7U)))))
                                          : 0U));
    vlSelf->simplecpu__DOT__alu__DOT__ALUop2 = ((0x10U 
                                                 & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))
                                                 ? vlSelf->simplecpu__DOT__ImmOp
                                                 : 
                                                vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
                                                [(0x1fU 
                                                  & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                                     >> 0x14U))]);
    if ((0U == (7U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                      >> 1U)))) {
        vlSelf->ALUout = (vlSelf->simplecpu__DOT__alu__DOT__ALUop1 
                          + vlSelf->simplecpu__DOT__alu__DOT__ALUop2);
        vlSelf->simplecpu__DOT__EQ = 0U;
    } else {
        if ((1U != (7U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                          >> 1U)))) {
            vlSelf->ALUout = 0U;
        }
        if ((1U == (7U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                          >> 1U)))) {
            vlSelf->simplecpu__DOT__EQ = (vlSelf->simplecpu__DOT__alu__DOT__ALUop1 
                                          == vlSelf->simplecpu__DOT__alu__DOT__ALUop2);
        }
    }
    vlSelf->simplecpu__DOT__pc__DOT__next_PC = ((1U 
                                                 & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                                    & (~ (IData)(vlSelf->simplecpu__DOT__EQ))))
                                                 ? 
                                                (vlSelf->simplecpu__DOT__PC 
                                                 + vlSelf->simplecpu__DOT__ImmOp)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->simplecpu__DOT__PC));
}

VL_ATTR_COLD void Vsimplecpu___024root___eval_initial(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___eval_initial\n"); );
    // Body
    Vsimplecpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vsimplecpu___024root___eval_settle(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___eval_settle\n"); );
    // Body
    Vsimplecpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsimplecpu___024root___final(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___final\n"); );
}

VL_ATTR_COLD void Vsimplecpu___024root___ctor_var_reset(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->ALUout = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->simplecpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__cu__DOT__RD_instr = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simplecpu__DOT__alu__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->simplecpu__DOT__alu__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<281; ++__Vi0) {
        vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
