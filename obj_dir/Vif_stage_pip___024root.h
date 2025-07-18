// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vif_stage_pip.h for the primary calling header

#ifndef VERILATED_VIF_STAGE_PIP___024ROOT_H_
#define VERILATED_VIF_STAGE_PIP___024ROOT_H_  // guard

#include "verilated.h"


class Vif_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vif_stage_pip___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(pc_write,0,0);
    VL_IN8(if_id_write,0,0);
    VL_IN8(if_id_flush,0,0);
    VL_IN8(jump,0,0);
    VL_IN8(branch_taken,0,0);
    CData/*0:0*/ if_stage_pip__DOT__clk;
    CData/*0:0*/ if_stage_pip__DOT__rst;
    CData/*0:0*/ if_stage_pip__DOT__pc_write;
    CData/*0:0*/ if_stage_pip__DOT__if_id_write;
    CData/*0:0*/ if_stage_pip__DOT__if_id_flush;
    CData/*0:0*/ if_stage_pip__DOT__jump;
    CData/*0:0*/ if_stage_pip__DOT__branch_taken;
    CData/*0:0*/ if_stage_pip__DOT__prog_counter__DOT__clk;
    CData/*0:0*/ if_stage_pip__DOT__prog_counter__DOT__rst;
    CData/*0:0*/ if_stage_pip__DOT__prog_counter__DOT__pc_write;
    CData/*0:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__jump;
    CData/*0:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken;
    CData/*0:0*/ if_stage_pip__DOT__ifid_register__DOT__clk;
    CData/*0:0*/ if_stage_pip__DOT__ifid_register__DOT__rst;
    CData/*0:0*/ if_stage_pip__DOT__ifid_register__DOT__if_id_write;
    CData/*0:0*/ if_stage_pip__DOT__ifid_register__DOT__if_id_flush;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(branch_target,31,0);
    VL_IN(jump_target,31,0);
    VL_OUT(instr_out,31,0);
    VL_OUT(pc_out,31,0);
    IData/*31:0*/ if_stage_pip__DOT__branch_target;
    IData/*31:0*/ if_stage_pip__DOT__jump_target;
    IData/*31:0*/ if_stage_pip__DOT__instr_out;
    IData/*31:0*/ if_stage_pip__DOT__pc_out;
    IData/*31:0*/ if_stage_pip__DOT__current_pc;
    IData/*31:0*/ if_stage_pip__DOT__next_pc;
    IData/*31:0*/ if_stage_pip__DOT__instr;
    IData/*31:0*/ if_stage_pip__DOT__instruction_memory__DOT__addr;
    IData/*31:0*/ if_stage_pip__DOT__instruction_memory__DOT__instr;
    IData/*31:0*/ if_stage_pip__DOT__prog_counter__DOT__next_pc;
    IData/*31:0*/ if_stage_pip__DOT__prog_counter__DOT__current_pc;
    IData/*31:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__current_pc;
    IData/*31:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__branch_target;
    IData/*31:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__jump_target;
    IData/*31:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__next_pc;
    IData/*31:0*/ if_stage_pip__DOT__pc_logic_unit__DOT__pc_4;
    IData/*31:0*/ if_stage_pip__DOT__ifid_register__DOT__instr_in;
    IData/*31:0*/ if_stage_pip__DOT__ifid_register__DOT__pc_in;
    IData/*31:0*/ if_stage_pip__DOT__ifid_register__DOT__instr_out;
    IData/*31:0*/ if_stage_pip__DOT__ifid_register__DOT__pc_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> if_stage_pip__DOT__instruction_memory__DOT__memory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vif_stage_pip__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vif_stage_pip___024root(Vif_stage_pip__Syms* symsp, const char* v__name);
    ~Vif_stage_pip___024root();
    VL_UNCOPYABLE(Vif_stage_pip___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
