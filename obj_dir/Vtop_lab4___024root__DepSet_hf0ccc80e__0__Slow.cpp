// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_lab4.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_lab4__Syms.h"
#include "Vtop_lab4___024root.h"

VL_ATTR_COLD void Vtop_lab4___024root___settle__TOP__0(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___settle__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[435]);
    ++(vlSymsp->__Vcoverage[607]);
    ++(vlSymsp->__Vcoverage[619]);
    if ((1U & (vlSelf->TopLevelCPU__DOT__ALUop1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (1U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ALUop1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (2U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ALUop1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (4U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ALUop1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (8U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ALUop1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    if (((vlSelf->TopLevelCPU__DOT__ALUop1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop1) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ALUop1));
    }
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl = 0U;
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl = 0U;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__rst = vlSelf->rst;
    }
    vlSelf->TopLevelCPU__DOT__rst = vlSelf->rst;
    vlSelf->TopLevelCPU__DOT__clk = vlSelf->clk;
    if ((1U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
               ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (1U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
               ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (2U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
               ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (4U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
               ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (8U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                  ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                  ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                  ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                  ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                   ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                   ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                   ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                   ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                    ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                    ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                    ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                    ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                     ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                     ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                     ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                     ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if (((vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
          ^ vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    vlSelf->TopLevelCPU__DOT__PC = vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC;
    if ((1U & ((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl 
            = ((6U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)) 
               | (1U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl)));
    }
    if ((2U & ((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl 
            = ((5U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)) 
               | (2U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl)));
    }
    if ((4U & ((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl 
            = ((3U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl)) 
               | (4U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl)));
    }
    vlSelf->TopLevelCPU__DOT__ALUctrl = vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl;
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__rst = vlSelf->TopLevelCPU__DOT__rst;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__rst = vlSelf->TopLevelCPU__DOT__rst;
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__clk = vlSelf->TopLevelCPU__DOT__clk;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__clk 
        = vlSelf->TopLevelCPU__DOT__clk;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__clk = vlSelf->TopLevelCPU__DOT__clk;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__addr 
        = (0x1fU & (vlSelf->TopLevelCPU__DOT__PC >> 2U));
    if ((1U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffffeU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (1U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffffdU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (2U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffffbU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (4U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffff7U 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (8U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffffefU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x10U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffffdfU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x20U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffffbfU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x40U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffff7fU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x80U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffeffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x100U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffdffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x200U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffffbffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x400U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x800U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffefffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x1000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffdfffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x2000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffffbfffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x4000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffff7fffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x8000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffeffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x10000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffdffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x20000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfffbffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x40000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x80000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffefffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x100000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffdfffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x200000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xffbfffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x400000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__PC 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xff7fffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x800000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfeffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x1000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfdffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x2000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xfbffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x4000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__PC 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x8000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xefffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x10000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xdfffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x20000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__PC 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0xbfffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x40000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if (((vlSelf->TopLevelCPU__DOT__PC ^ vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PC = (
                                                   (0x7fffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__PC) 
                                                   | (0x80000000U 
                                                      & vlSelf->TopLevelCPU__DOT__PC));
    }
    if ((0U != (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
        if ((1U == (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
            ++(vlSymsp->__Vcoverage[605]);
        }
        if ((1U != (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
            ++(vlSymsp->__Vcoverage[606]);
        }
    }
    if ((0U == (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
        ++(vlSymsp->__Vcoverage[604]);
    }
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl 
        = vlSelf->TopLevelCPU__DOT__ALUctrl;
    if ((1U & ((IData)(vlSelf->TopLevelCPU__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl 
            = ((6U & (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)) 
               | (1U & (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl)));
    }
    if ((2U & ((IData)(vlSelf->TopLevelCPU__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl 
            = ((5U & (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)) 
               | (2U & (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl)));
    }
    if ((4U & ((IData)(vlSelf->TopLevelCPU__DOT__ALUctrl) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl 
            = ((3U & (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUctrl)) 
               | (4U & (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl)));
    }
}

VL_ATTR_COLD void Vtop_lab4___024root___initial__TOP__0(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[1U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[2U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[3U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[4U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[5U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[6U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[7U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[8U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[9U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xaU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xbU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xcU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xdU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xeU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xfU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x10U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x11U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x11U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x12U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x12U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x13U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x13U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x14U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x14U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x15U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x15U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x16U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x16U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x17U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x17U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x18U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x18U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x19U;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x19U] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1aU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1aU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1bU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1bU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1cU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1cU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1dU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1dU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1eU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1eU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x1fU;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    ++(vlSymsp->__Vcoverage[532]);
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x20U;
    ++(vlSymsp->__Vcoverage[533]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[1U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[2U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[3U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[4U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[5U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[6U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[7U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[8U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[9U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xaU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xbU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xcU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xdU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xeU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0xfU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x10U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x11U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x11U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x12U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x12U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x13U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x13U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x14U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x14U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x15U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x15U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x16U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x16U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x17U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x17U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x18U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x18U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x19U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x19U] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1aU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1aU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1bU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1bU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1cU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1cU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1dU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1dU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1eU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1eU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x1fU;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0x1fU] = 0x13U;
    ++(vlSymsp->__Vcoverage[400]);
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0U] = 0x100513U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[1U] = 0x150513U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[2U] = 0x150513U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[3U] = 0x150513U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[4U] = 0x150513U;
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[5U] = 0x6fU;
    ++(vlSymsp->__Vcoverage[401]);
}

VL_ATTR_COLD void Vtop_lab4___024root___settle__TOP__1(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 = vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers
        [0xaU];
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
        = vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array
        [(0x1fU & (vlSelf->TopLevelCPU__DOT__PC >> 2U))];
    if ((1U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (1U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (2U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (4U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (8U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    if (((vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 
          ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0));
    }
    vlSelf->TopLevelCPU__DOT__a0 = vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0;
    if ((1U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
               ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (1U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
               ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (2U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
               ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (4U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
               ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (8U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                  ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                  ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                  ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                  ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    if (((vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
          ^ vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr));
    }
    vlSelf->TopLevelCPU__DOT__instr = vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr;
    vlSelf->a0 = vlSelf->TopLevelCPU__DOT__a0;
    if ((1U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffffeU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (1U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffffdU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (2U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffffbU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (4U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffff7U 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (8U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffffefU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x10U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffffdfU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x20U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffffbfU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x40U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffff7fU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x80U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffeffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x100U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffdffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x200U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffffbffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x400U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x800U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffefffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x1000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffdfffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x2000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffffbfffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x4000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffff7fffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x8000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffeffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x10000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffdffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x20000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfffbffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x40000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x80000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffefffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x100000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffdfffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x200000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xffbfffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x400000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__a0 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xff7fffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x800000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfeffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x1000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfdffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x2000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xfbffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x4000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__a0 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x8000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xefffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x10000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xdfffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x20000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__a0 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0xbfffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x40000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if (((vlSelf->TopLevelCPU__DOT__a0 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__a0 = (
                                                   (0x7fffffffU 
                                                    & vlSelf->TopLevelCPU__DOT____Vtogcov__a0) 
                                                   | (0x80000000U 
                                                      & vlSelf->TopLevelCPU__DOT__a0));
    }
    if ((0x13U != (0x7fU & vlSelf->TopLevelCPU__DOT__instr))) {
        if ((0x6fU != (0x7fU & vlSelf->TopLevelCPU__DOT__instr))) {
            ++(vlSymsp->__Vcoverage[618]);
        }
        if ((0x6fU == (0x7fU & vlSelf->TopLevelCPU__DOT__instr))) {
            ++(vlSymsp->__Vcoverage[617]);
        }
    }
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmI 
        = (0xfffU & (vlSelf->TopLevelCPU__DOT__instr 
                     >> 0x14U));
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD1 = (0x1fU 
                                                   & (vlSelf->TopLevelCPU__DOT__instr 
                                                      >> 0xfU));
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD2 = (0x1fU 
                                                   & (vlSelf->TopLevelCPU__DOT__instr 
                                                      >> 0x14U));
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD3 = (0x1fU 
                                                   & (vlSelf->TopLevelCPU__DOT__instr 
                                                      >> 7U));
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__opcode 
        = (0x7fU & (vlSelf->TopLevelCPU__DOT__instr 
                    >> 0U));
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite = 0U;
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite 
        = (0x13U == (0x7fU & vlSelf->TopLevelCPU__DOT__instr));
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc = 0U;
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc 
        = ((0x13U != (0x7fU & vlSelf->TopLevelCPU__DOT__instr)) 
           & (0x6fU == (0x7fU & vlSelf->TopLevelCPU__DOT__instr)));
    if ((1U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (1U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (2U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (4U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (8U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__instr 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__instr 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__instr 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__instr 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__instr 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__instr 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    if (((vlSelf->TopLevelCPU__DOT__instr ^ vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__instr 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__instr) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__instr));
    }
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc = 0U;
    if ((0x13U == (0x7fU & vlSelf->TopLevelCPU__DOT__instr))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc = 0U;
    } else {
        vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc 
            = ((0x6fU == (0x7fU & vlSelf->TopLevelCPU__DOT__instr))
                ? 3U : 0U);
    }
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 = (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TopLevelCPU__DOT__instr 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->TopLevelCPU__DOT__instr 
                                                       >> 0xfU))]);
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc = 0U;
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc 
        = (0x13U == (0x7fU & vlSelf->TopLevelCPU__DOT__instr));
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 = (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TopLevelCPU__DOT__instr 
                                                        >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->TopLevelCPU__DOT__instr 
                                                       >> 0x14U))]);
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
        = (((- (IData)((vlSelf->TopLevelCPU__DOT__instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->TopLevelCPU__DOT__instr 
                                                >> 0x14U));
    VL_WRITEF("Sign Extension: Input = %x, Output = %x\n",
              12,(vlSelf->TopLevelCPU__DOT__instr >> 0x14U),
              32,vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp);
    if (((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__RegWrite))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__RegWrite 
            = vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite;
    }
    vlSelf->TopLevelCPU__DOT__RegWrite = vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite;
    if (((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__PCsrc))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__PCsrc 
            = vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc;
    }
    vlSelf->TopLevelCPU__DOT__PCsrc = vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc;
    if ((1U & ((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc 
            = ((2U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc)) 
               | (1U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc)));
    }
    if ((2U & ((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc 
            = ((1U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc)) 
               | (2U & (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc)));
    }
    vlSelf->TopLevelCPU__DOT__ImmSrc = vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc;
    if ((1U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (1U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (2U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (4U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (8U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    if (((vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1 
          ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1));
    }
    vlSelf->TopLevelCPU__DOT__RD1 = vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1;
    if (((IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUsrc))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUsrc 
            = vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc;
    }
    vlSelf->TopLevelCPU__DOT__ALUsrc = vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc;
    if ((1U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (1U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (2U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (4U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
               ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (8U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                  ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                   ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                    ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    if (((vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2 
          ^ vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2));
    }
    vlSelf->TopLevelCPU__DOT__RD2 = vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2;
    if ((1U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
               ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (1U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
               ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (2U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
               ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (4U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
               ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (8U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                  ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                  ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                  ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                  ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    if (((vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp 
          ^ vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp));
    }
    vlSelf->TopLevelCPU__DOT__ImmOp = vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp;
    if (((IData)(vlSelf->TopLevelCPU__DOT__RegWrite) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__RegWrite))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RegWrite 
            = vlSelf->TopLevelCPU__DOT__RegWrite;
    }
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__WE3 = vlSelf->TopLevelCPU__DOT__RegWrite;
    if (((IData)(vlSelf->TopLevelCPU__DOT__PCsrc) ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__PCsrc))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__PCsrc 
            = vlSelf->TopLevelCPU__DOT__PCsrc;
    }
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PCsrc = vlSelf->TopLevelCPU__DOT__PCsrc;
    vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmSrc 
        = (1U & ((IData)(vlSelf->TopLevelCPU__DOT__ImmSrc) 
                 >> 0U));
    if ((1U & ((IData)(vlSelf->TopLevelCPU__DOT__ImmSrc) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmSrc 
            = (1U & (IData)(vlSelf->TopLevelCPU__DOT__ImmSrc));
    }
    if ((1U & ((IData)(vlSelf->TopLevelCPU__DOT__ImmSrc) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc 
            = ((2U & (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc)) 
               | (1U & (IData)(vlSelf->TopLevelCPU__DOT__ImmSrc)));
    }
    if ((2U & ((IData)(vlSelf->TopLevelCPU__DOT__ImmSrc) 
               ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc 
            = ((1U & (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ImmSrc)) 
               | (2U & (IData)(vlSelf->TopLevelCPU__DOT__ImmSrc)));
    }
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1 
        = vlSelf->TopLevelCPU__DOT__RD1;
    if ((1U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (1U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (2U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (4U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (8U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x10U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x20U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x40U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x80U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x100U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x200U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x400U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x800U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x1000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x2000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x4000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x8000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x10000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x20000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x40000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__RD1 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x80000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x100000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x200000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x400000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__RD1 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x800000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x1000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x2000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x4000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x8000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x10000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x20000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__RD1 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x40000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if (((vlSelf->TopLevelCPU__DOT__RD1 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD1 = 
            ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD1) 
             | (0x80000000U & vlSelf->TopLevelCPU__DOT__RD1));
    }
    if (((IData)(vlSelf->TopLevelCPU__DOT__ALUsrc) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__ALUsrc))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUsrc 
            = vlSelf->TopLevelCPU__DOT__ALUsrc;
    }
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__sel 
        = vlSelf->TopLevelCPU__DOT__ALUsrc;
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in0 
        = vlSelf->TopLevelCPU__DOT__RD2;
    if ((1U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (1U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (2U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (4U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (8U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x10U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x20U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x40U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x80U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x100U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x200U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x400U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x800U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x1000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x2000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x4000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x8000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x10000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x20000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x40000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__RD2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x80000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x100000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x200000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x400000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__RD2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x800000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x1000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x2000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x4000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x8000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x10000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x20000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__RD2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x40000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    if (((vlSelf->TopLevelCPU__DOT__RD2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__RD2 = 
            ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__RD2) 
             | (0x80000000U & vlSelf->TopLevelCPU__DOT__RD2));
    }
    vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__ImmOp = vlSelf->TopLevelCPU__DOT__ImmOp;
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in1 
        = vlSelf->TopLevelCPU__DOT__ImmOp;
    if ((1U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (1U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (2U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (4U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (8U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ImmOp 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    if (((vlSelf->TopLevelCPU__DOT__ImmOp ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ImmOp) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ImmOp));
    }
    vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
        = ((IData)(vlSelf->TopLevelCPU__DOT__ALUsrc)
            ? vlSelf->TopLevelCPU__DOT__ImmOp : vlSelf->TopLevelCPU__DOT__RD2);
    if ((1U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
               ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (1U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
               ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (2U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
               ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (4U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
               ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (8U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                  ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                  ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                  ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                  ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                   ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                   ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                   ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                   ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                    ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                    ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                    ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                    ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                     ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                     ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                     ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                     ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                      ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                      ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                      ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                      ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                       ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                       ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                       ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                       ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                        ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                        ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
                        ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    if (((vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out 
          ^ vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out));
    }
    vlSelf->TopLevelCPU__DOT__ALUop2 = vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out;
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2 
        = vlSelf->TopLevelCPU__DOT__ALUop2;
    if ((1U & (vlSelf->TopLevelCPU__DOT__ALUop2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (1U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ALUop2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (2U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ALUop2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (4U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ALUop2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (8U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ALUop2 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    if (((vlSelf->TopLevelCPU__DOT__ALUop2 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUop2) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ALUop2));
    }
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result = 0U;
    vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ = 0U;
    if ((0U == (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
            = (vlSelf->TopLevelCPU__DOT__RD1 + vlSelf->TopLevelCPU__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->TopLevelCPU__DOT__ALUctrl))) {
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
            = (vlSelf->TopLevelCPU__DOT__RD1 - vlSelf->TopLevelCPU__DOT__ALUop2);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ 
            = (0U == vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result);
    } else {
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result = 0U;
    }
    if (((IData)(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ) 
         ^ (IData)(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__EQ))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__EQ 
            = vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ;
    }
    vlSelf->TopLevelCPU__DOT__EQ = vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ;
    if ((1U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
               ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (1U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
               ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (2U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
               ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (4U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
               ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (8U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                  ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                  ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                  ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                  ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                   ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                   ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                   ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                   ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                    ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                    ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                    ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                    ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                     ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                     ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                     ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                     ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                      ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                      ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                      ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                      ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                       ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                       ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                       ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                       ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                        ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                        ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
                        ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    if (((vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result 
          ^ vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result));
    }
    vlSelf->TopLevelCPU__DOT__ALUout = vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result;
    if (((IData)(vlSelf->TopLevelCPU__DOT__EQ) ^ (IData)(vlSelf->TopLevelCPU__DOT____Vtogcov__EQ))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__EQ = vlSelf->TopLevelCPU__DOT__EQ;
    }
    vlSelf->TopLevelCPU__DOT__controlunit__DOT__EQ 
        = vlSelf->TopLevelCPU__DOT__EQ;
    if ((1U & (vlSelf->TopLevelCPU__DOT__ALUout ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (1U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__ALUout ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (2U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__ALUout ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (4U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__ALUout ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (8U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__ALUout 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x10U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__ALUout 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x20U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__ALUout 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x40U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__ALUout 
                  ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x80U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__ALUout 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x100U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__ALUout 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x200U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__ALUout 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x400U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__ALUout 
                   ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x800U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x1000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x2000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x4000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                    ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x8000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x10000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x20000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x40000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x80000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x100000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x200000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x400000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x800000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x1000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x2000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x4000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x8000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x10000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x20000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__ALUout 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x40000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    if (((vlSelf->TopLevelCPU__DOT__ALUout ^ vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout 
            = ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__ALUout) 
               | (0x80000000U & vlSelf->TopLevelCPU__DOT__ALUout));
    }
    vlSelf->TopLevelCPU__DOT__WD3 = vlSelf->TopLevelCPU__DOT__ALUout;
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__WD3 = vlSelf->TopLevelCPU__DOT__WD3;
    if ((1U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffffeU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (1U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((2U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffffdU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (2U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((4U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffffbU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (4U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((8U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffff7U & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (8U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x10U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffffefU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x10U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x20U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffffdfU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x20U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x40U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffffbfU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x40U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x80U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffff7fU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x80U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x100U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffeffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x100U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x200U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffdffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x200U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x400U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffffbffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x400U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x800U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffff7ffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x800U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x1000U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffefffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x1000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x2000U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffdfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x2000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x4000U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffffbfffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x4000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x8000U & (vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffff7fffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x8000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x10000U & (vlSelf->TopLevelCPU__DOT__WD3 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffeffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x10000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x20000U & (vlSelf->TopLevelCPU__DOT__WD3 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffdffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x20000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x40000U & (vlSelf->TopLevelCPU__DOT__WD3 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfffbffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x40000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x80000U & (vlSelf->TopLevelCPU__DOT__WD3 
                     ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfff7ffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x80000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x100000U & (vlSelf->TopLevelCPU__DOT__WD3 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffefffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x100000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x200000U & (vlSelf->TopLevelCPU__DOT__WD3 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffdfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x200000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x400000U & (vlSelf->TopLevelCPU__DOT__WD3 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xffbfffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x400000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x800000U & (vlSelf->TopLevelCPU__DOT__WD3 
                      ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xff7fffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x800000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x1000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfeffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x1000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x2000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfdffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x2000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x4000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xfbffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x4000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x8000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                       ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xf7ffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x8000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x10000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xefffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x10000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x20000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xdfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x20000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if ((0x40000000U & (vlSelf->TopLevelCPU__DOT__WD3 
                        ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0xbfffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x40000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
    if (((vlSelf->TopLevelCPU__DOT__WD3 ^ vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->TopLevelCPU__DOT____Vtogcov__WD3 = 
            ((0x7fffffffU & vlSelf->TopLevelCPU__DOT____Vtogcov__WD3) 
             | (0x80000000U & vlSelf->TopLevelCPU__DOT__WD3));
    }
}

VL_ATTR_COLD void Vtop_lab4___024root___configure_coverage(Vtop_lab4___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 3, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 4, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 5, 25, ".TopLevelCPU", "v_toggle/TopLevelCPU", "a0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 9, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 10, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 11, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 26, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 12, 34, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 13, 11, ".TopLevelCPU", "v_toggle/TopLevelCPU", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 18, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 23, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RD2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 14, 28, ".TopLevelCPU", "v_toggle/TopLevelCPU", "WD3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 15, 11, ".TopLevelCPU", "v_toggle/TopLevelCPU", "RegWrite", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 15, 21, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 15, 29, ".TopLevelCPU", "v_toggle/TopLevelCPU", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 16, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmSrc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 16, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ImmSrc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 17, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 17, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/TopLevelCPU.sv", 17, 17, ".TopLevelCPU", "v_toggle/TopLevelCPU", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 4, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 5, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 6, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".TopLevelCPU.PC_Reg", "v_toggle/program_counter", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 15, 13, ".TopLevelCPU.PC_Reg", "v_branch/program_counter", "if", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 15, 14, ".TopLevelCPU.PC_Reg", "v_branch/program_counter", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 12, 9, ".TopLevelCPU.PC_Reg", "v_branch/program_counter", "if", "12-13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 12, 10, ".TopLevelCPU.PC_Reg", "v_branch/program_counter", "else", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 11, 5, ".TopLevelCPU.PC_Reg", "v_line/program_counter", "block", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 17, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 37, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 37, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 37, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 37, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 37, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 7, 35, ".TopLevelCPU.InstructionMemory", "v_toggle/rom", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 15, 9, ".TopLevelCPU.InstructionMemory", "v_line/rom", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 13, 5, ".TopLevelCPU.InstructionMemory", "v_line/rom", "block", "13,15,20-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmI[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 5, 25, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmSrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".TopLevelCPU.SignExtender", "v_toggle/signextension", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 9, 5, ".TopLevelCPU.SignExtender", "v_line/signextension", "block", "9,11,14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 2, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 3, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 4, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WE3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "AD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "WD3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "RD2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".TopLevelCPU.RegFile", "v_toggle/registerfile", "a0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 18, 9, ".TopLevelCPU.RegFile", "v_line/registerfile", "block", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 17, 5, ".TopLevelCPU.RegFile", "v_line/registerfile", "block", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 26, 13, ".TopLevelCPU.RegFile", "v_line/registerfile", "block", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 29, 14, ".TopLevelCPU.RegFile", "v_branch/registerfile", "if", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 29, 15, ".TopLevelCPU.RegFile", "v_branch/registerfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 24, 9, ".TopLevelCPU.RegFile", "v_line/registerfile", "elsif", "24,26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 23, 5, ".TopLevelCPU.RegFile", "v_line/registerfile", "block", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 6, 34, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".TopLevelCPU.ALUOperandMux", "v_toggle/mux", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "Result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 6, 18, ".TopLevelCPU.ArithmeticLogicUnit", "v_toggle/alu", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 14, 19, ".TopLevelCPU.ArithmeticLogicUnit", "v_line/alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 15, 19, ".TopLevelCPU.ArithmeticLogicUnit", "v_line/alu", "case", "15-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 19, 13, ".TopLevelCPU.ArithmeticLogicUnit", "v_line/alu", "case", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 9, 5, ".TopLevelCPU.ArithmeticLogicUnit", "v_line/alu", "block", "9-11,13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 2, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 3, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "RegWrite", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 5, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ALUsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 6, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ImmSrc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 6, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ImmSrc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 7, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 8, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 8, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 8, 24, ".TopLevelCPU.controlunit", "v_toggle/controlunit", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 23, 19, ".TopLevelCPU.controlunit", "v_line/controlunit", "case", "23,25-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 32, 19, ".TopLevelCPU.controlunit", "v_line/controlunit", "case", "32-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 40, 13, ".TopLevelCPU.controlunit", "v_line/controlunit", "case", "40-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 5, ".TopLevelCPU.controlunit", "v_line/controlunit", "block", "14,16-20,22");
}
