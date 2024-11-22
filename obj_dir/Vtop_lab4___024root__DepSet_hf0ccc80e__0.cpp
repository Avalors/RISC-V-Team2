// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_lab4.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_lab4__Syms.h"
#include "Vtop_lab4___024root.h"

VL_INLINE_OPT void Vtop_lab4___024root___combo__TOP__0(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___combo__TOP__0\n"); );
    // Body
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

VL_INLINE_OPT void Vtop_lab4___024root___sequent__TOP__0(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__TopLevelCPU__DOT__RegFile__DOT__registers__v32;
    IData/*31:0*/ __Vdlyvval__TopLevelCPU__DOT__RegFile__DOT__registers__v32;
    CData/*0:0*/ __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v32;
    // Body
    __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v0 = 0U;
    __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v32 = 0U;
    ++(vlSymsp->__Vcoverage[367]);
    ++(vlSymsp->__Vcoverage[538]);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[366]);
        if (vlSelf->TopLevelCPU__DOT__PCsrc) {
            ++(vlSymsp->__Vcoverage[363]);
        }
        if ((1U & (~ (IData)(vlSelf->TopLevelCPU__DOT__PCsrc)))) {
            ++(vlSymsp->__Vcoverage[364]);
        }
        if (((IData)(vlSelf->TopLevelCPU__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->TopLevelCPU__DOT__instr 
                                >> 7U))))) {
            ++(vlSymsp->__Vcoverage[535]);
        }
        if ((1U & (~ ((IData)(vlSelf->TopLevelCPU__DOT__RegWrite) 
                      & (0U != (0x1fU & (vlSelf->TopLevelCPU__DOT__instr 
                                         >> 7U))))))) {
            ++(vlSymsp->__Vcoverage[536]);
        }
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[365]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[537]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 1U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 2U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 3U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 4U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 5U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 6U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 7U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 8U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 9U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xbU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xcU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xdU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xeU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0xfU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x11U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x12U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x13U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x14U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x15U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x16U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x17U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x18U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x19U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1aU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1bU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1cU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1dU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1eU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x1fU;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x20U;
        __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v0 = 1U;
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC = 0U;
    } else {
        if (((IData)(vlSelf->TopLevelCPU__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->TopLevelCPU__DOT__instr 
                                >> 7U))))) {
            __Vdlyvval__TopLevelCPU__DOT__RegFile__DOT__registers__v32 
                = vlSelf->TopLevelCPU__DOT__WD3;
            __Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v32 = 1U;
            __Vdlyvdim0__TopLevelCPU__DOT__RegFile__DOT__registers__v32 
                = (0x1fU & (vlSelf->TopLevelCPU__DOT__instr 
                            >> 7U));
        }
        vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC = 
            ((IData)(vlSelf->TopLevelCPU__DOT__PCsrc)
              ? (vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC 
                 + vlSelf->TopLevelCPU__DOT__ImmOp)
              : ((IData)(4U) + vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC));
    }
    if (__Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v0) {
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[1U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[2U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[3U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[4U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[5U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[6U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[7U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[8U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[9U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xaU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xbU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xcU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xdU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xeU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0xfU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x10U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x11U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x12U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x13U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x14U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x15U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x16U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x17U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x18U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x19U] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1aU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1bU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1cU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1dU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1eU] = 0U;
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__TopLevelCPU__DOT__RegFile__DOT__registers__v32) {
        vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[__Vdlyvdim0__TopLevelCPU__DOT__RegFile__DOT__registers__v32] 
            = __Vdlyvval__TopLevelCPU__DOT__RegFile__DOT__registers__v32;
    }
}

VL_INLINE_OPT void Vtop_lab4___024root___combo__TOP__1(Vtop_lab4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0 = vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers
        [0xaU];
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
    vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr 
        = vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array
        [(0x1fU & (vlSelf->TopLevelCPU__DOT__PC >> 2U))];
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
