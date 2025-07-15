// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip__Syms.h"
#include "Vid_stage_pip_registers.h"

void Vid_stage_pip_registers___ctor_var_reset(Vid_stage_pip_registers* vlSelf);

Vid_stage_pip_registers::Vid_stage_pip_registers(Vid_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vid_stage_pip_registers___ctor_var_reset(this);
}

void Vid_stage_pip_registers::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vid_stage_pip_registers::~Vid_stage_pip_registers() {
}
