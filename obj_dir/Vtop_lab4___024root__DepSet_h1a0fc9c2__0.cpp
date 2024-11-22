// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_lab4.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_lab4___024root.h"

void Vtop_lab4___024root___combo__TOP__0(Vtop_lab4___024root* vlSelf);
void Vtop_lab4___024root___sequent__TOP__0(Vtop_lab4___024root* vlSelf);
void Vtop_lab4___024root___combo__TOP__1(Vtop_lab4___024root* vlSelf);

void Vtop_lab4___024root___eval(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___eval\n"); );
    // Body
    Vtop_lab4___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_lab4___024root___sequent__TOP__0(vlSelf);
    }
    Vtop_lab4___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop_lab4___024root___eval_debug_assertions(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
