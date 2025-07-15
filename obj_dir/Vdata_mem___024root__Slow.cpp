// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem__Syms.h"
#include "Vdata_mem___024root.h"

void Vdata_mem___024root___ctor_var_reset(Vdata_mem___024root* vlSelf);

Vdata_mem___024root::Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_mem___024root___ctor_var_reset(this);
}

void Vdata_mem___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_mem___024root::~Vdata_mem___024root() {
}
