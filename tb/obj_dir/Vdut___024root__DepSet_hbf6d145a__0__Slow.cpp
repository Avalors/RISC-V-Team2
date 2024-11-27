// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___eval_static(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf);
VL_ATTR_COLD void Vdut___024root____Vm_traceActivitySetAll(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdut___024root___eval_initial__TOP(vlSelf);
    Vdut___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[1U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[2U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[3U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[4U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[5U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[6U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[7U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[8U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[9U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xaU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xbU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xcU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xdU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xeU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0xfU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x10U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x11U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x12U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x13U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x14U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x15U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x16U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x17U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x18U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x19U] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1aU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1bU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1cU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1dU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1eU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0x1fU] = 0x13U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[0U] = 0x100513U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[1U] = 0x150513U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[2U] = 0x150513U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[3U] = 0x150513U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[4U] = 0x150513U;
    vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array[5U] = 0x6fU;
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
    vlSelfRef.top__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vdut___024root___eval_final(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdut___024root___eval_phase__stl(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/elsontho/Desktop/IAC_Labs/Final-RISCVT2/RISC-V-Team2/rtl/top.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdut___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdut___024root___stl_sequent__TOP__0(vlSelf);
        Vdut___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_hbe708ad3_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vdut__ConstPool__TABLE_h907ea9b1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vdut__ConstPool__TABLE_h0a5b04b1_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vdut__ConstPool__TABLE_h61f4f27f_0;

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf);

VL_ATTR_COLD bool Vdut___024root___eval_phase__stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root____Vm_traceActivitySetAll(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vcellinp__RegFile__AD3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vcellinp__RegFile__AD2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vcellinp__RegFile__AD1 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__RegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
