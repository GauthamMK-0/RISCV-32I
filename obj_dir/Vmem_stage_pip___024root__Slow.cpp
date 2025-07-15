// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_stage_pip.h for the primary calling header

#include "Vmem_stage_pip__pch.h"
#include "Vmem_stage_pip__Syms.h"
#include "Vmem_stage_pip___024root.h"

void Vmem_stage_pip___024root___ctor_var_reset(Vmem_stage_pip___024root* vlSelf);

Vmem_stage_pip___024root::Vmem_stage_pip___024root(Vmem_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmem_stage_pip___024root___ctor_var_reset(this);
}

void Vmem_stage_pip___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem_stage_pip___024root::~Vmem_stage_pip___024root() {
}
