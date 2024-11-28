// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf);
VL_ATTR_COLD void Vdut___024root___settle__TOP__1(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Body
    Vdut___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vdut___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vdut___024root___final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___final\n"); );
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__PC = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__ALUctrl = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
