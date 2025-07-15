// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_ex_reg.h for the primary calling header

#include "Vid_ex_reg__pch.h"
#include "Vid_ex_reg__Syms.h"
#include "Vid_ex_reg___024root.h"

void Vid_ex_reg___024root___ctor_var_reset(Vid_ex_reg___024root* vlSelf);

Vid_ex_reg___024root::Vid_ex_reg___024root(Vid_ex_reg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vid_ex_reg___024root___ctor_var_reset(this);
}

void Vid_ex_reg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vid_ex_reg___024root::~Vid_ex_reg___024root() {
}
