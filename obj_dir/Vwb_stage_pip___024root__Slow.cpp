// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_stage_pip.h for the primary calling header

#include "Vwb_stage_pip__pch.h"
#include "Vwb_stage_pip__Syms.h"
#include "Vwb_stage_pip___024root.h"

void Vwb_stage_pip___024root___ctor_var_reset(Vwb_stage_pip___024root* vlSelf);

Vwb_stage_pip___024root::Vwb_stage_pip___024root(Vwb_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vwb_stage_pip___024root___ctor_var_reset(this);
}

void Vwb_stage_pip___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vwb_stage_pip___024root::~Vwb_stage_pip___024root() {
}
