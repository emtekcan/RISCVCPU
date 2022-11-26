// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimplecpu__Syms.h"


void Vsimplecpu___024root__trace_chg_sub_0(Vsimplecpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimplecpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_chg_top_0\n"); );
    // Init
    Vsimplecpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimplecpu___024root*>(voidSelf);
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimplecpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimplecpu___024root__trace_chg_sub_0(Vsimplecpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->simplecpu__DOT__ImmOp),32);
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                     & (~ (IData)(vlSelf->simplecpu__DOT__EQ))))));
        bufp->chgBit(oldp+34,(vlSelf->simplecpu__DOT__EQ));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                     >> 8U))));
        bufp->chgCData(oldp+36,((7U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                       >> 1U))),3);
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                     >> 4U))));
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                          >> 7U))),5);
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                     >> 5U))));
        bufp->chgIData(oldp+42,(vlSelf->simplecpu__DOT__alu__DOT__ALUop1),32);
        bufp->chgIData(oldp+43,(vlSelf->simplecpu__DOT__alu__DOT__ALUop2),32);
        bufp->chgIData(oldp+44,(vlSelf->simplecpu__DOT__cu__DOT__RD_instr),32);
        bufp->chgCData(oldp+45,((3U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                       >> 6U))),2);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->simplecpu__DOT__cu__DOT__RD_instr)),7);
        bufp->chgCData(oldp+47,((7U & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+48,((1U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))));
        bufp->chgSData(oldp+49,(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl),9);
    }
    bufp->chgBit(oldp+50,(vlSelf->clk));
    bufp->chgBit(oldp+51,(vlSelf->rst));
    bufp->chgIData(oldp+52,(vlSelf->a0),32);
    bufp->chgIData(oldp+53,(vlSelf->ALUout),32);
    bufp->chgIData(oldp+54,(vlSelf->simplecpu__DOT__PC),32);
    bufp->chgIData(oldp+55,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
                            [(0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+56,(((0x20U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))
                              ? ((0x118U >= (0x1ffU 
                                             & vlSelf->ALUout))
                                  ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                                 [(0x1ffU & vlSelf->ALUout)]
                                  : 0U) : vlSelf->ALUout)),32);
    bufp->chgIData(oldp+57,(((0x118U >= (0x1ffU & vlSelf->ALUout))
                              ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                             [(0x1ffU & vlSelf->ALUout)]
                              : 0U)),32);
    bufp->chgIData(oldp+58,(((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                    & (~ (IData)(vlSelf->simplecpu__DOT__EQ))))
                              ? (vlSelf->simplecpu__DOT__PC 
                                 + vlSelf->simplecpu__DOT__ImmOp)
                              : ((IData)(4U) + vlSelf->simplecpu__DOT__PC))),32);
    bufp->chgIData(oldp+59,(((IData)(4U) + vlSelf->simplecpu__DOT__PC)),32);
    bufp->chgIData(oldp+60,((vlSelf->simplecpu__DOT__PC 
                             + vlSelf->simplecpu__DOT__ImmOp)),32);
}

void Vsimplecpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_cleanup\n"); );
    // Init
    Vsimplecpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimplecpu___024root*>(voidSelf);
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
