// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEM_STAGE_PIP__SYMS_H_
#define VERILATED_VMEM_STAGE_PIP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmem_stage_pip.h"

// INCLUDE MODULE CLASSES
#include "Vmem_stage_pip___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmem_stage_pip__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmem_stage_pip* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmem_stage_pip___024root       TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_mem_stage_pip;
    VerilatedScope __Vscope_mem_stage_pip__byte_mask;
    VerilatedScope __Vscope_mem_stage_pip__mem_access;
    VerilatedScope __Vscope_mem_stage_pip__memory;
    VerilatedScope __Vscope_mem_stage_pip__memwb_register;

    // CONSTRUCTORS
    Vmem_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vmem_stage_pip* modelp);
    ~Vmem_stage_pip__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
