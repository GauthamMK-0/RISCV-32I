// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIPELINE__SYMS_H_
#define VERILATED_VPIPELINE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpipeline.h"

// INCLUDE MODULE CLASSES
#include "Vpipeline___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpipeline__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpipeline* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpipeline___024root            TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_pipeline;
    VerilatedScope __Vscope_pipeline__ex_stage;
    VerilatedScope __Vscope_pipeline__ex_stage__alu_unit;
    VerilatedScope __Vscope_pipeline__ex_stage__brch_unit;
    VerilatedScope __Vscope_pipeline__ex_stage__exmem_register;
    VerilatedScope __Vscope_pipeline__ex_stage__jmp_unit;
    VerilatedScope __Vscope_pipeline__fwd;
    VerilatedScope __Vscope_pipeline__hzd;
    VerilatedScope __Vscope_pipeline__id_stage;
    VerilatedScope __Vscope_pipeline__id_stage__control;
    VerilatedScope __Vscope_pipeline__id_stage__decoder;
    VerilatedScope __Vscope_pipeline__id_stage__idex_register;
    VerilatedScope __Vscope_pipeline__id_stage__reg_file;
    VerilatedScope __Vscope_pipeline__if_stage;
    VerilatedScope __Vscope_pipeline__if_stage__ifid_register;
    VerilatedScope __Vscope_pipeline__if_stage__instruction_memory;
    VerilatedScope __Vscope_pipeline__if_stage__pc_logic_unit;
    VerilatedScope __Vscope_pipeline__if_stage__prog_counter;
    VerilatedScope __Vscope_pipeline__mem_stage;
    VerilatedScope __Vscope_pipeline__mem_stage__byte_mask;
    VerilatedScope __Vscope_pipeline__mem_stage__mem_access;
    VerilatedScope __Vscope_pipeline__mem_stage__memory;
    VerilatedScope __Vscope_pipeline__mem_stage__memwb_register;
    VerilatedScope __Vscope_pipeline__wb_stage;

    // CONSTRUCTORS
    Vpipeline__Syms(VerilatedContext* contextp, const char* namep, Vpipeline* modelp);
    ~Vpipeline__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
