// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Valu___024root___settle__TOP__0(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    // Body
    Valu___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Valu___024root___final(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___final\n"); );
}

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->Result = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->alu__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT____Vtogcov__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT____Vtogcov__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT____Vtogcov__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->alu__DOT____Vtogcov__Result = VL_RAND_RESET_I(32);
    vlSelf->alu__DOT____Vtogcov__EQ = VL_RAND_RESET_I(1);
}
