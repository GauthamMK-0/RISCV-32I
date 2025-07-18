// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vex_stage_pip.h for the primary calling header

#include "Vex_stage_pip__pch.h"
#include "Vex_stage_pip__Syms.h"
#include "Vex_stage_pip___024root.h"

// Parameter definitions for Vex_stage_pip___024root
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__ADD;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SUB;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__AND;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__OR;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__XOR;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SLL;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SRL;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SRA;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SLT;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__SLTU;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__PASS;
constexpr CData/*3:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__alu_unit__DOT__ADD_PC;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BEQ;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BNE;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BLT;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BGE;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BLTU;
constexpr CData/*2:0*/ Vex_stage_pip___024root::ex_stage_pip__DOT__brch_unit__DOT__BGEU;


void Vex_stage_pip___024root___ctor_var_reset(Vex_stage_pip___024root* vlSelf);

Vex_stage_pip___024root::Vex_stage_pip___024root(Vex_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vex_stage_pip___024root___ctor_var_reset(this);
}

void Vex_stage_pip___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vex_stage_pip___024root::~Vex_stage_pip___024root() {
}
