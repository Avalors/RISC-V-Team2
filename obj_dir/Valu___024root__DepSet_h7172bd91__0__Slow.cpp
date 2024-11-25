// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Valu__Syms.h"
#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___settle__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___settle__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[103]);
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

VL_ATTR_COLD void Valu___024root___configure_coverage(Valu___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".alu", "v_toggle/alu", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".alu", "v_toggle/alu", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".alu", "v_toggle/alu", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".alu", "v_toggle/alu", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".alu", "v_toggle/alu", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".alu", "v_toggle/alu", "Result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 6, 18, ".alu", "v_toggle/alu", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 14, 19, ".alu", "v_line/alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 15, 19, ".alu", "v_line/alu", "case", "15-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 19, 13, ".alu", "v_line/alu", "case", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 9, 5, ".alu", "v_line/alu", "block", "9-11,13");
}
