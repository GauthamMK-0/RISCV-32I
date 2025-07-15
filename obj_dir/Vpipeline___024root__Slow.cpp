// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline___024root.h"

// Parameter definitions for Vpipeline___024root
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__R_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__I_TYPE_LOAD;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__I_TYPE_ALU;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__I_TYPE_JALR;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__S_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__B_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__J_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__U_TYPE_LUI;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__decoder__DOT__U_TYPE_AUIPC;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__ADD;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SUB;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__AND;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__OR;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__XOR;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SLL;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SRL;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SRA;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SLT;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__SLTU;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__PASS;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__ADD_PC;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BEQ;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BNE;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BLT;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BGE;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BLTU;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__BGEU;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__R_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__I_TYPE_LOAD;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__I_TYPE_ALU;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__I_TYPE_JALR;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__S_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__B_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__J_TYPE;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__U_TYPE_LUI;
constexpr CData/*6:0*/ Vpipeline___024root::pipeline__DOT__id_stage__DOT__control__DOT__U_TYPE_AUIPC;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__ADD;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SUB;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__AND;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__OR;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__XOR;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SLL;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SRL;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SRA;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SLT;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__SLTU;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__PASS;
constexpr CData/*3:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__alu_unit__DOT__ADD_PC;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BEQ;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BNE;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BLT;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BGE;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BLTU;
constexpr CData/*2:0*/ Vpipeline___024root::pipeline__DOT__ex_stage__DOT__brch_unit__DOT__BGEU;


void Vpipeline___024root___ctor_var_reset(Vpipeline___024root* vlSelf);

Vpipeline___024root::Vpipeline___024root(Vpipeline__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpipeline___024root___ctor_var_reset(this);
}

void Vpipeline___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpipeline___024root::~Vpipeline___024root() {
}
