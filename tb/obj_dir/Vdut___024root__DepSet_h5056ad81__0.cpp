// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h6c278d11_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h1b62c8b9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_hf32ca493_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_h8d3b1cde_0;

VL_INLINE_OPT void Vdut___024root___sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdlyvset__top__DOT__RegFile__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__RegFile__DOT__registers__v32;
    IData/*31:0*/ __Vdlyvval__top__DOT__RegFile__DOT__registers__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__RegFile__DOT__registers__v32;
    // Body
    __Vdlyvset__top__DOT__RegFile__DOT__registers__v0 = 0U;
    __Vdlyvset__top__DOT__RegFile__DOT__registers__v32 = 0U;
    if (vlSelf->rst) {
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
        vlSelf->top__DOT__PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                 ? (vlSelf->top__DOT__PC 
                                    + vlSelf->top__DOT__ImmOp)
                                 : ((IData)(1U) + vlSelf->top__DOT__PC));
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
    vlSelf->top__DOT__instr = vlSelf->top__DOT__InstructionMemory__DOT__rom_array
        [(0x1fU & (vlSelf->top__DOT__PC >> 2U))];
    vlSelf->top__DOT__RD1 = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                              >> 0xfU)))
                              ? 0U : vlSelf->top__DOT__RegFile__DOT__registers
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0xfU))]);
    vlSelf->top__DOT__ImmOp = (((- (IData)((vlSelf->top__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__instr 
                                            >> 0x14U));
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__instr);
    vlSelf->top__DOT__RegWrite = Vdut__ConstPool__TABLE_h6c278d11_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUsrc = Vdut__ConstPool__TABLE_h6c278d11_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrc = Vdut__ConstPool__TABLE_h1b62c8b9_0
        [__Vtableidx1];
    vlSelf->top__DOT__PCsrc = Vdut__ConstPool__TABLE_hf32ca493_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUctrl = Vdut__ConstPool__TABLE_h8d3b1cde_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : ((0U == (0x1fU & 
                                            (vlSelf->top__DOT__instr 
                                             >> 0x14U)))
                                     ? 0U : vlSelf->top__DOT__RegFile__DOT__registers
                                    [(0x1fU & (vlSelf->top__DOT__instr 
                                               >> 0x14U))]));
    vlSelf->top__DOT__ALUout = 0U;
    vlSelf->top__DOT__EQ = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__RD1 
                                    + vlSelf->top__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->top__DOT__ALUctrl))) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__RD1 
                                    - vlSelf->top__DOT__ALUop2);
        vlSelf->top__DOT__EQ = (0U == vlSelf->top__DOT__ALUout);
    } else {
        vlSelf->top__DOT__ALUout = 0U;
    }
}

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdut___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
