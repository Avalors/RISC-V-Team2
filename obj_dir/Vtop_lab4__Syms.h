// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_LAB4__SYMS_H_
#define VERILATED_VTOP_LAB4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_lab4.h"

// INCLUDE MODULE CLASSES
#include "Vtop_lab4___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop_lab4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_lab4* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_lab4___024root            TOP;

    // COVERAGE
    uint32_t __Vcoverage[620];

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_TopLevelCPU;
    VerilatedScope __Vscope_TopLevelCPU__ALUOperandMux;
    VerilatedScope __Vscope_TopLevelCPU__ArithmeticLogicUnit;
    VerilatedScope __Vscope_TopLevelCPU__InstructionMemory;
    VerilatedScope __Vscope_TopLevelCPU__InstructionMemory__unnamedblk1;
    VerilatedScope __Vscope_TopLevelCPU__PC_Reg;
    VerilatedScope __Vscope_TopLevelCPU__RegFile;
    VerilatedScope __Vscope_TopLevelCPU__RegFile__unnamedblk1;
    VerilatedScope __Vscope_TopLevelCPU__RegFile__unnamedblk2;
    VerilatedScope __Vscope_TopLevelCPU__SignExtender;
    VerilatedScope __Vscope_TopLevelCPU__controlunit;

    // CONSTRUCTORS
    Vtop_lab4__Syms(VerilatedContext* contextp, const char* namep, Vtop_lab4* modelp);
    ~Vtop_lab4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
