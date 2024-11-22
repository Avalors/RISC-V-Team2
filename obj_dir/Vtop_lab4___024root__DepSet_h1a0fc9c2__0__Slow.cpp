// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_lab4.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_lab4___024root.h"

VL_ATTR_COLD void Vtop_lab4___024root___initial__TOP__0(Vtop_lab4___024root* vlSelf);

VL_ATTR_COLD void Vtop_lab4___024root___eval_initial(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___eval_initial\n"); );
    // Body
    Vtop_lab4___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_lab4___024root___settle__TOP__0(Vtop_lab4___024root* vlSelf);
VL_ATTR_COLD void Vtop_lab4___024root___settle__TOP__1(Vtop_lab4___024root* vlSelf);

VL_ATTR_COLD void Vtop_lab4___024root___eval_settle(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___eval_settle\n"); );
    // Body
    Vtop_lab4___024root___settle__TOP__0(vlSelf);
    Vtop_lab4___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtop_lab4___024root___final(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_lab4___024root___ctor_var_reset(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__a0 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__WD3 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->TopLevelCPU__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->TopLevelCPU__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__EQ = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT____Vtogcov__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__addr = VL_RAND_RESET_I(5);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmI = VL_RAND_RESET_I(12);
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__WE3 = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD1 = VL_RAND_RESET_I(5);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD2 = VL_RAND_RESET_I(5);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD3 = VL_RAND_RESET_I(5);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__WD3 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result = VL_RAND_RESET_I(32);
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__EQ = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl = VL_RAND_RESET_I(3);
}
