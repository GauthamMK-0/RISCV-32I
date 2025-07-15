// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VID_EX_REG__SYMS_H_
#define VERILATED_VID_EX_REG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vid_ex_reg.h"

// INCLUDE MODULE CLASSES
#include "Vid_ex_reg___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vid_ex_reg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vid_ex_reg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vid_ex_reg___024root           TOP;

    // CONSTRUCTORS
    Vid_ex_reg__Syms(VerilatedContext* contextp, const char* namep, Vid_ex_reg* modelp);
    ~Vid_ex_reg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
