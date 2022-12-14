// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimplecpu__Syms.h"


VL_ATTR_COLD void Vsimplecpu___024root__trace_init_sub__TOP__0(Vsimplecpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("simplecpu ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+55,"PC", false,-1, 31,0);
    tracep->declBit(c+34,"PCsrc", false,-1);
    tracep->declBit(c+35,"EQ", false,-1);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBit(c+42,"Resultsrc", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+33,"immOp", false,-1, 31,0);
    tracep->declBit(c+42,"Resultsrc", false,-1);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBit(c+35,"EQ", false,-1);
    tracep->declBus(c+43,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+56,"regOp2", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+57,"WD3", false,-1, 31,0);
    tracep->declBus(c+58,"data_RD", false,-1, 31,0);
    tracep->pushNamePrefix("SelectSignal ");
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"regOp2", false,-1, 31,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alulogic ");
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBit(c+35,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datamem ");
    tracep->declBus(c+54,"A", false,-1, 31,0);
    tracep->declBus(c+58,"data_RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+39,"ad1", false,-1, 4,0);
    tracep->declBus(c+40,"ad2", false,-1, 4,0);
    tracep->declBus(c+41,"ad3", false,-1, 4,0);
    tracep->declBit(c+36,"WE3", false,-1);
    tracep->declBus(c+57,"WD3", false,-1, 31,0);
    tracep->declBus(c+43,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+56,"regOp2", false,-1, 31,0);
    tracep->declBus(c+53,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resmux ");
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBus(c+58,"data_RD", false,-1, 31,0);
    tracep->declBit(c+42,"Resultsrc", false,-1);
    tracep->declBus(c+57,"Result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBit(c+35,"EQ", false,-1);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBit(c+34,"PCsrc", false,-1);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+42,"Resultsrc", false,-1);
    tracep->declBus(c+45,"RD_instr", false,-1, 31,0);
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBit(c+35,"EQ", false,-1);
    tracep->declBus(c+47,"op", false,-1, 6,0);
    tracep->declBus(c+48,"funct3", false,-1, 2,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+42,"Resultsrc", false,-1);
    tracep->declBit(c+34,"PCsrc", false,-1);
    tracep->declBit(c+49,"branch", false,-1);
    tracep->declBus(c+50,"ctrl", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instructionmemory ");
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBus(c+45,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+45,"Instr", false,-1, 31,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+34,"PCsrc", false,-1);
    tracep->declBus(c+55,"PC", false,-1, 31,0);
    tracep->declBus(c+59,"next_PC", false,-1, 31,0);
    tracep->declBus(c+60,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+61,"branch_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsimplecpu___024root__trace_init_top(Vsimplecpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_init_top\n"); );
    // Body
    Vsimplecpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsimplecpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimplecpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimplecpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsimplecpu___024root__trace_register(Vsimplecpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsimplecpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsimplecpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsimplecpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimplecpu___024root__trace_full_sub_0(Vsimplecpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsimplecpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_full_top_0\n"); );
    // Init
    Vsimplecpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimplecpu___024root*>(voidSelf);
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsimplecpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimplecpu___024root__trace_full_sub_0(Vsimplecpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimplecpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->simplecpu__DOT__ImmOp),32);
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                  & (~ (IData)(vlSelf->simplecpu__DOT__EQ))))));
    bufp->fullBit(oldp+35,(vlSelf->simplecpu__DOT__EQ));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                  >> 8U))));
    bufp->fullCData(oldp+37,((7U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                    >> 1U))),3);
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullIData(oldp+43,(vlSelf->simplecpu__DOT__alu__DOT__ALUop1),32);
    bufp->fullIData(oldp+44,(vlSelf->simplecpu__DOT__alu__DOT__ALUop2),32);
    bufp->fullIData(oldp+45,(vlSelf->simplecpu__DOT__cu__DOT__RD_instr),32);
    bufp->fullCData(oldp+46,((3U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                    >> 6U))),2);
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->simplecpu__DOT__cu__DOT__RD_instr)),7);
    bufp->fullCData(oldp+48,((7U & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+49,((1U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))));
    bufp->fullSData(oldp+50,(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl),9);
    bufp->fullBit(oldp+51,(vlSelf->clk));
    bufp->fullBit(oldp+52,(vlSelf->rst));
    bufp->fullIData(oldp+53,(vlSelf->a0),32);
    bufp->fullIData(oldp+54,(vlSelf->ALUout),32);
    bufp->fullIData(oldp+55,(vlSelf->simplecpu__DOT__PC),32);
    bufp->fullIData(oldp+56,(vlSelf->simplecpu__DOT__alu__DOT__regfile__DOT__rom_array
                             [(0x1fU & (vlSelf->simplecpu__DOT__cu__DOT__RD_instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+57,(((0x20U & (IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl))
                               ? ((0x118U >= (0x1ffU 
                                              & vlSelf->ALUout))
                                   ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                                  [(0x1ffU & vlSelf->ALUout)]
                                   : 0U) : vlSelf->ALUout)),32);
    bufp->fullIData(oldp+58,(((0x118U >= (0x1ffU & vlSelf->ALUout))
                               ? vlSelf->simplecpu__DOT__alu__DOT__datamem__DOT__rom_array
                              [(0x1ffU & vlSelf->ALUout)]
                               : 0U)),32);
    bufp->fullIData(oldp+59,(((1U & ((IData)(vlSelf->simplecpu__DOT__cu__DOT__controlunit__DOT__ctrl) 
                                     & (~ (IData)(vlSelf->simplecpu__DOT__EQ))))
                               ? (vlSelf->simplecpu__DOT__PC 
                                  + vlSelf->simplecpu__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->simplecpu__DOT__PC))),32);
    bufp->fullIData(oldp+60,(((IData)(4U) + vlSelf->simplecpu__DOT__PC)),32);
    bufp->fullIData(oldp+61,((vlSelf->simplecpu__DOT__PC 
                              + vlSelf->simplecpu__DOT__ImmOp)),32);
    bufp->fullIData(oldp+62,(5U),32);
    bufp->fullIData(oldp+63,(0x20U),32);
}
