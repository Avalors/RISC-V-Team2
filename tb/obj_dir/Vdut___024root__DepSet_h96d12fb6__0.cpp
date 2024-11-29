// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___combo__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
}

VL_INLINE_OPT void Vdut___024root___sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__RegFile__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RegFile__DOT__registers__v32;
    IData/*31:0*/ __Vdlyvval__top__DOT__RegFile__DOT__registers__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__RegFile__DOT__registers__v32;
    // Body
    __Vdlyvset__top__DOT__RegFile__DOT__registers__v0 = 0U;
    __Vdlyvset__top__DOT__RegFile__DOT__registers__v32 = 0U;
    ++(vlSymsp->__Vcoverage[244]);
    ++(vlSymsp->__Vcoverage[258]);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        ++(vlSymsp->__Vcoverage[243]);
        if (vlSelf->top__DOT__PCsrc) {
            ++(vlSymsp->__Vcoverage[240]);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__PCsrc)))) {
            ++(vlSymsp->__Vcoverage[241]);
        }
        if (((IData)(vlSelf->top__DOT__RegWrite) & 
             (0U != (0x1fU & (vlSelf->top__DOT__instr 
                              >> 7U))))) {
            ++(vlSymsp->__Vcoverage[255]);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__RegWrite) 
                      & (0U != (0x1fU & (vlSelf->top__DOT__instr 
                                         >> 7U))))))) {
            ++(vlSymsp->__Vcoverage[256]);
        }
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[242]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[257]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x20U;
        __Vdlyvset__top__DOT__RegFile__DOT__registers__v0 = 1U;
        vlSelf->top__DOT__PC = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__RegWrite) & 
             (0U != (0x1fU & (vlSelf->top__DOT__instr 
                              >> 7U))))) {
            __Vdlyvval__top__DOT__RegFile__DOT__registers__v32 
                = vlSelf->top__DOT__ALUout;
            __Vdlyvset__top__DOT__RegFile__DOT__registers__v32 = 1U;
            __Vdlyvdim0__top__DOT__RegFile__DOT__registers__v32 
                = (0x1fU & (vlSelf->top__DOT__instr 
                            >> 7U));
        }
        vlSelf->top__DOT__PC = (0x1fU & ((IData)(vlSelf->top__DOT__PCsrc)
                                          ? ((IData)(vlSelf->top__DOT__PC) 
                                             + vlSelf->top__DOT__ImmOp)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__PC))));
    }
    if (__Vdlyvset__top__DOT__RegFile__DOT__registers__v0) {
        vlSelf->top__DOT__RegFile__DOT__registers[0U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[1U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[2U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[3U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[4U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[5U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[6U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[7U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[8U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[9U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xaU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xbU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xcU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xdU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xeU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0xfU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x10U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x11U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x12U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x13U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x14U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x15U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x16U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x17U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x18U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x19U] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1aU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1bU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1cU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1dU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1eU] = 0U;
        vlSelf->top__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__RegFile__DOT__registers__v32) {
        vlSelf->top__DOT__RegFile__DOT__registers[__Vdlyvdim0__top__DOT__RegFile__DOT__registers__v32] 
            = __Vdlyvval__top__DOT__RegFile__DOT__registers__v32;
    }
    vlSelf->a0 = vlSelf->top__DOT__RegFile__DOT__registers
        [0xaU];
    if ((1U & ((IData)(vlSelf->top__DOT__PC) ^ (IData)(vlSelf->top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__PC = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__PC)) 
                                           | (1U & (IData)(vlSelf->top__DOT__PC)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__PC) ^ (IData)(vlSelf->top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__PC = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__PC)) 
                                           | (2U & (IData)(vlSelf->top__DOT__PC)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__PC) ^ (IData)(vlSelf->top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__PC = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__PC)) 
                                           | (4U & (IData)(vlSelf->top__DOT__PC)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__PC) ^ (IData)(vlSelf->top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__PC = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__PC)) 
                                           | (8U & (IData)(vlSelf->top__DOT__PC)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__PC) ^ (IData)(vlSelf->top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__PC)) 
                                           | (0x10U 
                                              & (IData)(vlSelf->top__DOT__PC)));
    }
    vlSelf->top__DOT__instr = vlSelf->top__DOT__InstructionMemory__DOT__rom_array
        [vlSelf->top__DOT__PC];
    if ((1U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (1U & vlSelf->a0));
    }
    if ((2U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (2U & vlSelf->a0));
    }
    if ((4U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (4U & vlSelf->a0));
    }
    if ((8U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (8U & vlSelf->a0));
    }
    if ((0x10U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x10U 
                                              & vlSelf->a0));
    }
    if ((0x20U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x20U 
                                              & vlSelf->a0));
    }
    if ((0x40U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x40U 
                                              & vlSelf->a0));
    }
    if ((0x80U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x80U 
                                              & vlSelf->a0));
    }
    if ((0x100U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x100U 
                                              & vlSelf->a0));
    }
    if ((0x200U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x200U 
                                              & vlSelf->a0));
    }
    if ((0x400U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x400U 
                                              & vlSelf->a0));
    }
    if ((0x800U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x800U 
                                              & vlSelf->a0));
    }
    if ((0x1000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x1000U 
                                              & vlSelf->a0));
    }
    if ((0x2000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x2000U 
                                              & vlSelf->a0));
    }
    if ((0x4000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x4000U 
                                              & vlSelf->a0));
    }
    if ((0x8000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x8000U 
                                              & vlSelf->a0));
    }
    if ((0x10000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x10000U 
                                              & vlSelf->a0));
    }
    if ((0x20000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x20000U 
                                              & vlSelf->a0));
    }
    if ((0x40000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x40000U 
                                              & vlSelf->a0));
    }
    if ((0x80000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x80000U 
                                              & vlSelf->a0));
    }
    if ((0x100000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x100000U 
                                              & vlSelf->a0));
    }
    if ((0x200000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x200000U 
                                              & vlSelf->a0));
    }
    if ((0x400000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x400000U 
                                              & vlSelf->a0));
    }
    if ((0x800000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x800000U 
                                              & vlSelf->a0));
    }
    if ((0x1000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x1000000U 
                                              & vlSelf->a0));
    }
    if ((0x2000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x2000000U 
                                              & vlSelf->a0));
    }
    if ((0x4000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x4000000U 
                                              & vlSelf->a0));
    }
    if ((0x8000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x8000000U 
                                              & vlSelf->a0));
    }
    if ((0x10000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x10000000U 
                                              & vlSelf->a0));
    }
    if ((0x20000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x20000000U 
                                              & vlSelf->a0));
    }
    if ((0x40000000U & (vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x40000000U 
                                              & vlSelf->a0));
    }
    if (((vlSelf->a0 ^ vlSelf->top__DOT____Vtogcov__a0) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__a0 = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__a0) 
                                           | (0x80000000U 
                                              & vlSelf->a0));
    }
    if ((1U & (~ (vlSelf->top__DOT__instr >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr >> 5U)))) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                if ((0x4000U & vlSelf->top__DOT__instr)) {
                                    if ((0x2000U & vlSelf->top__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[274]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[273]);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                                  >> 0xdU)))) {
                                        ++(vlSymsp->__Vcoverage[276]);
                                    }
                                }
                                if ((1U & (~ (vlSelf->top__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->top__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[276]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[275]);
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[276]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[272]);
                                        }
                                    }
                                }
                                ++(vlSymsp->__Vcoverage[277]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                    if ((4U & vlSelf->top__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[287]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                }
                if ((8U & vlSelf->top__DOT__instr)) {
                    ++(vlSymsp->__Vcoverage[291]);
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__instr >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    ++(vlSymsp->__Vcoverage[291]);
                }
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__instr)) {
                        ++(vlSymsp->__Vcoverage[291]);
                    }
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[278]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[286]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                if ((1U & (~ (vlSelf->top__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[266]);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[270]);
                                        }
                                    }
                                    if ((0x2000U & vlSelf->top__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[269]);
                                        }
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[270]);
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->top__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                                  >> 0xdU)))) {
                                        ++(vlSymsp->__Vcoverage[270]);
                                    }
                                    if ((0x2000U & vlSelf->top__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->top__DOT__instr)) {
                                            ++(vlSymsp->__Vcoverage[268]);
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[267]);
                                        }
                                    }
                                }
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                }
                if ((8U & vlSelf->top__DOT__instr)) {
                    ++(vlSymsp->__Vcoverage[291]);
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__instr >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__instr)) {
                        ++(vlSymsp->__Vcoverage[291]);
                    }
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[279]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                    }
                }
                if ((8U & vlSelf->top__DOT__instr)) {
                    ++(vlSymsp->__Vcoverage[291]);
                }
            }
        }
    }
    vlSelf->top__DOT__RegWrite = 0U;
    if ((1U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (1U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((2U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (2U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((4U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (4U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((8U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (8U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x80U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x100U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x200U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x400U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x800U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x1000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x2000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x4000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x8000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x80000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x100000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x200000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x400000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x800000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__instr = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    if (((vlSelf->top__DOT__instr ^ vlSelf->top__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__instr = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__instr) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__instr));
    }
    vlSelf->top__DOT__ALUctrl = 0U;
    vlSelf->top__DOT__ALUop1 = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                 >> 0xfU)))
                                 ? 0U : vlSelf->top__DOT__RegFile__DOT__registers
                                [(0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0xfU))]);
    vlSelf->top__DOT__ALUsrc = 0U;
    vlSelf->top__DOT__RD2 = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                              >> 0x14U)))
                              ? 0U : vlSelf->top__DOT__RegFile__DOT__registers
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]);
    vlSelf->top__DOT__ImmSrc = 0U;
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__instr >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                            if ((1U & vlSelf->top__DOT__instr)) {
                                if ((0U != (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xcU)))) {
                                        ++(vlSymsp->__Vcoverage[282]);
                                    }
                                    if ((1U == (7U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xcU)))) {
                                        ++(vlSymsp->__Vcoverage[281]);
                                    }
                                }
                                ++(vlSymsp->__Vcoverage[283]);
                                if ((0U == (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)))) {
                                    ++(vlSymsp->__Vcoverage[280]);
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                    if ((4U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[285]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                    }
                }
                if ((8U & vlSelf->top__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[284]);
                            }
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                        }
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                    }
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[291]);
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    ++(vlSymsp->__Vcoverage[291]);
                }
                if ((1U & (~ (vlSelf->top__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__instr 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[291]);
                        }
                        if ((2U & vlSelf->top__DOT__instr)) {
                            if ((1U & (~ vlSelf->top__DOT__instr))) {
                                ++(vlSymsp->__Vcoverage[291]);
                            }
                            if ((1U & vlSelf->top__DOT__instr)) {
                                ++(vlSymsp->__Vcoverage[290]);
                                if ((0U == (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)))) {
                                    ++(vlSymsp->__Vcoverage[288]);
                                }
                                if ((0U != (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)))) {
                                    ++(vlSymsp->__Vcoverage[289]);
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->top__DOT__instr)) {
                        ++(vlSymsp->__Vcoverage[291]);
                    }
                }
                vlSelf->top__DOT__RegWrite = (IData)(
                                                     ((3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__instr)) 
                                                      & (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0xcU)))));
            } else if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__RegWrite = (IData)(
                                                     (7U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->top__DOT__instr)));
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__RegWrite = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__instr)));
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__RegWrite = 0U;
                }
            } else {
                vlSelf->top__DOT__RegWrite = 0U;
            }
        } else {
            vlSelf->top__DOT__RegWrite = 0U;
        }
        if ((1U & (~ (vlSelf->top__DOT__instr >> 5U)))) {
            ++(vlSymsp->__Vcoverage[291]);
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__RegWrite = (1U & ((~ 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 3U)) 
                                                & ((4U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr)
                                                    : 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr))));
        } else if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__RegWrite = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__RegWrite = 0U;
        } else if ((2U & vlSelf->top__DOT__instr)) {
            if ((1U & (~ vlSelf->top__DOT__instr))) {
                vlSelf->top__DOT__RegWrite = 0U;
            }
        } else {
            vlSelf->top__DOT__RegWrite = 0U;
        }
    } else {
        vlSelf->top__DOT__RegWrite = (1U & ((0x10U 
                                             & vlSelf->top__DOT__instr)
                                             ? ((~ 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 3U)) 
                                                & ((4U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr)
                                                    : 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr)))
                                             : (IData)(
                                                       (3U 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->top__DOT__instr)))));
    }
    if (((IData)(vlSelf->top__DOT__RegWrite) ^ (IData)(vlSelf->top__DOT____Vtogcov__RegWrite))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__RegWrite = vlSelf->top__DOT__RegWrite;
    }
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ALUctrl = 0U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ALUctrl = 0U;
                } else if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ALUctrl = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUctrl = 0U;
                }
            } else if ((8U & vlSelf->top__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ vlSelf->top__DOT__instr))) {
                            vlSelf->top__DOT__ALUctrl = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__ALUctrl = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUctrl = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ALUctrl = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUctrl = 0U;
                }
            } else {
                vlSelf->top__DOT__ALUctrl = ((2U & vlSelf->top__DOT__instr)
                                              ? ((1U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 1U
                                                  : 0U)
                                              : 0U);
            }
        } else {
            vlSelf->top__DOT__ALUctrl = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__ALUctrl = 0U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ALUctrl = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUctrl = 0U;
                }
            } else {
                vlSelf->top__DOT__ALUctrl = ((2U & vlSelf->top__DOT__instr)
                                              ? ((1U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 2U
                                                     : 3U)
                                                    : 0U)
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 0U
                                                     : 5U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr)
                                                     ? 0U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->top__DOT__instr 
                                                       >> 0x19U))
                                                      ? 1U
                                                      : 0U))))
                                                  : 0U)
                                              : 0U);
            }
        } else {
            vlSelf->top__DOT__ALUctrl = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__instr)) {
        if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__ALUctrl = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__ALUctrl = 0U;
                }
            } else {
                vlSelf->top__DOT__ALUctrl = 0U;
            }
        } else {
            vlSelf->top__DOT__ALUctrl = ((2U & vlSelf->top__DOT__instr)
                                          ? ((1U & vlSelf->top__DOT__instr)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))
                                              : 0U)
                                          : 0U);
        }
    } else {
        vlSelf->top__DOT__ALUctrl = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ALUctrl) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ALUctrl) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
                ++(vlSymsp->__Vcoverage[260]);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ALUctrl)))) {
                ++(vlSymsp->__Vcoverage[259]);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ALUctrl)))) {
                ++(vlSymsp->__Vcoverage[261]);
            }
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
                ++(vlSymsp->__Vcoverage[262]);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ALUctrl) ^ (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__ALUctrl = ((6U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ALUctrl) ^ (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__ALUctrl = ((5U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__ALUctrl) ^ (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__ALUctrl = ((3U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__ALUctrl)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl)));
    }
    if ((1U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (1U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((2U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (2U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((4U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (4U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((8U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (8U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x10U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x20U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x40U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x80U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x100U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x200U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x400U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x800U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x1000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x2000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x4000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x8000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x10000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x20000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x40000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x80000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x100000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x200000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x400000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x800000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if (((vlSelf->top__DOT__ALUop1 ^ vlSelf->top__DOT____Vtogcov__ALUop1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__ALUop1 = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop1) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__ALUop1));
    }
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__ALUsrc = (IData)(
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->top__DOT__instr)));
            } else if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__ALUsrc = (IData)(
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top__DOT__instr)));
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__ALUsrc = (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__instr)));
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__ALUsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__ALUsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__ALUsrc = 0U;
        }
    } else {
        vlSelf->top__DOT__ALUsrc = (1U & ((0x20U & vlSelf->top__DOT__instr)
                                           ? (IData)(
                                                     (0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->top__DOT__instr)))
                                           : ((0x10U 
                                               & vlSelf->top__DOT__instr)
                                               ? ((~ 
                                                   (vlSelf->top__DOT__instr 
                                                    >> 3U)) 
                                                  & ((4U 
                                                      & vlSelf->top__DOT__instr)
                                                      ? 
                                                     ((vlSelf->top__DOT__instr 
                                                       >> 1U) 
                                                      & vlSelf->top__DOT__instr)
                                                      : 
                                                     ((vlSelf->top__DOT__instr 
                                                       >> 1U) 
                                                      & vlSelf->top__DOT__instr)))
                                               : (IData)(
                                                         (3U 
                                                          == 
                                                          (0xfU 
                                                           & vlSelf->top__DOT__instr))))));
    }
    if (((IData)(vlSelf->top__DOT__ALUsrc) ^ (IData)(vlSelf->top__DOT____Vtogcov__ALUsrc))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__ALUsrc = vlSelf->top__DOT__ALUsrc;
    }
    if ((1U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (1U & vlSelf->top__DOT__RD2));
    }
    if ((2U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (2U & vlSelf->top__DOT__RD2));
    }
    if ((4U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (4U & vlSelf->top__DOT__RD2));
    }
    if ((8U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (8U & vlSelf->top__DOT__RD2));
    }
    if ((0x10U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x20U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x40U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x80U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x100U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x200U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x400U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x800U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x1000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x2000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x4000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x8000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x10000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x20000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x40000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x80000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x100000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x200000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x400000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x800000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if (((vlSelf->top__DOT__RD2 ^ vlSelf->top__DOT____Vtogcov__RD2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__RD2 = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__RD2) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__RD2));
    }
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else if ((8U & vlSelf->top__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & (~ vlSelf->top__DOT__instr))) {
                            vlSelf->top__DOT__ImmSrc = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__ImmSrc = ((2U & vlSelf->top__DOT__instr)
                                             ? ((1U 
                                                 & vlSelf->top__DOT__instr)
                                                 ? 2U
                                                 : 0U)
                                             : 0U);
            }
        } else {
            vlSelf->top__DOT__ImmSrc = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__ImmSrc = 0U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__ImmSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__ImmSrc = ((8U & vlSelf->top__DOT__instr)
                                         ? 0U : ((4U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U)));
        }
    } else if ((0x10U & vlSelf->top__DOT__instr)) {
        if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__ImmSrc = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__ImmSrc = 0U;
                }
            } else {
                vlSelf->top__DOT__ImmSrc = 0U;
            }
        } else {
            vlSelf->top__DOT__ImmSrc = 0U;
        }
    } else {
        vlSelf->top__DOT__ImmSrc = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__ImmSrc))) {
        if ((1U != (IData)(vlSelf->top__DOT__ImmSrc))) {
            if ((2U != (IData)(vlSelf->top__DOT__ImmSrc))) {
                ++(vlSymsp->__Vcoverage[250]);
            }
            if ((2U == (IData)(vlSelf->top__DOT__ImmSrc))) {
                ++(vlSymsp->__Vcoverage[249]);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__ImmSrc))) {
            ++(vlSymsp->__Vcoverage[248]);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__ImmSrc))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__ImmOp = (((- (IData)((vlSelf->top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__instr 
                                                >> 0x14U));
    } else {
        vlSelf->top__DOT__ImmOp = ((1U == (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instr 
                                            >> 7U))))
                                    : ((2U == (IData)(vlSelf->top__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->top__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 7U)))))
                                        : (((- (IData)(
                                                       (vlSelf->top__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->top__DOT__instr 
                                              >> 0x14U))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ImmSrc) ^ (IData)(vlSelf->top__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__ImmSrc = ((2U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ImmSrc)) 
                                               | (1U 
                                                  & (IData)(vlSelf->top__DOT__ImmSrc)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__ImmSrc) ^ (IData)(vlSelf->top__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__ImmSrc = ((1U 
                                                & (IData)(vlSelf->top__DOT____Vtogcov__ImmSrc)) 
                                               | (2U 
                                                  & (IData)(vlSelf->top__DOT__ImmSrc)));
    }
    if ((1U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (1U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((2U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (2U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((4U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (4U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((8U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (8U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x10U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x20U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x40U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x80U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x100U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x200U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x400U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x800U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x1000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x2000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x4000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x8000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x10000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x20000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x40000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x80000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x100000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x200000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x400000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x800000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    if (((vlSelf->top__DOT__ImmOp ^ vlSelf->top__DOT____Vtogcov__ImmOp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__ImmOp = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__ImmOp) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__ImmOp));
    }
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : vlSelf->top__DOT__RD2);
    if ((1U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (1U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((2U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (2U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((4U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (4U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((8U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (8U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x10U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x20U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x40U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x80U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x100U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x200U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x400U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x800U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x1000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x2000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x4000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x8000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x10000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x20000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x40000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x80000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x100000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x200000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x400000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x800000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    if (((vlSelf->top__DOT__ALUop2 ^ vlSelf->top__DOT____Vtogcov__ALUop2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__ALUop2 = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUop2) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__ALUop2));
    }
    vlSelf->top__DOT__ALUout = 0U;
    vlSelf->top__DOT__EQ = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ALUctrl) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ALUctrl)))) {
                ++(vlSymsp->__Vcoverage[264]);
            }
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
                ++(vlSymsp->__Vcoverage[263]);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            ++(vlSymsp->__Vcoverage[264]);
            vlSelf->top__DOT__ALUout = 0U;
        } else {
            vlSelf->top__DOT__ALUout = ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                         ? ((vlSelf->top__DOT__ALUop1 
                                             < vlSelf->top__DOT__ALUop2)
                                             ? 1U : 0U)
                                         : 0U);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                     ? (vlSelf->top__DOT__ALUop1 
                                        | vlSelf->top__DOT__ALUop2)
                                     : (vlSelf->top__DOT__ALUop1 
                                        & vlSelf->top__DOT__ALUop2));
    } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__ALUop1 
                                    - vlSelf->top__DOT__ALUop2);
        vlSelf->top__DOT__EQ = (0U == vlSelf->top__DOT__ALUout);
    } else {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__ALUop1 
                                    + vlSelf->top__DOT__ALUop2);
    }
    vlSelf->top__DOT__EQ = ((0U == vlSelf->top__DOT__ALUout)
                             ? 1U : 0U);
    if (((IData)(vlSelf->top__DOT__EQ) ^ (IData)(vlSelf->top__DOT____Vtogcov__EQ))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__EQ = vlSelf->top__DOT__EQ;
    }
    vlSelf->top__DOT__PCsrc = 0U;
    if ((0x40U & vlSelf->top__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__PCsrc = 0U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__PCsrc = 0U;
                } else if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__PCsrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__PCsrc = (1U & ((8U 
                                                  & vlSelf->top__DOT__instr)
                                                  ? (IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__instr)))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? 
                                                  ((vlSelf->top__DOT__instr 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__instr)
                                                   : 
                                                  ((vlSelf->top__DOT__instr 
                                                    >> 1U) 
                                                   & (vlSelf->top__DOT__instr 
                                                      & ((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 0xcU)))
                                                          ? (IData)(vlSelf->top__DOT__EQ)
                                                          : (IData)(
                                                                    ((0x1000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->top__DOT__instr)) 
                                                                     & (~ (IData)(vlSelf->top__DOT__EQ))))))))));
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__PCsrc = 0U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & (~ vlSelf->top__DOT__instr))) {
                        vlSelf->top__DOT__PCsrc = 0U;
                    }
                } else {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((2U & vlSelf->top__DOT__instr)) {
            if ((1U & (~ vlSelf->top__DOT__instr))) {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else if ((0x10U & vlSelf->top__DOT__instr)) {
        if ((8U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__PCsrc = 0U;
        } else if ((4U & vlSelf->top__DOT__instr)) {
            if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & (~ vlSelf->top__DOT__instr))) {
                    vlSelf->top__DOT__PCsrc = 0U;
                }
            } else {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else if ((2U & vlSelf->top__DOT__instr)) {
            if ((1U & (~ vlSelf->top__DOT__instr))) {
                vlSelf->top__DOT__PCsrc = 0U;
            }
        } else {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else if ((8U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__PCsrc = 0U;
    } else if ((4U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__PCsrc = 0U;
    } else if ((2U & vlSelf->top__DOT__instr)) {
        if ((1U & (~ vlSelf->top__DOT__instr))) {
            vlSelf->top__DOT__PCsrc = 0U;
        }
    } else {
        vlSelf->top__DOT__PCsrc = 0U;
    }
    if ((1U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (1U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((2U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (2U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((4U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (4U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((8U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (8U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x10U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x10U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x20U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x20U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x40U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x40U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x80U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x80U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x100U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x100U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x200U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x200U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x400U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x400U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x800U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x800U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x1000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x1000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x2000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x2000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x4000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x4000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x8000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x8000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x10000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x10000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x20000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x20000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x40000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x40000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x80000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x80000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x100000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x100000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x200000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x200000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x400000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x400000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x800000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x800000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x1000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x2000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x4000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x8000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x10000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x20000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x40000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if (((vlSelf->top__DOT__ALUout ^ vlSelf->top__DOT____Vtogcov__ALUout) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__ALUout = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__ALUout) 
                                               | (0x80000000U 
                                                  & vlSelf->top__DOT__ALUout));
    }
    if (((IData)(vlSelf->top__DOT__PCsrc) ^ (IData)(vlSelf->top__DOT____Vtogcov__PCsrc))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__PCsrc = vlSelf->top__DOT__PCsrc;
    }
}
