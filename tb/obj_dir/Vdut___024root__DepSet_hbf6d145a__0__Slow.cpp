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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__EQ__0 
        = vlSelfRef.top__DOT__EQ;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__EQ__1 
        = vlSelfRef.top__DOT__EQ;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
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
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top.EQ)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf);
void Vdut___024root___act_sequent__TOP__0(Vdut___024root* vlSelf);

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
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdut___024root___act_sequent__TOP__0(vlSelf);
        Vdut___024root____Vm_traceActivitySetAll(vlSelf);
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
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top.EQ)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top.EQ)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____Vcellinp__RegFile__AD3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vcellinp__RegFile__AD2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vcellinp__RegFile__AD1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__PC = VL_RAND_RESET_I(5);
    vlSelf->top__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__ALUctrl = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__RegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__RegFile__DOT____Vtogcov__AD1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegFile__DOT____Vtogcov__AD2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegFile__DOT____Vtogcov__AD3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__controlunit__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__controlunit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__controlunit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__controlunit__DOT____Vtogcov__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__controlunit__DOT____Vtogcov__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__controlunit__DOT____Vtogcov__funct7 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__EQ__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__EQ__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
