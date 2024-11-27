// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

void Vdut___024root___eval_act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_hbe708ad3_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h907ea9b1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h0a5b04b1_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_h61f4f27f_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v0;
    __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__RegFile__DOT__registers__v32;
    __VdlyVal__top__DOT__RegFile__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__RegFile__DOT__registers__v32;
    __VdlyDim0__top__DOT__RegFile__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v32;
    __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 0;
    // Body
    __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x20U;
        __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 1U;
        vlSelfRef.top__DOT__PC = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__RegWrite) 
             & (0U != (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)))) {
            __VdlyVal__top__DOT__RegFile__DOT__registers__v32 
                = vlSelfRef.top__DOT__ALUout;
            __VdlyDim0__top__DOT__RegFile__DOT__registers__v32 
                = vlSelfRef.top__DOT____Vcellinp__RegFile__AD3;
            __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 1U;
        }
        vlSelfRef.top__DOT__PC = ((IData)(vlSelfRef.top__DOT__PCsrc)
                                   ? (vlSelfRef.top__DOT__PC 
                                      + vlSelfRef.top__DOT__ImmOp)
                                   : ((IData)(1U) + vlSelfRef.top__DOT__PC));
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v0) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[1U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[2U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[3U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[4U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[5U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[6U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[7U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[8U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[9U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xaU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xbU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xcU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xdU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xeU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xfU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x10U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x11U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x12U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x13U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x14U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x15U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x16U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x17U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x18U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x19U] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1aU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1bU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1cU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1dU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1eU] = 0U;
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v32) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[__VdlyDim0__top__DOT__RegFile__DOT__registers__v32] 
            = __VdlyVal__top__DOT__RegFile__DOT__registers__v32;
    }
    vlSelfRef.a0 = vlSelfRef.top__DOT__RegFile__DOT__registers
        [0xaU];
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD3 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [(0x1fU & (vlSelfRef.top__DOT__PC 
                             >> 2U))] >> 7U));
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD1 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [(0x1fU & (vlSelfRef.top__DOT__PC 
                             >> 2U))] >> 0xfU));
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD2 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [(0x1fU & (vlSelfRef.top__DOT__PC 
                             >> 2U))] >> 0x14U));
    vlSelfRef.top__DOT__ImmOp = (((- (IData)((vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                                              [(0x1fU 
                                                & (vlSelfRef.top__DOT__PC 
                                                   >> 2U))] 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                                              [(0x1fU 
                                                & (vlSelfRef.top__DOT__PC 
                                                   >> 2U))] 
                                              >> 0x14U));
    __Vtableidx1 = (0x7fU & vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                    [(0x1fU & (vlSelfRef.top__DOT__PC 
                               >> 2U))]);
    vlSelfRef.top__DOT__RegWrite = Vdut__ConstPool__TABLE_hbe708ad3_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ALUsrc = Vdut__ConstPool__TABLE_hbe708ad3_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ImmSrc = Vdut__ConstPool__TABLE_h907ea9b1_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__PCsrc = Vdut__ConstPool__TABLE_h0a5b04b1_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ALUctrl = Vdut__ConstPool__TABLE_h61f4f27f_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__RD1 = ((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1))
                                ? 0U : vlSelfRef.top__DOT__RegFile__DOT__registers
                               [vlSelfRef.top__DOT____Vcellinp__RegFile__AD1]);
    vlSelfRef.top__DOT__ALUop2 = ((IData)(vlSelfRef.top__DOT__ALUsrc)
                                   ? vlSelfRef.top__DOT__ImmOp
                                   : ((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2))
                                       ? 0U : vlSelfRef.top__DOT__RegFile__DOT__registers
                                      [vlSelfRef.top__DOT____Vcellinp__RegFile__AD2]));
    vlSelfRef.top__DOT__ALUout = 0U;
    vlSelfRef.top__DOT__EQ = 0U;
    if ((0U == (IData)(vlSelfRef.top__DOT__ALUctrl))) {
        vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__RD1 
                                      + vlSelfRef.top__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelfRef.top__DOT__ALUctrl))) {
        vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__RD1 
                                      - vlSelfRef.top__DOT__ALUop2);
        vlSelfRef.top__DOT__EQ = (0U == vlSelfRef.top__DOT__ALUout);
    } else {
        vlSelfRef.top__DOT__ALUout = 0U;
    }
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut___024root___eval_phase__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/elsontho/Desktop/IAC_Labs/Final-RISCVT2/RISC-V-Team2/rtl/top.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/elsontho/Desktop/IAC_Labs/Final-RISCVT2/RISC-V-Team2/rtl/top.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
