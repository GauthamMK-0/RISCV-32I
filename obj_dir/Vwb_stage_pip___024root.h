// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwb_stage_pip.h for the primary calling header

#ifndef VERILATED_VWB_STAGE_PIP___024ROOT_H_
#define VERILATED_VWB_STAGE_PIP___024ROOT_H_  // guard

#include "verilated.h"


class Vwb_stage_pip__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vwb_stage_pip___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(rd_in,4,0);
    VL_IN8(wb_sel,1,0);
    VL_IN8(reg_write_in,0,0);
    VL_IN8(mem_to_reg_in,0,0);
    VL_OUT8(rd_out,4,0);
    VL_OUT8(reg_write_out,0,0);
    CData/*0:0*/ wb_stage_pip__DOT__clk;
    CData/*0:0*/ wb_stage_pip__DOT__rst;
    CData/*4:0*/ wb_stage_pip__DOT__rd_in;
    CData/*1:0*/ wb_stage_pip__DOT__wb_sel;
    CData/*0:0*/ wb_stage_pip__DOT__reg_write_in;
    CData/*0:0*/ wb_stage_pip__DOT__mem_to_reg_in;
    CData/*4:0*/ wb_stage_pip__DOT__rd_out;
    CData/*0:0*/ wb_stage_pip__DOT__reg_write_out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(pc_in,31,0);
    VL_IN(alu_result_in,31,0);
    VL_IN(mem_data_in,31,0);
    VL_OUT(reg_data_out,31,0);
    IData/*31:0*/ wb_stage_pip__DOT__pc_in;
    IData/*31:0*/ wb_stage_pip__DOT__alu_result_in;
    IData/*31:0*/ wb_stage_pip__DOT__mem_data_in;
    IData/*31:0*/ wb_stage_pip__DOT__reg_data_out;
    IData/*31:0*/ wb_stage_pip__DOT__pc_4;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vwb_stage_pip__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vwb_stage_pip___024root(Vwb_stage_pip__Syms* symsp, const char* v__name);
    ~Vwb_stage_pip___024root();
    VL_UNCOPYABLE(Vwb_stage_pip___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
