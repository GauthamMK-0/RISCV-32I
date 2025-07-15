// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem.h for the primary calling header

#ifndef VERILATED_VDATA_MEM___024ROOT_H_
#define VERILATED_VDATA_MEM___024ROOT_H_  // guard

#include "verilated.h"


class Vdata_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(funct3_in,2,0);
        VL_IN8(rd_in,4,0);
        VL_IN8(mem_read_in,0,0);
        VL_IN8(mem_write_in,0,0);
        VL_IN8(reg_write_in,0,0);
        VL_IN8(mem_to_reg_in,0,0);
        VL_OUT8(rd_out,4,0);
        VL_OUT8(reg_write_out,0,0);
        VL_OUT8(mem_to_reg_out,0,0);
        CData/*0:0*/ mem_stage_pip__DOT__clk;
        CData/*0:0*/ mem_stage_pip__DOT__rst;
        CData/*2:0*/ mem_stage_pip__DOT__funct3_in;
        CData/*4:0*/ mem_stage_pip__DOT__rd_in;
        CData/*0:0*/ mem_stage_pip__DOT__mem_read_in;
        CData/*0:0*/ mem_stage_pip__DOT__mem_write_in;
        CData/*0:0*/ mem_stage_pip__DOT__reg_write_in;
        CData/*0:0*/ mem_stage_pip__DOT__mem_to_reg_in;
        CData/*4:0*/ mem_stage_pip__DOT__rd_out;
        CData/*0:0*/ mem_stage_pip__DOT__reg_write_out;
        CData/*0:0*/ mem_stage_pip__DOT__mem_to_reg_out;
        CData/*1:0*/ mem_stage_pip__DOT__addr_lsb;
        CData/*3:0*/ mem_stage_pip__DOT__byte_enable;
        CData/*0:0*/ mem_stage_pip__DOT__memory__DOT__clk;
        CData/*3:0*/ mem_stage_pip__DOT__memory__DOT__byte_enable;
        CData/*0:0*/ mem_stage_pip__DOT__memory__DOT__mem_write;
        CData/*0:0*/ mem_stage_pip__DOT__memory__DOT__mem_read;
        CData/*2:0*/ mem_stage_pip__DOT__byte_mask__DOT__funct3;
        CData/*1:0*/ mem_stage_pip__DOT__byte_mask__DOT__addr_lsb;
        CData/*3:0*/ mem_stage_pip__DOT__byte_mask__DOT__byte_enable;
        CData/*1:0*/ mem_stage_pip__DOT__mem_access__DOT__addr_lsb;
        CData/*2:0*/ mem_stage_pip__DOT__mem_access__DOT__funct3;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__clk;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__rst;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__reg_write_in;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in;
        CData/*4:0*/ mem_stage_pip__DOT__memwb_register__DOT__rd_in;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__reg_write_out;
        CData/*0:0*/ mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out;
        CData/*4:0*/ mem_stage_pip__DOT__memwb_register__DOT__rd_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(alu_result_in,31,0);
        VL_IN(rs2_data_in,31,0);
        VL_OUT(alu_result_out,31,0);
        VL_OUT(mem_data_out,31,0);
        IData/*31:0*/ mem_stage_pip__DOT__alu_result_in;
        IData/*31:0*/ mem_stage_pip__DOT__rs2_data_in;
        IData/*31:0*/ mem_stage_pip__DOT__alu_result_out;
        IData/*31:0*/ mem_stage_pip__DOT__mem_data_out;
        IData/*31:0*/ mem_stage_pip__DOT__mem_data;
        IData/*31:0*/ mem_stage_pip__DOT__read_data;
        IData/*31:0*/ mem_stage_pip__DOT__memory__DOT__addr;
        IData/*31:0*/ mem_stage_pip__DOT__memory__DOT__write_data;
        IData/*31:0*/ mem_stage_pip__DOT__memory__DOT__read_data;
        IData/*31:0*/ mem_stage_pip__DOT__mem_access__DOT__mem_data;
        IData/*31:0*/ mem_stage_pip__DOT__mem_access__DOT__mem_out;
        IData/*31:0*/ mem_stage_pip__DOT__memwb_register__DOT__alu_result_in;
        IData/*31:0*/ mem_stage_pip__DOT__memwb_register__DOT__mem_data_in;
        IData/*31:0*/ mem_stage_pip__DOT__memwb_register__DOT__alu_result_out;
    };
    struct {
        IData/*31:0*/ mem_stage_pip__DOT__memwb_register__DOT__mem_data_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1024> mem_stage_pip__DOT__memory__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* v__name);
    ~Vdata_mem___024root();
    VL_UNCOPYABLE(Vdata_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
