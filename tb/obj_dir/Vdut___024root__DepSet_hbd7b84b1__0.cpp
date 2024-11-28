// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut__Syms.h"
#include "Vdut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval_triggers__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.top__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.top__DOT____Vtogcov__rst = vlSelfRef.rst;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.top__DOT__EQ) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__EQ__1)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__EQ__1 
        = vlSelfRef.top__DOT__EQ;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdut___024root___act_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__ALUctrl = 0U;
    vlSelfRef.top__DOT__ALUsrc = 0U;
    vlSelfRef.top__DOT__ImmSrc = 0U;
    vlSelfRef.top__DOT__PCsrc = 0U;
    vlSelfRef.top__DOT__RegWrite = 0U;
    if ((0x40U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                    ++(vlSymsp->__Vcoverage[323]);
                } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                        vlSelfRef.top__DOT__ALUsrc = 1U;
                        if ((0U == (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[320]);
                            vlSelfRef.top__DOT__RegWrite = 0U;
                        } else {
                            ++(vlSymsp->__Vcoverage[321]);
                            vlSelfRef.top__DOT__RegWrite = 1U;
                        }
                        ++(vlSymsp->__Vcoverage[322]);
                    } else {
                        ++(vlSymsp->__Vcoverage[323]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                        vlSelfRef.top__DOT__ALUsrc = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 0U;
                        vlSelfRef.top__DOT__PCsrc = 0U;
                        vlSelfRef.top__DOT__RegWrite = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                            ++(vlSymsp->__Vcoverage[316]);
                            vlSelfRef.top__DOT__PCsrc = 1U;
                            vlSelfRef.top__DOT__RegWrite = 1U;
                            vlSelfRef.top__DOT__ALUsrc = 1U;
                        } else {
                            ++(vlSymsp->__Vcoverage[323]);
                            vlSelfRef.top__DOT__ALUctrl = 0U;
                            vlSelfRef.top__DOT__ALUsrc = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 0U;
                            vlSelfRef.top__DOT__PCsrc = 0U;
                            vlSelfRef.top__DOT__RegWrite = 0U;
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[323]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                        vlSelfRef.top__DOT__ALUsrc = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 0U;
                        vlSelfRef.top__DOT__PCsrc = 0U;
                        vlSelfRef.top__DOT__RegWrite = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                        ++(vlSymsp->__Vcoverage[317]);
                        vlSelfRef.top__DOT__PCsrc = 1U;
                        vlSelfRef.top__DOT__RegWrite = 1U;
                        vlSelfRef.top__DOT__ALUsrc = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[323]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                        vlSelfRef.top__DOT__ALUsrc = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 0U;
                        vlSelfRef.top__DOT__PCsrc = 0U;
                        vlSelfRef.top__DOT__RegWrite = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    vlSelfRef.top__DOT__ALUctrl = 1U;
                    vlSelfRef.top__DOT__ImmSrc = 2U;
                    if ((0U == (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[312]);
                        vlSelfRef.top__DOT__PCsrc = vlSelfRef.top__DOT__EQ;
                    } else if ((1U == (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[313]);
                        vlSelfRef.top__DOT__PCsrc = 
                            (1U & (~ (IData)(vlSelfRef.top__DOT__EQ)));
                    } else {
                        ++(vlSymsp->__Vcoverage[314]);
                        vlSelfRef.top__DOT__PCsrc = 0U;
                    }
                    ++(vlSymsp->__Vcoverage[315]);
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                        ++(vlSymsp->__Vcoverage[318]);
                        vlSelfRef.top__DOT__RegWrite = 1U;
                        vlSelfRef.top__DOT__ALUsrc = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[323]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                        vlSelfRef.top__DOT__ALUsrc = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 0U;
                        vlSelfRef.top__DOT__PCsrc = 0U;
                        vlSelfRef.top__DOT__RegWrite = 0U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[300]);
                                vlSelfRef.top__DOT__ALUctrl = 2U;
                            } else {
                                ++(vlSymsp->__Vcoverage[299]);
                                vlSelfRef.top__DOT__ALUctrl = 3U;
                            }
                        } else {
                            ++(vlSymsp->__Vcoverage[302]);
                            vlSelfRef.top__DOT__ALUctrl = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[302]);
                            vlSelfRef.top__DOT__ALUctrl = 0U;
                        } else {
                            ++(vlSymsp->__Vcoverage[301]);
                            vlSelfRef.top__DOT__ALUctrl = 5U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[302]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[298]);
                        vlSelfRef.top__DOT__ALUctrl 
                            = ((0x20U == (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7))
                                ? 1U : 0U);
                    }
                    vlSelfRef.top__DOT__RegWrite = 1U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    ++(vlSymsp->__Vcoverage[303]);
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                ++(vlSymsp->__Vcoverage[311]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                    ++(vlSymsp->__Vcoverage[319]);
                    vlSelfRef.top__DOT__RegWrite = 1U;
                    vlSelfRef.top__DOT__ALUsrc = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[323]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                    vlSelfRef.top__DOT__ALUsrc = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                    vlSelfRef.top__DOT__PCsrc = 0U;
                    vlSelfRef.top__DOT__RegWrite = 0U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[306]);
                            vlSelfRef.top__DOT__ALUctrl = 2U;
                        } else {
                            ++(vlSymsp->__Vcoverage[305]);
                            vlSelfRef.top__DOT__ALUctrl = 3U;
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[308]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[308]);
                        vlSelfRef.top__DOT__ALUctrl = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[307]);
                        vlSelfRef.top__DOT__ALUctrl = 5U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3))) {
                    ++(vlSymsp->__Vcoverage[308]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[304]);
                    vlSelfRef.top__DOT__ALUctrl = 0U;
                }
                vlSelfRef.top__DOT__RegWrite = 1U;
                vlSelfRef.top__DOT__ALUsrc = 1U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                ++(vlSymsp->__Vcoverage[309]);
            } else {
                ++(vlSymsp->__Vcoverage[323]);
                vlSelfRef.top__DOT__ALUctrl = 0U;
                vlSelfRef.top__DOT__ALUsrc = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__PCsrc = 0U;
                vlSelfRef.top__DOT__RegWrite = 0U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.top__DOT__ALUctrl = 0U;
        vlSelfRef.top__DOT__ALUsrc = 0U;
        vlSelfRef.top__DOT__ImmSrc = 0U;
        vlSelfRef.top__DOT__PCsrc = 0U;
        vlSelfRef.top__DOT__RegWrite = 0U;
    } else if ((4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.top__DOT__ALUctrl = 0U;
        vlSelfRef.top__DOT__ALUsrc = 0U;
        vlSelfRef.top__DOT__ImmSrc = 0U;
        vlSelfRef.top__DOT__PCsrc = 0U;
        vlSelfRef.top__DOT__RegWrite = 0U;
    } else if ((2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op))) {
            ++(vlSymsp->__Vcoverage[310]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__RegWrite = 1U;
            vlSelfRef.top__DOT__ALUsrc = 1U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.top__DOT__ALUctrl = 0U;
            vlSelfRef.top__DOT__ALUsrc = 0U;
            vlSelfRef.top__DOT__ImmSrc = 0U;
            vlSelfRef.top__DOT__PCsrc = 0U;
            vlSelfRef.top__DOT__RegWrite = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.top__DOT__ALUctrl = 0U;
        vlSelfRef.top__DOT__ALUsrc = 0U;
        vlSelfRef.top__DOT__ImmSrc = 0U;
        vlSelfRef.top__DOT__PCsrc = 0U;
        vlSelfRef.top__DOT__RegWrite = 0U;
    }
    ++(vlSymsp->__Vcoverage[324]);
    if (((IData)(vlSelfRef.top__DOT__PCsrc) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PCsrc))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.top__DOT____Vtogcov__PCsrc = vlSelfRef.top__DOT__PCsrc;
    }
    if (((IData)(vlSelfRef.top__DOT__RegWrite) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__RegWrite))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.top__DOT____Vtogcov__RegWrite = vlSelfRef.top__DOT__RegWrite;
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
               ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.top__DOT____Vtogcov__ALUctrl = ((6U 
                                                   & (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUctrl)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
               ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.top__DOT____Vtogcov__ALUctrl = ((5U 
                                                   & (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUctrl)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
               ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.top__DOT____Vtogcov__ALUctrl = ((3U 
                                                   & (IData)(vlSelfRef.top__DOT____Vtogcov__ALUctrl)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUctrl)));
    }
    if (((IData)(vlSelfRef.top__DOT__ALUsrc) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ALUsrc))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.top__DOT____Vtogcov__ALUsrc = vlSelfRef.top__DOT__ALUsrc;
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__ImmSrc) 
               ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.top__DOT____Vtogcov__ImmSrc = ((2U 
                                                  & (IData)(vlSelfRef.top__DOT____Vtogcov__ImmSrc)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.top__DOT__ImmSrc)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__ImmSrc) 
               ^ (IData)(vlSelfRef.top__DOT____Vtogcov__ImmSrc)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.top__DOT____Vtogcov__ImmSrc = ((1U 
                                                  & (IData)(vlSelfRef.top__DOT____Vtogcov__ImmSrc)) 
                                                 | (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ImmSrc)));
    }
    if ((0U == (IData)(vlSelfRef.top__DOT__ImmSrc))) {
        vlSelfRef.top__DOT__ImmOp = (((- (IData)((vlSelfRef.top__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSelfRef.top__DOT__instr 
                                                  >> 0x14U));
        ++(vlSymsp->__Vcoverage[247]);
    } else if ((1U == (IData)(vlSelfRef.top__DOT__ImmSrc))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.top__DOT__ImmOp = (((- (IData)((vlSelfRef.top__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelfRef.top__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 7U))));
    } else if ((2U == (IData)(vlSelfRef.top__DOT__ImmSrc))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.top__DOT__ImmOp = (((- (IData)((vlSelfRef.top__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelfRef.top__DOT__instr 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.top__DOT__instr 
                                                           >> 7U)))));
    } else {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.top__DOT__ImmOp = (((- (IData)((vlSelfRef.top__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSelfRef.top__DOT__instr 
                                                  >> 0x14U));
    }
    ++(vlSymsp->__Vcoverage[251]);
    if ((1U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffffeU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (1U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((2U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffffdU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (2U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((4U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffffbU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (4U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((8U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffff7U 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (8U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x10U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffffefU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x10U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x20U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffffdfU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x20U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x40U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffffbfU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x40U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x80U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffff7fU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x80U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x100U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffeffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x100U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x200U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffdffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x200U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x400U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffffbffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x400U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x800U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffff7ffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x800U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffefffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x1000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffdfffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x2000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffffbfffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x4000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffff7fffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x8000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffeffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x10000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffdffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x20000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfffbffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x40000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfff7ffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x80000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffefffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x100000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffdfffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x200000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xffbfffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x400000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xff7fffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x800000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfeffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x1000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfdffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x2000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xfbffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x4000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xf7ffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x8000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xefffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x10000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xdfffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x20000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0xbfffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x40000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    if (((vlSelfRef.top__DOT__ImmOp ^ vlSelfRef.top__DOT____Vtogcov__ImmOp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.top__DOT____Vtogcov__ImmOp = ((0x7fffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__ImmOp) 
                                                | (0x80000000U 
                                                   & vlSelfRef.top__DOT__ImmOp));
    }
    vlSelfRef.top__DOT__ALUop2 = ((IData)(vlSelfRef.top__DOT__ALUsrc)
                                   ? vlSelfRef.top__DOT__ImmOp
                                   : vlSelfRef.top__DOT__RD2);
    if ((1U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffffeU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (1U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((2U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffffdU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (2U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((4U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffffbU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (4U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((8U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffff7U 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (8U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x10U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffffefU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x10U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x20U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffffdfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x20U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x40U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffffbfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x40U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x80U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffff7fU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x80U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x100U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffeffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x100U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x200U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffdffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x200U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x400U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffffbffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x400U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x800U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffff7ffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x800U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffefffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x1000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffdfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x2000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffffbfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x4000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffff7fffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x8000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffeffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x10000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffdffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x20000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfffbffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x40000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfff7ffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x80000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffefffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x100000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffdfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x200000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xffbfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x400000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xff7fffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x800000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfeffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x1000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfdffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x2000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xfbffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x4000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xf7ffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x8000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__ALUop2 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xefffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x10000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__ALUop2 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xdfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x20000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__ALUop2 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0xbfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x40000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    if (((vlSelfRef.top__DOT__ALUop2 ^ vlSelfRef.top__DOT____Vtogcov__ALUop2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.top__DOT____Vtogcov__ALUop2 = ((0x7fffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop2) 
                                                 | (0x80000000U 
                                                    & vlSelfRef.top__DOT__ALUop2));
    }
    vlSelfRef.top__DOT__ALUout = 0U;
    vlSelfRef.top__DOT__EQ = 0U;
    if ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
            vlSelfRef.top__DOT__ALUout = 0U;
            ++(vlSymsp->__Vcoverage[279]);
        } else if ((1U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
            ++(vlSymsp->__Vcoverage[278]);
            vlSelfRef.top__DOT__ALUout = ((vlSelfRef.top__DOT__ALUop1 
                                           < vlSelfRef.top__DOT__ALUop2)
                                           ? 1U : 0U);
        } else {
            ++(vlSymsp->__Vcoverage[279]);
            vlSelfRef.top__DOT__ALUout = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
            ++(vlSymsp->__Vcoverage[277]);
            vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__ALUop1 
                                          | vlSelfRef.top__DOT__ALUop2);
        } else {
            ++(vlSymsp->__Vcoverage[276]);
            vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__ALUop1 
                                          & vlSelfRef.top__DOT__ALUop2);
        }
    } else if ((1U & (IData)(vlSelfRef.top__DOT__ALUctrl))) {
        vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__ALUop1 
                                      - vlSelfRef.top__DOT__ALUop2);
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.top__DOT__EQ = (0U == vlSelfRef.top__DOT__ALUout);
    } else {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.top__DOT__ALUout = (vlSelfRef.top__DOT__ALUop1 
                                      + vlSelfRef.top__DOT__ALUop2);
    }
    vlSelfRef.top__DOT__EQ = ((0U == vlSelfRef.top__DOT__ALUout)
                               ? 1U : 0U);
    ++(vlSymsp->__Vcoverage[280]);
    if (((IData)(vlSelfRef.top__DOT__EQ) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__EQ))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.top__DOT____Vtogcov__EQ = vlSelfRef.top__DOT__EQ;
    }
    if ((1U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffffeU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (1U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((2U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffffdU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (2U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((4U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffffbU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (4U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((8U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffff7U 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (8U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x10U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffffefU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x10U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x20U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffffdfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x20U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x40U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffffbfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x40U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x80U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffff7fU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x80U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x100U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffeffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x100U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x200U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffdffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x200U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x400U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffffbffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x400U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x800U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffff7ffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x800U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffefffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x1000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffdfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x2000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffffbfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x4000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffff7fffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x8000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffeffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x10000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffdffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x20000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfffbffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x40000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfff7ffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x80000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffefffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x100000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffdfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x200000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xffbfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x400000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xff7fffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x800000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfeffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x1000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfdffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x2000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xfbffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x4000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xf7ffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x8000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__ALUout 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xefffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x10000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__ALUout 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xdfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x20000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__ALUout 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUout))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0xbfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x40000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
    if (((vlSelfRef.top__DOT__ALUout ^ vlSelfRef.top__DOT____Vtogcov__ALUout) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.top__DOT____Vtogcov__ALUout = ((0x7fffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUout) 
                                                 | (0x80000000U 
                                                    & vlSelfRef.top__DOT__ALUout));
    }
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__top__DOT__PC;
    __Vdly__top__DOT__PC = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v0;
    __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v1;
    __VdlySet__top__DOT__RegFile__DOT__registers__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v2;
    __VdlySet__top__DOT__RegFile__DOT__registers__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v3;
    __VdlySet__top__DOT__RegFile__DOT__registers__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v4;
    __VdlySet__top__DOT__RegFile__DOT__registers__v4 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v5;
    __VdlySet__top__DOT__RegFile__DOT__registers__v5 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v6;
    __VdlySet__top__DOT__RegFile__DOT__registers__v6 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v7;
    __VdlySet__top__DOT__RegFile__DOT__registers__v7 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v8;
    __VdlySet__top__DOT__RegFile__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v9;
    __VdlySet__top__DOT__RegFile__DOT__registers__v9 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v10;
    __VdlySet__top__DOT__RegFile__DOT__registers__v10 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v11;
    __VdlySet__top__DOT__RegFile__DOT__registers__v11 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v12;
    __VdlySet__top__DOT__RegFile__DOT__registers__v12 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v13;
    __VdlySet__top__DOT__RegFile__DOT__registers__v13 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v14;
    __VdlySet__top__DOT__RegFile__DOT__registers__v14 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v15;
    __VdlySet__top__DOT__RegFile__DOT__registers__v15 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v16;
    __VdlySet__top__DOT__RegFile__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v17;
    __VdlySet__top__DOT__RegFile__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v18;
    __VdlySet__top__DOT__RegFile__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v19;
    __VdlySet__top__DOT__RegFile__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v20;
    __VdlySet__top__DOT__RegFile__DOT__registers__v20 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v21;
    __VdlySet__top__DOT__RegFile__DOT__registers__v21 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v22;
    __VdlySet__top__DOT__RegFile__DOT__registers__v22 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v23;
    __VdlySet__top__DOT__RegFile__DOT__registers__v23 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v24;
    __VdlySet__top__DOT__RegFile__DOT__registers__v24 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v25;
    __VdlySet__top__DOT__RegFile__DOT__registers__v25 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v26;
    __VdlySet__top__DOT__RegFile__DOT__registers__v26 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v27;
    __VdlySet__top__DOT__RegFile__DOT__registers__v27 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v28;
    __VdlySet__top__DOT__RegFile__DOT__registers__v28 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v29;
    __VdlySet__top__DOT__RegFile__DOT__registers__v29 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v30;
    __VdlySet__top__DOT__RegFile__DOT__registers__v30 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v31;
    __VdlySet__top__DOT__RegFile__DOT__registers__v31 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__RegFile__DOT__registers__v32;
    __VdlyVal__top__DOT__RegFile__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__RegFile__DOT__registers__v32;
    __VdlyDim0__top__DOT__RegFile__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__RegFile__DOT__registers__v32;
    __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 0;
    // Body
    __Vdly__top__DOT__PC = vlSelfRef.top__DOT__PC;
    __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v1 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v2 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v3 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v4 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v5 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v6 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v7 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v8 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v9 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v10 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v11 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v12 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v13 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v14 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v15 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v16 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v17 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v18 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v19 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v20 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v21 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v22 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v23 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v24 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v25 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v26 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v27 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v28 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v29 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v30 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v31 = 0U;
    __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 0U;
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[242]);
        __Vdly__top__DOT__PC = 0U;
    } else {
        if (vlSelfRef.top__DOT__PCsrc) {
            __Vdly__top__DOT__PC = (0x1fU & ((IData)(vlSelfRef.top__DOT__PC) 
                                             + vlSelfRef.top__DOT__ImmOp));
            ++(vlSymsp->__Vcoverage[240]);
        } else {
            __Vdly__top__DOT__PC = (0x1fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.top__DOT__PC)));
            ++(vlSymsp->__Vcoverage[241]);
        }
        ++(vlSymsp->__Vcoverage[243]);
    }
    ++(vlSymsp->__Vcoverage[244]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.top__DOT__RegFile__DOT__unnamedblk2__DOT__i = 0x20U;
        __VdlySet__top__DOT__RegFile__DOT__registers__v0 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v1 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v2 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v3 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v4 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v5 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v6 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v7 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v8 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v9 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v10 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v11 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v12 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v13 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v14 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v15 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v16 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v17 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v18 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v19 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v20 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v21 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v22 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v23 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v24 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v25 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v26 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v27 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v28 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v29 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v30 = 1U;
        ++(vlSymsp->__Vcoverage[269]);
        __VdlySet__top__DOT__RegFile__DOT__registers__v31 = 1U;
        ++(vlSymsp->__Vcoverage[272]);
    } else if (((IData)(vlSelfRef.top__DOT__RegWrite) 
                & (0U != (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)))) {
        ++(vlSymsp->__Vcoverage[270]);
        __VdlyVal__top__DOT__RegFile__DOT__registers__v32 
            = vlSelfRef.top__DOT__ALUout;
        __VdlyDim0__top__DOT__RegFile__DOT__registers__v32 
            = vlSelfRef.top__DOT____Vcellinp__RegFile__AD3;
        __VdlySet__top__DOT__RegFile__DOT__registers__v32 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[271]);
    }
    ++(vlSymsp->__Vcoverage[273]);
    vlSelfRef.top__DOT__PC = __Vdly__top__DOT__PC;
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v0) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v1) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[1U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v2) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[2U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v3) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[3U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v4) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[4U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v5) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[5U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v6) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[6U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v7) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[7U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v8) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[8U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v9) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[9U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v10) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xaU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v11) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xbU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v12) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xcU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v13) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xdU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v14) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xeU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v15) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0xfU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v16) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x10U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v17) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x11U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v18) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x12U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v19) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x13U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v20) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x14U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v21) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x15U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v22) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x16U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v23) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x17U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v24) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x18U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v25) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x19U] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v26) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1aU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v27) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1bU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v28) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1cU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v29) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1dU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v30) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1eU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v31) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__RegFile__DOT__registers__v32) {
        vlSelfRef.top__DOT__RegFile__DOT__registers[__VdlyDim0__top__DOT__RegFile__DOT__registers__v32] 
            = __VdlyVal__top__DOT__RegFile__DOT__registers__v32;
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__PC) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.top__DOT____Vtogcov__PC = ((0x1eU 
                                              & (IData)(vlSelfRef.top__DOT____Vtogcov__PC)) 
                                             | (1U 
                                                & (IData)(vlSelfRef.top__DOT__PC)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__PC) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.top__DOT____Vtogcov__PC = ((0x1dU 
                                              & (IData)(vlSelfRef.top__DOT____Vtogcov__PC)) 
                                             | (2U 
                                                & (IData)(vlSelfRef.top__DOT__PC)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT__PC) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.top__DOT____Vtogcov__PC = ((0x1bU 
                                              & (IData)(vlSelfRef.top__DOT____Vtogcov__PC)) 
                                             | (4U 
                                                & (IData)(vlSelfRef.top__DOT__PC)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT__PC) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.top__DOT____Vtogcov__PC = ((0x17U 
                                              & (IData)(vlSelfRef.top__DOT____Vtogcov__PC)) 
                                             | (8U 
                                                & (IData)(vlSelfRef.top__DOT__PC)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT__PC) ^ (IData)(vlSelfRef.top__DOT____Vtogcov__PC)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.top__DOT____Vtogcov__PC = ((0xfU 
                                              & (IData)(vlSelfRef.top__DOT____Vtogcov__PC)) 
                                             | (0x10U 
                                                & (IData)(vlSelfRef.top__DOT__PC)));
    }
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD3 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [vlSelfRef.top__DOT__PC] >> 7U));
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD1 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [vlSelfRef.top__DOT__PC] >> 0xfU));
    vlSelfRef.top__DOT____Vcellinp__RegFile__AD2 = 
        (0x1fU & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                  [vlSelfRef.top__DOT__PC] >> 0x14U));
    vlSelfRef.top__DOT__instr = vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
        [vlSelfRef.top__DOT__PC];
    vlSelfRef.top__DOT__controlunit__DOT__funct3 = 
        (7U & (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
               [vlSelfRef.top__DOT__PC] >> 0xcU));
    vlSelfRef.top__DOT__controlunit__DOT__op = (0x7fU 
                                                & vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
                                                [vlSelfRef.top__DOT__PC]);
    vlSelfRef.top__DOT__controlunit__DOT__funct7 = 
        (vlSelfRef.top__DOT__InstructionMemory__DOT__rom_array
         [vlSelfRef.top__DOT__PC] >> 0x19U);
    vlSelfRef.a0 = vlSelfRef.top__DOT__RegFile__DOT__registers
        [0xaU];
    if ((1U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3 
            = ((0x1eU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)) 
               | (1U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3 
            = ((0x1dU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)) 
               | (2U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3 
            = ((0x1bU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)) 
               | (4U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3 
            = ((0x17U & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)) 
               | (8U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3) 
                  ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3 
            = ((0xfU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD3)) 
               | (0x10U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD3)));
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1 
            = ((0x1eU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)) 
               | (1U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1 
            = ((0x1dU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)) 
               | (2U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1 
            = ((0x1bU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)) 
               | (4U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1 
            = ((0x17U & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)) 
               | (8U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1) 
                  ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1 
            = ((0xfU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD1)) 
               | (0x10U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1)));
    }
    vlSelfRef.top__DOT__ALUop1 = ((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD1))
                                   ? 0U : vlSelfRef.top__DOT__RegFile__DOT__registers
                                  [vlSelfRef.top__DOT____Vcellinp__RegFile__AD1]);
    if ((1U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2 
            = ((0x1eU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)) 
               | (1U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2 
            = ((0x1dU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)) 
               | (2U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2 
            = ((0x1bU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)) 
               | (4U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2) 
               ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2 
            = ((0x17U & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)) 
               | (8U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2) 
                  ^ (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2 
            = ((0xfU & (IData)(vlSelfRef.top__DOT__RegFile__DOT____Vtogcov__AD2)) 
               | (0x10U & (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2)));
    }
    vlSelfRef.top__DOT__RD2 = ((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__RegFile__AD2))
                                ? 0U : vlSelfRef.top__DOT__RegFile__DOT__registers
                               [vlSelfRef.top__DOT____Vcellinp__RegFile__AD2]);
    if ((1U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffffeU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (1U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((2U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffffdU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (2U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((4U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffffbU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (4U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((8U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffff7U 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (8U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x10U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffffefU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x10U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x20U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffffdfU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x20U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x40U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffffbfU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x40U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x80U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffff7fU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x80U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x100U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffeffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x100U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x200U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffdffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x200U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x400U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffffbffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x400U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x800U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffff7ffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x800U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffefffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x1000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffdfffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x2000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffffbfffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x4000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffff7fffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x8000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffeffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x10000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffdffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x20000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfffbffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x40000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfff7ffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x80000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffefffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x100000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffdfffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x200000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xffbfffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x400000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xff7fffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x800000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfeffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x1000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfdffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x2000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xfbffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x4000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xf7ffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x8000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xefffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x10000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xdfffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x20000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0xbfffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x40000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if (((vlSelfRef.top__DOT__instr ^ vlSelfRef.top__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.top__DOT____Vtogcov__instr = ((0x7fffffffU 
                                                 & vlSelfRef.top__DOT____Vtogcov__instr) 
                                                | (0x80000000U 
                                                   & vlSelfRef.top__DOT__instr));
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct3)));
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x7eU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x7dU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x7bU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x77U & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x6fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (0x10U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((0x20U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x5fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (0x20U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((0x40U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__op) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op 
            = ((0x3fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__op)) 
               | (0x40U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__op)));
    }
    if ((1U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
               ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7) 
                  ^ (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelfRef.top__DOT__controlunit__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelfRef.top__DOT__controlunit__DOT__funct7)));
    }
    if ((1U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffffeU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (1U 
                                                & vlSelfRef.a0));
    }
    if ((2U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffffdU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (2U 
                                                & vlSelfRef.a0));
    }
    if ((4U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffffbU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (4U 
                                                & vlSelfRef.a0));
    }
    if ((8U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffff7U 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (8U 
                                                & vlSelfRef.a0));
    }
    if ((0x10U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffffefU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x10U 
                                                & vlSelfRef.a0));
    }
    if ((0x20U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffffdfU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x20U 
                                                & vlSelfRef.a0));
    }
    if ((0x40U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffffbfU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x40U 
                                                & vlSelfRef.a0));
    }
    if ((0x80U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffff7fU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x80U 
                                                & vlSelfRef.a0));
    }
    if ((0x100U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffeffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x100U 
                                                & vlSelfRef.a0));
    }
    if ((0x200U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffdffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x200U 
                                                & vlSelfRef.a0));
    }
    if ((0x400U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffffbffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x400U 
                                                & vlSelfRef.a0));
    }
    if ((0x800U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffff7ffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x800U 
                                                & vlSelfRef.a0));
    }
    if ((0x1000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffefffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x1000U 
                                                & vlSelfRef.a0));
    }
    if ((0x2000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffdfffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x2000U 
                                                & vlSelfRef.a0));
    }
    if ((0x4000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffffbfffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x4000U 
                                                & vlSelfRef.a0));
    }
    if ((0x8000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffff7fffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x8000U 
                                                & vlSelfRef.a0));
    }
    if ((0x10000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffeffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x10000U 
                                                & vlSelfRef.a0));
    }
    if ((0x20000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffdffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x20000U 
                                                & vlSelfRef.a0));
    }
    if ((0x40000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfffbffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x40000U 
                                                & vlSelfRef.a0));
    }
    if ((0x80000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfff7ffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x80000U 
                                                & vlSelfRef.a0));
    }
    if ((0x100000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffefffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x100000U 
                                                & vlSelfRef.a0));
    }
    if ((0x200000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffdfffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x200000U 
                                                & vlSelfRef.a0));
    }
    if ((0x400000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xffbfffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x400000U 
                                                & vlSelfRef.a0));
    }
    if ((0x800000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xff7fffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x800000U 
                                                & vlSelfRef.a0));
    }
    if ((0x1000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfeffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x1000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x2000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfdffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x2000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x4000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xfbffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x4000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x8000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xf7ffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x8000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x10000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xefffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x10000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x20000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xdfffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x20000000U 
                                                & vlSelfRef.a0));
    }
    if ((0x40000000U & (vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0xbfffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x40000000U 
                                                & vlSelfRef.a0));
    }
    if (((vlSelfRef.a0 ^ vlSelfRef.top__DOT____Vtogcov__a0) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.top__DOT____Vtogcov__a0 = ((0x7fffffffU 
                                              & vlSelfRef.top__DOT____Vtogcov__a0) 
                                             | (0x80000000U 
                                                & vlSelfRef.a0));
    }
    if ((1U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffffeU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (1U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((2U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffffdU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (2U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((4U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffffbU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (4U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((8U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffff7U 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (8U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x10U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffffefU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x10U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x20U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffffdfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x20U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x40U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffffbfU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x40U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x80U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffff7fU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x80U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x100U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffeffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x100U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x200U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffdffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x200U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x400U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffffbffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x400U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x800U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffff7ffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x800U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffefffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x1000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffdfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x2000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffffbfffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x4000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffff7fffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x8000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffeffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x10000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffdffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x20000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfffbffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x40000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfff7ffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x80000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffefffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x100000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffdfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x200000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xffbfffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x400000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xff7fffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x800000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfeffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x1000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfdffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x2000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xfbffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x4000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xf7ffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x8000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__ALUop1 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xefffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x10000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__ALUop1 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xdfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x20000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__ALUop1 
                        ^ vlSelfRef.top__DOT____Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0xbfffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x40000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if (((vlSelfRef.top__DOT__ALUop1 ^ vlSelfRef.top__DOT____Vtogcov__ALUop1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.top__DOT____Vtogcov__ALUop1 = ((0x7fffffffU 
                                                  & vlSelfRef.top__DOT____Vtogcov__ALUop1) 
                                                 | (0x80000000U 
                                                    & vlSelfRef.top__DOT__ALUop1));
    }
    if ((1U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffffeU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (1U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((2U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffffdU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (2U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((4U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffffbU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (4U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((8U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffff7U 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (8U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x10U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffffefU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x10U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x20U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffffdfU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x20U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x40U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffffbfU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x40U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x80U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffff7fU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x80U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x100U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffeffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x100U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x200U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffdffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x200U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x400U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffffbffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x400U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x800U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffff7ffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x800U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x1000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffefffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x1000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x2000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffdfffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x2000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x4000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffffbfffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x4000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x8000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffff7fffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x8000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x10000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffeffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x10000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x20000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffdffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x20000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x40000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfffbffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x40000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x80000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfff7ffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x80000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x100000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffefffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x100000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x200000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffdfffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x200000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x400000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xffbfffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x400000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x800000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xff7fffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x800000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x1000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfeffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x1000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x2000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfdffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x2000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x4000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xfbffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x4000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x8000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xf7ffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x8000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x10000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xefffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x10000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x20000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xdfffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x20000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if ((0x40000000U & (vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0xbfffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x40000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
    if (((vlSelfRef.top__DOT__RD2 ^ vlSelfRef.top__DOT____Vtogcov__RD2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.top__DOT____Vtogcov__RD2 = ((0x7fffffffU 
                                               & vlSelfRef.top__DOT____Vtogcov__RD2) 
                                              | (0x80000000U 
                                                 & vlSelfRef.top__DOT__RD2));
    }
}
