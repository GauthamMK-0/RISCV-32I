// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEX_STAGE_PIP__SYMS_H_
#define VERILATED_VEX_STAGE_PIP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vex_stage_pip.h"

// INCLUDE MODULE CLASSES
#include "Vex_stage_pip___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vex_stage_pip__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vex_stage_pip* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vex_stage_pip___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_ex_stage_pip;
    VerilatedScope __Vscope_ex_stage_pip__alu_unit;
    VerilatedScope __Vscope_ex_stage_pip__brch_unit;
    VerilatedScope __Vscope_ex_stage_pip__exmem_register;
    VerilatedScope __Vscope_ex_stage_pip__jmp_unit;

    // CONSTRUCTORS
    Vex_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vex_stage_pip* modelp);
    ~Vex_stage_pip__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
