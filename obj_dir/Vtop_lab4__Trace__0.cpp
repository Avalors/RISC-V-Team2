// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_lab4__Syms.h"


void Vtop_lab4___024root__trace_chg_sub_0(Vtop_lab4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_lab4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_lab4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_lab4___024root*>(voidSelf);
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_lab4___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_lab4___024root__trace_chg_sub_0(Vtop_lab4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->a0),32);
    bufp->chgBit(oldp+3,(vlSelf->TopLevelCPU__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->TopLevelCPU__DOT__rst));
    bufp->chgIData(oldp+5,(vlSelf->TopLevelCPU__DOT__a0),32);
    bufp->chgIData(oldp+6,(vlSelf->TopLevelCPU__DOT__PC),32);
    bufp->chgIData(oldp+7,(vlSelf->TopLevelCPU__DOT__instr),32);
    bufp->chgIData(oldp+8,(vlSelf->TopLevelCPU__DOT__ImmOp),32);
    bufp->chgIData(oldp+9,(vlSelf->TopLevelCPU__DOT__ALUop1),32);
    bufp->chgIData(oldp+10,(vlSelf->TopLevelCPU__DOT__ALUop2),32);
    bufp->chgIData(oldp+11,(vlSelf->TopLevelCPU__DOT__ALUout),32);
    bufp->chgBit(oldp+12,(vlSelf->TopLevelCPU__DOT__EQ));
    bufp->chgIData(oldp+13,(vlSelf->TopLevelCPU__DOT__RD1),32);
    bufp->chgIData(oldp+14,(vlSelf->TopLevelCPU__DOT__RD2),32);
    bufp->chgIData(oldp+15,(vlSelf->TopLevelCPU__DOT__WD3),32);
    bufp->chgBit(oldp+16,(vlSelf->TopLevelCPU__DOT__RegWrite));
    bufp->chgBit(oldp+17,(vlSelf->TopLevelCPU__DOT__ALUsrc));
    bufp->chgBit(oldp+18,(vlSelf->TopLevelCPU__DOT__PCsrc));
    bufp->chgCData(oldp+19,(vlSelf->TopLevelCPU__DOT__ImmSrc),2);
    bufp->chgCData(oldp+20,(vlSelf->TopLevelCPU__DOT__ALUctrl),3);
    bufp->chgIData(oldp+21,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in0),32);
    bufp->chgIData(oldp+22,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in1),32);
    bufp->chgBit(oldp+23,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__sel));
    bufp->chgIData(oldp+24,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out),32);
    bufp->chgIData(oldp+25,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1),32);
    bufp->chgIData(oldp+26,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2),32);
    bufp->chgCData(oldp+27,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl),3);
    bufp->chgIData(oldp+28,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result),32);
    bufp->chgBit(oldp+29,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ));
    bufp->chgBit(oldp+30,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__clk));
    bufp->chgCData(oldp+31,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__addr),5);
    bufp->chgIData(oldp+32,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr),32);
    bufp->chgIData(oldp+33,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0]),32);
    bufp->chgIData(oldp+34,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[1]),32);
    bufp->chgIData(oldp+35,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[2]),32);
    bufp->chgIData(oldp+36,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[3]),32);
    bufp->chgIData(oldp+37,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[4]),32);
    bufp->chgIData(oldp+38,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[5]),32);
    bufp->chgIData(oldp+39,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[6]),32);
    bufp->chgIData(oldp+40,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[7]),32);
    bufp->chgIData(oldp+41,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[8]),32);
    bufp->chgIData(oldp+42,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[9]),32);
    bufp->chgIData(oldp+43,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[10]),32);
    bufp->chgIData(oldp+44,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[11]),32);
    bufp->chgIData(oldp+45,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[12]),32);
    bufp->chgIData(oldp+46,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[13]),32);
    bufp->chgIData(oldp+47,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[14]),32);
    bufp->chgIData(oldp+48,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[15]),32);
    bufp->chgIData(oldp+49,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[16]),32);
    bufp->chgIData(oldp+50,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[17]),32);
    bufp->chgIData(oldp+51,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[18]),32);
    bufp->chgIData(oldp+52,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[19]),32);
    bufp->chgIData(oldp+53,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[20]),32);
    bufp->chgIData(oldp+54,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[21]),32);
    bufp->chgIData(oldp+55,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[22]),32);
    bufp->chgIData(oldp+56,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[23]),32);
    bufp->chgIData(oldp+57,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[24]),32);
    bufp->chgIData(oldp+58,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[25]),32);
    bufp->chgIData(oldp+59,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[26]),32);
    bufp->chgIData(oldp+60,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[27]),32);
    bufp->chgIData(oldp+61,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[28]),32);
    bufp->chgIData(oldp+62,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[29]),32);
    bufp->chgIData(oldp+63,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[30]),32);
    bufp->chgIData(oldp+64,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[31]),32);
    bufp->chgIData(oldp+65,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->chgBit(oldp+66,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__clk));
    bufp->chgBit(oldp+67,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__rst));
    bufp->chgBit(oldp+68,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PCsrc));
    bufp->chgIData(oldp+69,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__ImmOp),32);
    bufp->chgIData(oldp+70,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC),32);
    bufp->chgBit(oldp+71,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__clk));
    bufp->chgBit(oldp+72,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__rst));
    bufp->chgBit(oldp+73,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__WE3));
    bufp->chgCData(oldp+74,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD1),5);
    bufp->chgCData(oldp+75,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD2),5);
    bufp->chgCData(oldp+76,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD3),5);
    bufp->chgIData(oldp+77,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__WD3),32);
    bufp->chgIData(oldp+78,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1),32);
    bufp->chgIData(oldp+79,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2),32);
    bufp->chgIData(oldp+80,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0),32);
    bufp->chgIData(oldp+81,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0]),32);
    bufp->chgIData(oldp+82,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[1]),32);
    bufp->chgIData(oldp+83,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[2]),32);
    bufp->chgIData(oldp+84,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[3]),32);
    bufp->chgIData(oldp+85,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[4]),32);
    bufp->chgIData(oldp+86,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[5]),32);
    bufp->chgIData(oldp+87,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[6]),32);
    bufp->chgIData(oldp+88,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[7]),32);
    bufp->chgIData(oldp+89,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[8]),32);
    bufp->chgIData(oldp+90,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[9]),32);
    bufp->chgIData(oldp+91,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[10]),32);
    bufp->chgIData(oldp+92,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[11]),32);
    bufp->chgIData(oldp+93,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[12]),32);
    bufp->chgIData(oldp+94,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[13]),32);
    bufp->chgIData(oldp+95,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[14]),32);
    bufp->chgIData(oldp+96,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[15]),32);
    bufp->chgIData(oldp+97,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[16]),32);
    bufp->chgIData(oldp+98,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[17]),32);
    bufp->chgIData(oldp+99,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[18]),32);
    bufp->chgIData(oldp+100,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[19]),32);
    bufp->chgIData(oldp+101,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[20]),32);
    bufp->chgIData(oldp+102,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[21]),32);
    bufp->chgIData(oldp+103,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[22]),32);
    bufp->chgIData(oldp+104,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[23]),32);
    bufp->chgIData(oldp+105,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[24]),32);
    bufp->chgIData(oldp+106,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[25]),32);
    bufp->chgIData(oldp+107,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[26]),32);
    bufp->chgIData(oldp+108,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[27]),32);
    bufp->chgIData(oldp+109,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[28]),32);
    bufp->chgIData(oldp+110,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[29]),32);
    bufp->chgIData(oldp+111,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[30]),32);
    bufp->chgIData(oldp+112,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[31]),32);
    bufp->chgIData(oldp+113,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+114,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
    bufp->chgSData(oldp+115,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmI),12);
    bufp->chgBit(oldp+116,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmSrc));
    bufp->chgIData(oldp+117,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp),32);
    bufp->chgCData(oldp+118,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__opcode),7);
    bufp->chgBit(oldp+119,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__EQ));
    bufp->chgBit(oldp+120,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite));
    bufp->chgBit(oldp+121,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc));
    bufp->chgCData(oldp+122,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc),2);
    bufp->chgBit(oldp+123,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc));
    bufp->chgCData(oldp+124,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl),3);
}

void Vtop_lab4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_cleanup\n"); );
    // Init
    Vtop_lab4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_lab4___024root*>(voidSelf);
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
