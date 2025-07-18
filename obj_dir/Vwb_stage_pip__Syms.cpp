// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vwb_stage_pip__pch.h"
#include "Vwb_stage_pip.h"
#include "Vwb_stage_pip___024root.h"

// FUNCTIONS
Vwb_stage_pip__Syms::~Vwb_stage_pip__Syms()
{
}

Vwb_stage_pip__Syms::Vwb_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vwb_stage_pip* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_wb_stage_pip.configure(this, name(), "wb_stage_pip", "wb_stage_pip", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"alu_result_in", &(TOP.alu_result_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_data_in", &(TOP.mem_data_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.mem_to_reg_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_in", &(TOP.pc_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_in", &(TOP.rd_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_out", &(TOP.rd_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_data_out", &(TOP.reg_data_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_in", &(TOP.reg_write_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_out", &(TOP.reg_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"wb_sel", &(TOP.wb_sel), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"alu_result_in", &(TOP.wb_stage_pip__DOT__alu_result_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"clk", &(TOP.wb_stage_pip__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"mem_data_in", &(TOP.wb_stage_pip__DOT__mem_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.wb_stage_pip__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"pc_4", &(TOP.wb_stage_pip__DOT__pc_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"pc_in", &(TOP.wb_stage_pip__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"rd_in", &(TOP.wb_stage_pip__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"rd_out", &(TOP.wb_stage_pip__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"reg_data_out", &(TOP.wb_stage_pip__DOT__reg_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"reg_write_in", &(TOP.wb_stage_pip__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"reg_write_out", &(TOP.wb_stage_pip__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"rst", &(TOP.wb_stage_pip__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_wb_stage_pip.varInsert(__Vfinal,"wb_sel", &(TOP.wb_stage_pip__DOT__wb_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
    }
}
