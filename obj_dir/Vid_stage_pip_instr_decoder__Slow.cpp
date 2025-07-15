// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip__Syms.h"
#include "Vid_stage_pip_instr_decoder.h"

// Parameter definitions for Vid_stage_pip_instr_decoder
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::R_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::I_TYPE_LOAD;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::I_TYPE_ALU;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::I_TYPE_JALR;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::S_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::B_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::J_TYPE;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::U_TYPE_LUI;
constexpr CData/*6:0*/ Vid_stage_pip_instr_decoder::U_TYPE_AUIPC;


void Vid_stage_pip_instr_decoder___ctor_var_reset(Vid_stage_pip_instr_decoder* vlSelf);

Vid_stage_pip_instr_decoder::Vid_stage_pip_instr_decoder(Vid_stage_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vid_stage_pip_instr_decoder___ctor_var_reset(this);
}

void Vid_stage_pip_instr_decoder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vid_stage_pip_instr_decoder::~Vid_stage_pip_instr_decoder() {
}
