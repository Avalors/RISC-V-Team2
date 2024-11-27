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
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__instr),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__ALUop2),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ALUout),32);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__EQ));
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__RD1),32);
        bufp->chgIData(oldp+41,(((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                  >> 0x14U)))
                                  ? 0U : vlSelf->top__DOT__RegFile__DOT__registers
                                 [(0x1fU & (vlSelf->top__DOT__instr 
                                            >> 0x14U))])),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__ALUsrc));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__PCsrc));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__ImmSrc),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__ALUctrl),3);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__PC 
                                          >> 2U))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__registers[0]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__RegFile__DOT__registers[1]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__RegFile__DOT__registers[2]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__RegFile__DOT__registers[3]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__RegFile__DOT__registers[4]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__RegFile__DOT__registers[5]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__RegFile__DOT__registers[6]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__RegFile__DOT__registers[7]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__RegFile__DOT__registers[8]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__RegFile__DOT__registers[9]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__RegFile__DOT__registers[10]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__RegFile__DOT__registers[11]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__RegFile__DOT__registers[12]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__RegFile__DOT__registers[13]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__RegFile__DOT__registers[14]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__RegFile__DOT__registers[15]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__RegFile__DOT__registers[16]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__RegFile__DOT__registers[17]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__RegFile__DOT__registers[18]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__RegFile__DOT__registers[19]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__RegFile__DOT__registers[20]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__RegFile__DOT__registers[21]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__RegFile__DOT__registers[22]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__RegFile__DOT__registers[23]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__RegFile__DOT__registers[24]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__RegFile__DOT__registers[25]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__RegFile__DOT__registers[26]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__RegFile__DOT__registers[27]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__RegFile__DOT__registers[28]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__RegFile__DOT__registers[29]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__RegFile__DOT__registers[30]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__RegFile__DOT__registers[31]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+84,((vlSelf->top__DOT__instr 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+85,((1U & (IData)(vlSelf->top__DOT__ImmSrc))));
        bufp->chgCData(oldp+86,((0x7fU & vlSelf->top__DOT__instr)),7);
    }
    bufp->chgBit(oldp+87,(vlSelf->clk));
    bufp->chgBit(oldp+88,(vlSelf->rst));
    bufp->chgIData(oldp+89,(vlSelf->a0),32);
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
