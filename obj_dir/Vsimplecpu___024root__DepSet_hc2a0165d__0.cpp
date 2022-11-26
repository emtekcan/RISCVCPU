// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimplecpu.h for the primary calling header

#include "verilated.h"

#include "Vsimplecpu___024root.h"

VL_INLINE_OPT void Vsimplecpu___024root___sequent__TOP__0(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->simplecpu__DOT__PC = ((IData)(vlSelf->rst)
                                   ? 0U : vlSelf->simplecpu__DOT__pc__DOT__next_PC);
}

VL_INLINE_OPT void Vsimplecpu___024root___sequent__TOP__1(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0;
    IData/*31:0*/ __Vdlyvval__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0;
    CData/*0:0*/ __Vdlyvset__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0;
    // Body
    __Vdlyvset__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0 = 0U;
    if ((0x100U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))) {
        __Vdlyvval__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0 
            = ((0x20U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))
                ? ((((0x118U >= (0x1ffU & vlSelf->ALUout))
                      ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                     [(0x1ffU & vlSelf->ALUout)] : 0U) 
                    << 0x18U) | ((((0x118U >= (0x1ffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->ALUout)))
                                    ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                                   [(0x1ffU & ((IData)(1U) 
                                               + vlSelf->ALUout))]
                                    : 0U) << 0x10U) 
                                 | ((((0x118U >= (0x1ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->ALUout)))
                                       ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                                      [(0x1ffU & ((IData)(2U) 
                                                  + vlSelf->ALUout))]
                                       : 0U) << 8U) 
                                    | ((0x118U >= (0x1ffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->ALUout)))
                                        ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                                       [(0x1ffU & ((IData)(3U) 
                                                   + vlSelf->ALUout))]
                                        : 0U)))) : vlSelf->ALUout);
        __Vdlyvset__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0 = 1U;
        __Vdlyvdim0__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0 
            = (0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                        >> 7U));
    }
    if (__Vdlyvset__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0) {
        vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[__Vdlyvdim0__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0] 
            = __Vdlyvval__simplecpu__DOT__alu__DOT__regfile__DOT__rom_array__v0;
    }
    vlSelf->a0 = vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
        [0xaU];
}

VL_INLINE_OPT void Vsimplecpu___024root___sequent__TOP__2(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->simplecpu__DOT__cu__DOT__RD_instr = (((
                                                   (0x384U 
                                                    >= 
                                                    (0x3ffU 
                                                     & vlSelf->simplecpu__DOT__PC))
                                                    ? 
                                                   vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                   [
                                                   (0x3ffU 
                                                    & vlSelf->simplecpu__DOT__PC)]
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0x384U 
                                                       >= 
                                                       (0x3ffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->simplecpu__DOT__PC)))
                                                       ? 
                                                      vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                      [
                                                      (0x3ffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->simplecpu__DOT__PC))]
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0x384U 
                                                          >= 
                                                          (0x3ffU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->simplecpu__DOT__PC)))
                                                          ? 
                                                         vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                         [
                                                         (0x3ffU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->simplecpu__DOT__PC))]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0x384U 
                                                           >= 
                                                           (0x3ffU 
                                                            & ((IData)(3U) 
                                                               + vlSelf->simplecpu__DOT__PC)))
                                                           ? 
                                                          vlSelf->simplecpu__DOT__cu__DOT__instructionmemory__DOT__rom_array
                                                          [
                                                          (0x3ffU 
                                                           & ((IData)(3U) 
                                                              + vlSelf->simplecpu__DOT__PC))]
                                                           : 0U))));
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

void Vsimplecpu___024root___eval(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vsimplecpu___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsimplecpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vsimplecpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vsimplecpu___024root___eval_debug_assertions(Vsimplecpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
