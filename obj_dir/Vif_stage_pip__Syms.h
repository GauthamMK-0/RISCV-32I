// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIF_STAGE_PIP__SYMS_H_
#define VERILATED_VIF_STAGE_PIP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vif_stage_pip.h"

// INCLUDE MODULE CLASSES
#include "Vif_stage_pip___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vif_stage_pip__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vif_stage_pip* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vif_stage_pip___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_if_stage_pip;
    VerilatedScope __Vscope_if_stage_pip__ifid_register;
    VerilatedScope __Vscope_if_stage_pip__instruction_memory;
    VerilatedScope __Vscope_if_stage_pip__pc_logic_unit;
    VerilatedScope __Vscope_if_stage_pip__prog_counter;

    // CONSTRUCTORS
    Vif_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vif_stage_pip* modelp);
    ~Vif_stage_pip__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
