// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu__Syms.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    if ((0U != (IData)(vlSelf->ALUctrl))) {
        if ((1U == (IData)(vlSelf->ALUctrl))) {
            ++(vlSymsp->__Vcoverage[101]);
        }
        if ((1U != (IData)(vlSelf->ALUctrl))) {
            ++(vlSymsp->__Vcoverage[102]);
        }
    }
    vlSelf->alu__DOT__ALUop1 = vlSelf->ALUop1;
    vlSelf->alu__DOT__ALUop2 = vlSelf->ALUop2;
    vlSelf->alu__DOT__ALUctrl = vlSelf->ALUctrl;
    if ((1U & ((IData)(vlSelf->ALUctrl) ^ (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->alu__DOT____Vtogcov__ALUctrl = ((6U 
                                                 & (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)) 
                                                | (1U 
                                                   & (IData)(vlSelf->ALUctrl)));
    }
    if ((2U & ((IData)(vlSelf->ALUctrl) ^ (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->alu__DOT____Vtogcov__ALUctrl = ((5U 
                                                 & (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)) 
                                                | (2U 
                                                   & (IData)(vlSelf->ALUctrl)));
    }
    if ((4U & ((IData)(vlSelf->ALUctrl) ^ (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->alu__DOT____Vtogcov__ALUctrl = ((3U 
                                                 & (IData)(vlSelf->alu__DOT____Vtogcov__ALUctrl)) 
                                                | (4U 
                                                   & (IData)(vlSelf->ALUctrl)));
    }
    if ((1U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffffeU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (1U 
                                                  & vlSelf->ALUop1));
    }
    if ((2U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffffdU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (2U 
                                                  & vlSelf->ALUop1));
    }
    if ((4U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffffbU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (4U 
                                                  & vlSelf->ALUop1));
    }
    if ((8U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffff7U 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (8U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x10U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffffefU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x10U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x20U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffffdfU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x20U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x40U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffffbfU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x40U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x80U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffff7fU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x80U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x100U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffeffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x100U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x200U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffdffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x200U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x400U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffffbffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x400U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x800U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffff7ffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x800U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x1000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffefffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x1000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x2000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffdfffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x2000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x4000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffffbfffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x4000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x8000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffff7fffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x8000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x10000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffeffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x10000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x20000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffdffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x20000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x40000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfffbffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x40000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x80000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfff7ffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x80000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x100000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffefffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x100000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x200000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffdfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x200000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x400000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xffbfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x400000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x800000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xff7fffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x800000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x1000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfeffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x1000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x2000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfdffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x2000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x4000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xfbffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x4000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x8000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xf7ffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x8000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x10000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xefffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x10000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x20000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xdfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x20000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((0x40000000U & (vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0xbfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x40000000U 
                                                  & vlSelf->ALUop1));
    }
    if (((vlSelf->ALUop1 ^ vlSelf->alu__DOT____Vtogcov__ALUop1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->alu__DOT____Vtogcov__ALUop1 = ((0x7fffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop1) 
                                               | (0x80000000U 
                                                  & vlSelf->ALUop1));
    }
    if ((1U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffffeU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (1U 
                                                  & vlSelf->ALUop2));
    }
    if ((2U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffffdU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (2U 
                                                  & vlSelf->ALUop2));
    }
    if ((4U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffffbU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (4U 
                                                  & vlSelf->ALUop2));
    }
    if ((8U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffff7U 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (8U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x10U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffffefU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x10U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x20U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffffdfU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x20U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x40U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffffbfU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x40U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x80U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffff7fU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x80U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x100U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffeffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x100U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x200U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffdffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x200U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x400U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffffbffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x400U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x800U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffff7ffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x800U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x1000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffefffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x1000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x2000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffdfffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x2000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x4000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffffbfffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x4000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x8000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffff7fffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x8000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x10000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffeffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x10000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x20000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffdffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x20000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x40000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfffbffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x40000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x80000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfff7ffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x80000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x100000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffefffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x100000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x200000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffdfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x200000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x400000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xffbfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x400000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x800000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xff7fffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x800000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x1000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfeffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x1000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x2000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfdffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x2000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x4000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xfbffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x4000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x8000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xf7ffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x8000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x10000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xefffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x10000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x20000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xdfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x20000000U 
                                                  & vlSelf->ALUop2));
    }
    if ((0x40000000U & (vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0xbfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x40000000U 
                                                  & vlSelf->ALUop2));
    }
    if (((vlSelf->ALUop2 ^ vlSelf->alu__DOT____Vtogcov__ALUop2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->alu__DOT____Vtogcov__ALUop2 = ((0x7fffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__ALUop2) 
                                               | (0x80000000U 
                                                  & vlSelf->ALUop2));
    }
    vlSelf->alu__DOT__Result = 0U;
    vlSelf->alu__DOT__EQ = 0U;
    if ((0U == (IData)(vlSelf->ALUctrl))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->alu__DOT__Result = (vlSelf->ALUop1 
                                    + vlSelf->ALUop2);
    } else if ((1U == (IData)(vlSelf->ALUctrl))) {
        vlSelf->alu__DOT__Result = (vlSelf->ALUop1 
                                    - vlSelf->ALUop2);
        vlSelf->alu__DOT__EQ = (0U == vlSelf->alu__DOT__Result);
    } else {
        vlSelf->alu__DOT__Result = 0U;
    }
    vlSelf->EQ = vlSelf->alu__DOT__EQ;
    if (((IData)(vlSelf->alu__DOT__EQ) ^ (IData)(vlSelf->alu__DOT____Vtogcov__EQ))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->alu__DOT____Vtogcov__EQ = vlSelf->alu__DOT__EQ;
    }
    vlSelf->Result = vlSelf->alu__DOT__Result;
    if ((1U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffffeU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (1U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((2U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffffdU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (2U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((4U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffffbU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (4U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((8U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffff7U 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (8U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x10U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffffefU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x10U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x20U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffffdfU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x20U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x40U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffffbfU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x40U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x80U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffff7fU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x80U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x100U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffeffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x100U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x200U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffdffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x200U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x400U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffffbffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x400U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x800U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffff7ffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x800U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x1000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffefffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x1000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x2000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffdfffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x2000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x4000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffffbfffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x4000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x8000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffff7fffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x8000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x10000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffeffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x10000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x20000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffdffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x20000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x40000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfffbffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x40000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x80000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfff7ffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x80000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x100000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffefffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x100000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x200000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffdfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x200000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x400000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xffbfffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x400000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x800000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xff7fffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x800000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x1000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfeffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x1000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x2000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfdffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x2000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x4000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xfbffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x4000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x8000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xf7ffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x8000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x10000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xefffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x10000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x20000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xdfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x20000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if ((0x40000000U & (vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0xbfffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x40000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
    if (((vlSelf->alu__DOT__Result ^ vlSelf->alu__DOT____Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->alu__DOT____Vtogcov__Result = ((0x7fffffffU 
                                                & vlSelf->alu__DOT____Vtogcov__Result) 
                                               | (0x80000000U 
                                                  & vlSelf->alu__DOT__Result));
    }
}
