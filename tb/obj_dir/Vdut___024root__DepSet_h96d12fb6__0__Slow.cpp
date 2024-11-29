// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[251]);
    ++(vlSymsp->__Vcoverage[265]);
    ++(vlSymsp->__Vcoverage[292]);
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
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
}

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__RegFile__DOT__registers[0U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[1U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[2U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[3U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[4U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[5U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[6U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[7U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[8U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[9U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xaU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xbU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xcU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xdU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xeU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0xfU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x10U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x11U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x12U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x13U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x14U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x15U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x16U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x17U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x18U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x19U] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1aU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1bU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1cU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1dU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1eU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    ++(vlSymsp->__Vcoverage[252]);
    vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x20U;
    ++(vlSymsp->__Vcoverage[253]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[1U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[2U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[3U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[4U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[5U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[6U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[7U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[8U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[9U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xaU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xbU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xcU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xdU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xeU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0xfU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x10U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x11U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x12U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x13U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x14U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x15U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x16U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x17U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x18U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x19U] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1aU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1bU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1cU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1dU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1eU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0x1fU] = 0x13U;
    ++(vlSymsp->__Vcoverage[245]);
    vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0U] = 0xff00313U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[1U] = 0x513U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[2U] = 0x593U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[3U] = 0x58513U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[4U] = 0x158593U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[5U] = 0xfe659ce3U;
    vlSelf->top__DOT__InstructionMemory__DOT__rom_array[6U] = 0xfe0318e3U;
    ++(vlSymsp->__Vcoverage[246]);
}

VL_ATTR_COLD void Vdut___024root___settle__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__RegFile__DOT__registers
        [0xaU];
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

VL_ATTR_COLD void Vdut___024root___configure_coverage(Vdut___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 3, 17, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 4, 17, ".top", "v_toggle/top", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 5, 25, ".top", "v_toggle/top", "a0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 9, 17, ".top", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 9, 17, ".top", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 9, 17, ".top", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 9, 17, ".top", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 9, 17, ".top", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 10, 18, ".top", "v_toggle/top", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 11, 18, ".top", "v_toggle/top", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 18, ".top", "v_toggle/top", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 26, ".top", "v_toggle/top", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 12, 34, ".top", "v_toggle/top", "ALUout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 13, 11, ".top", "v_toggle/top", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 18, ".top", "v_toggle/top", "RD2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 14, 23, ".top", "v_toggle/top", "WD3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 15, 11, ".top", "v_toggle/top", "RegWrite", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 15, 21, ".top", "v_toggle/top", "ALUsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 15, 29, ".top", "v_toggle/top", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 16, 17, ".top", "v_toggle/top", "ImmSrc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 16, 17, ".top", "v_toggle/top", "ImmSrc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 17, 17, ".top", "v_toggle/top", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 17, 17, ".top", "v_toggle/top", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/top.sv", 17, 17, ".top", "v_toggle/top", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 4, 34, ".top.PC_Reg", "v_toggle/program_counter", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 5, 34, ".top.PC_Reg", "v_toggle/program_counter", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 6, 34, ".top.PC_Reg", "v_toggle/program_counter", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 7, 34, ".top.PC_Reg", "v_toggle/program_counter", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".top.PC_Reg", "v_toggle/program_counter", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".top.PC_Reg", "v_toggle/program_counter", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".top.PC_Reg", "v_toggle/program_counter", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".top.PC_Reg", "v_toggle/program_counter", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 8, 34, ".top.PC_Reg", "v_toggle/program_counter", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 15, 13, ".top.PC_Reg", "v_branch/program_counter", "if", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 15, 14, ".top.PC_Reg", "v_branch/program_counter", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 12, 9, ".top.PC_Reg", "v_branch/program_counter", "if", "12-13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 12, 10, ".top.PC_Reg", "v_branch/program_counter", "else", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/program_counter.sv", 11, 5, ".top.PC_Reg", "v_line/program_counter", "block", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 37, ".top.InstructionMemory", "v_toggle/rom", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 37, ".top.InstructionMemory", "v_toggle/rom", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 37, ".top.InstructionMemory", "v_toggle/rom", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 37, ".top.InstructionMemory", "v_toggle/rom", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 5, 37, ".top.InstructionMemory", "v_toggle/rom", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 6, 35, ".top.InstructionMemory", "v_toggle/rom", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 14, 9, ".top.InstructionMemory", "v_line/rom", "block", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/rom.sv", 12, 5, ".top.InstructionMemory", "v_line/rom", "block", "12,14,19-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 4, 25, ".top.SignExtender", "v_toggle/signextension", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 5, 25, ".top.SignExtender", "v_toggle/signextension", "ImmSrc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 5, 25, ".top.SignExtender", "v_toggle/signextension", "ImmSrc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 6, 35, ".top.SignExtender", "v_toggle/signextension", "ImmOp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 11, 18, ".top.SignExtender", "v_line/signextension", "case", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 12, 18, ".top.SignExtender", "v_line/signextension", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 13, 18, ".top.SignExtender", "v_line/signextension", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 14, 13, ".top.SignExtender", "v_line/signextension", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/signextension.sv", 9, 5, ".top.SignExtender", "v_line/signextension", "block", "9-10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 2, 25, ".top.RegFile", "v_toggle/registerfile", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 3, 25, ".top.RegFile", "v_toggle/registerfile", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 4, 25, ".top.RegFile", "v_toggle/registerfile", "WE3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".top.RegFile", "v_toggle/registerfile", "AD1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".top.RegFile", "v_toggle/registerfile", "AD1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".top.RegFile", "v_toggle/registerfile", "AD1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".top.RegFile", "v_toggle/registerfile", "AD1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 5, 25, ".top.RegFile", "v_toggle/registerfile", "AD1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".top.RegFile", "v_toggle/registerfile", "AD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".top.RegFile", "v_toggle/registerfile", "AD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".top.RegFile", "v_toggle/registerfile", "AD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".top.RegFile", "v_toggle/registerfile", "AD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 6, 25, ".top.RegFile", "v_toggle/registerfile", "AD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".top.RegFile", "v_toggle/registerfile", "AD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".top.RegFile", "v_toggle/registerfile", "AD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".top.RegFile", "v_toggle/registerfile", "AD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".top.RegFile", "v_toggle/registerfile", "AD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 7, 25, ".top.RegFile", "v_toggle/registerfile", "AD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 8, 25, ".top.RegFile", "v_toggle/registerfile", "WD3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 9, 25, ".top.RegFile", "v_toggle/registerfile", "RD1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 10, 25, ".top.RegFile", "v_toggle/registerfile", "RD2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 11, 25, ".top.RegFile", "v_toggle/registerfile", "a0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 18, 9, ".top.RegFile", "v_line/registerfile", "block", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 17, 5, ".top.RegFile", "v_line/registerfile", "block", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 26, 13, ".top.RegFile", "v_line/registerfile", "block", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 29, 14, ".top.RegFile", "v_branch/registerfile", "if", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 29, 15, ".top.RegFile", "v_branch/registerfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 24, 9, ".top.RegFile", "v_line/registerfile", "elsif", "24,26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/registerfile.sv", 23, 5, ".top.RegFile", "v_line/registerfile", "block", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 4, 34, ".top.ALUOperandMux", "v_toggle/mux", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 5, 34, ".top.ALUOperandMux", "v_toggle/mux", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 6, 34, ".top.ALUOperandMux", "v_toggle/mux", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/mux.sv", 7, 35, ".top.ALUOperandMux", "v_toggle/mux", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 2, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 3, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 4, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 5, 25, ".top.ArithmeticLogicUnit", "v_toggle/alu", "Result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 6, 18, ".top.ArithmeticLogicUnit", "v_toggle/alu", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 14, 19, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 15, 19, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "15-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 19, 19, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 20, 19, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 21, 19, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 22, 13, ".top.ArithmeticLogicUnit", "v_line/alu", "case", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/alu.sv", 9, 5, ".top.ArithmeticLogicUnit", "v_line/alu", "block", "9-11,13,24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 4, 34, ".top.controlunit", "v_toggle/controlunit", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 5, 33, ".top.controlunit", "v_toggle/controlunit", "EQ", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 6, 33, ".top.controlunit", "v_toggle/controlunit", "ALUctrl[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 6, 33, ".top.controlunit", "v_toggle/controlunit", "ALUctrl[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 6, 33, ".top.controlunit", "v_toggle/controlunit", "ALUctrl[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 7, 33, ".top.controlunit", "v_toggle/controlunit", "ALUsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 8, 33, ".top.controlunit", "v_toggle/controlunit", "ImmSrc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 8, 33, ".top.controlunit", "v_toggle/controlunit", "ImmSrc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 9, 33, ".top.controlunit", "v_toggle/controlunit", "PCsrc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 10, 33, ".top.controlunit", "v_toggle/controlunit", "RegWrite", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 14, 17, ".top.controlunit", "v_toggle/controlunit", "op[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 15, 17, ".top.controlunit", "v_toggle/controlunit", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 15, 17, ".top.controlunit", "v_toggle/controlunit", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 15, 17, ".top.controlunit", "v_toggle/controlunit", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 16, 17, ".top.controlunit", "v_toggle/controlunit", "funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 34, 27, ".top.controlunit", "v_line/controlunit", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 35, 27, ".top.controlunit", "v_line/controlunit", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 36, 27, ".top.controlunit", "v_line/controlunit", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 37, 27, ".top.controlunit", "v_line/controlunit", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 38, 21, ".top.controlunit", "v_line/controlunit", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 32, 23, ".top.controlunit", "v_line/controlunit", "case", "32-33,40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 47, 27, ".top.controlunit", "v_line/controlunit", "case", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 48, 27, ".top.controlunit", "v_line/controlunit", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 49, 27, ".top.controlunit", "v_line/controlunit", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 50, 27, ".top.controlunit", "v_line/controlunit", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 51, 21, ".top.controlunit", "v_line/controlunit", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 45, 23, ".top.controlunit", "v_line/controlunit", "case", "45-46,53-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 59, 23, ".top.controlunit", "v_line/controlunit", "case", "59-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 67, 23, ".top.controlunit", "v_line/controlunit", "case", "67-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 78, 27, ".top.controlunit", "v_line/controlunit", "case", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 79, 27, ".top.controlunit", "v_line/controlunit", "case", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 80, 21, ".top.controlunit", "v_line/controlunit", "case", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 74, 23, ".top.controlunit", "v_line/controlunit", "case", "74-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 85, 23, ".top.controlunit", "v_line/controlunit", "case", "85-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 92, 23, ".top.controlunit", "v_line/controlunit", "case", "92-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 99, 23, ".top.controlunit", "v_line/controlunit", "case", "99-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 105, 23, ".top.controlunit", "v_line/controlunit", "case", "105-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 113, 17, ".top.controlunit", "v_branch/controlunit", "if", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 113, 18, ".top.controlunit", "v_branch/controlunit", "else", "115-116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 111, 23, ".top.controlunit", "v_line/controlunit", "case", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 121, 13, ".top.controlunit", "v_line/controlunit", "case", "121-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/ahmed/Documents/iac/RISC-V-Team2/rtl/controlunit.sv", 22, 5, ".top.controlunit", "v_line/controlunit", "block", "22,24-28,30");
}
