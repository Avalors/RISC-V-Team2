<<<<<<< HEAD
// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__PC),5);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__instr),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__ALUop1),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ALUop2),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ALUout),32);
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__EQ));
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__RD2),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__ALUsrc));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__PCsrc));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__ImmSrc),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__ALUctrl),3);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__RegFile__DOT__registers[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__registers[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__RegFile__DOT__registers[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__RegFile__DOT__registers[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__RegFile__DOT__registers[4]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__RegFile__DOT__registers[5]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__RegFile__DOT__registers[6]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__RegFile__DOT__registers[7]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__RegFile__DOT__registers[8]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__RegFile__DOT__registers[9]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__RegFile__DOT__registers[10]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__RegFile__DOT__registers[11]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__RegFile__DOT__registers[12]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__RegFile__DOT__registers[13]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__RegFile__DOT__registers[14]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__RegFile__DOT__registers[15]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__RegFile__DOT__registers[16]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__RegFile__DOT__registers[17]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__RegFile__DOT__registers[18]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__RegFile__DOT__registers[19]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__RegFile__DOT__registers[20]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__RegFile__DOT__registers[21]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__RegFile__DOT__registers[22]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__RegFile__DOT__registers[23]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__RegFile__DOT__registers[24]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__RegFile__DOT__registers[25]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__RegFile__DOT__registers[26]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__RegFile__DOT__registers[27]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__RegFile__DOT__registers[28]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__RegFile__DOT__registers[29]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__RegFile__DOT__registers[30]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__RegFile__DOT__registers[31]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+83,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+84,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+85,((vlSelf->top__DOT__instr 
                                 >> 0x19U)),7);
    }
    bufp->chgBit(oldp+86,(vlSelf->clk));
    bufp->chgBit(oldp+87,(vlSelf->rst));
    bufp->chgIData(oldp+88,(vlSelf->a0),32);
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
=======
// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__ImmOp),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__ALUop2),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__ALUout),32);
        bufp->chgBit(oldp+37,(vlSelfRef.top__DOT__EQ));
        bufp->chgBit(oldp+38,(vlSelfRef.top__DOT__RegWrite));
        bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__ALUsrc));
        bufp->chgBit(oldp+40,(vlSelfRef.top__DOT__PCsrc));
        bufp->chgCData(oldp+41,(vlSelfRef.top__DOT__ImmSrc),2);
        bufp->chgCData(oldp+42,(vlSelfRef.top__DOT__ALUctrl),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+43,(vlSelfRef.top__DOT__PC),5);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__instr),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__ALUop1),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__RD2),32);
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1),5);
        bufp->chgCData(oldp+48,(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2),5);
        bufp->chgCData(oldp+49,(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3),5);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__RegFile__DOT__registers[0]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__RegFile__DOT__registers[1]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__RegFile__DOT__registers[2]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__RegFile__DOT__registers[3]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__RegFile__DOT__registers[4]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__RegFile__DOT__registers[5]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__RegFile__DOT__registers[6]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__RegFile__DOT__registers[7]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__RegFile__DOT__registers[8]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__RegFile__DOT__registers[9]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__RegFile__DOT__registers[10]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__RegFile__DOT__registers[11]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__RegFile__DOT__registers[12]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__RegFile__DOT__registers[13]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__RegFile__DOT__registers[14]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__RegFile__DOT__registers[15]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__RegFile__DOT__registers[16]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__RegFile__DOT__registers[17]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__RegFile__DOT__registers[18]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__RegFile__DOT__registers[19]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__RegFile__DOT__registers[20]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__RegFile__DOT__registers[21]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__RegFile__DOT__registers[22]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__RegFile__DOT__registers[23]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__RegFile__DOT__registers[24]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__RegFile__DOT__registers[25]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__RegFile__DOT__registers[26]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__RegFile__DOT__registers[27]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__RegFile__DOT__registers[28]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__RegFile__DOT__registers[29]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__RegFile__DOT__registers[30]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__RegFile__DOT__registers[31]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+83,(vlSelfRef.top__DOT__controlunit__DOT__op),7);
        bufp->chgCData(oldp+84,(vlSelfRef.top__DOT__controlunit__DOT__funct3),3);
        bufp->chgCData(oldp+85,(vlSelfRef.top__DOT__controlunit__DOT__funct7),7);
    }
    bufp->chgBit(oldp+86,(vlSelfRef.clk));
    bufp->chgBit(oldp+87,(vlSelfRef.rst));
    bufp->chgIData(oldp+88,(vlSelfRef.a0),32);
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
>>>>>>> 6c54b3beb4dc9cdca7d42b31e47b70bc1919938b
