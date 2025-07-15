// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip__Syms.h"
#include "Vid_stage_pip___024root.h"

// Parameter definitions for Vid_stage_pip___024root
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__R_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__I_TYPE_LOAD;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__I_TYPE_ALU;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__I_TYPE_JALR;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__S_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__B_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__J_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__U_TYPE_LUI;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__decoder__DOT__U_TYPE_AUIPC;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__ADD;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SUB;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__AND;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__OR;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__XOR;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SLL;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SRL;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SRA;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SLT;
constexpr CData/*3:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__SLTU;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BEQ;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BNE;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BLT;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BGE;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BLTU;
constexpr CData/*2:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__BGEU;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__R_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__I_TYPE_LOAD;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__I_TYPE_ALU;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__I_TYPE_JALR;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__S_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__B_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__J_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__U_TYPE_LUI;
constexpr CData/*6:0*/ Vid_stage_pip___024root::id_stage_pip__DOT__control__DOT__U_TYPE_AUIPC;


void Vid_stage_pip___024root___ctor_var_reset(Vid_stage_pip___024root* vlSelf);

Vid_stage_pip___024root::Vid_stage_pip___024root(Vid_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vid_stage_pip___024root___ctor_var_reset(this);
}

void Vid_stage_pip___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vid_stage_pip___024root::~Vid_stage_pip___024root() {
}
