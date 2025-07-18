// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vif_stage_pip.h for the primary calling header

#include "Vif_stage_pip__pch.h"
#include "Vif_stage_pip__Syms.h"
#include "Vif_stage_pip___024root.h"

void Vif_stage_pip___024root___ctor_var_reset(Vif_stage_pip___024root* vlSelf);

Vif_stage_pip___024root::Vif_stage_pip___024root(Vif_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vif_stage_pip___024root___ctor_var_reset(this);
}

void Vif_stage_pip___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vif_stage_pip___024root::~Vif_stage_pip___024root() {
}
