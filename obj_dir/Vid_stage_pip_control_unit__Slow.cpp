// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip__Syms.h"
#include "Vid_stage_pip_control_unit.h"

// Parameter definitions for Vid_stage_pip_control_unit
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::ADD;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SUB;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::AND;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::OR;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::XOR;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SLL;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SRL;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SRA;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SLT;
constexpr CData/*3:0*/ Vid_stage_pip_control_unit::SLTU;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BEQ;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BNE;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BLT;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BGE;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BLTU;
constexpr CData/*2:0*/ Vid_stage_pip_control_unit::BGEU;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::R_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::I_TYPE_LOAD;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::I_TYPE_ALU;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::I_TYPE_JALR;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::S_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::B_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::J_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::U_TYPE_LUI;
constexpr CData/*6:0*/ Vid_stage_pip_control_unit::U_TYPE_AUIPC;


void Vid_stage_pip_control_unit___ctor_var_reset(Vid_stage_pip_control_unit* vlSelf);

Vid_stage_pip_control_unit::Vid_stage_pip_control_unit(Vid_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vid_stage_pip_control_unit___ctor_var_reset(this);
}

void Vid_stage_pip_control_unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vid_stage_pip_control_unit::~Vid_stage_pip_control_unit() {
}
