// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdata_mem__pch.h"
#include "Vdata_mem.h"
#include "Vdata_mem___024root.h"

// FUNCTIONS
Vdata_mem__Syms::~Vdata_mem__Syms()
{
}

Vdata_mem__Syms::Vdata_mem__Syms(VerilatedContext* contextp, const char* namep, Vdata_mem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(61);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mem_stage_pip.configure(this, name(), "mem_stage_pip", "mem_stage_pip", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mem_stage_pip__byte_mask.configure(this, name(), "mem_stage_pip.byte_mask", "byte_mask", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mem_stage_pip__mem_access.configure(this, name(), "mem_stage_pip.mem_access", "mem_access", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mem_stage_pip__memory.configure(this, name(), "mem_stage_pip.memory", "memory", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_mem_stage_pip__memwb_register.configure(this, name(), "mem_stage_pip.memwb_register", "memwb_register", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"alu_result_in", &(TOP.alu_result_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_result_out", &(TOP.alu_result_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"funct3_in", &(TOP.funct3_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_data_out", &(TOP.mem_data_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_read_in", &(TOP.mem_read_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.mem_to_reg_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.mem_to_reg_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_write_in", &(TOP.mem_write_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_in", &(TOP.rd_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd_out", &(TOP.rd_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_in", &(TOP.reg_write_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write_out", &(TOP.reg_write_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2_data_in", &(TOP.rs2_data_in), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"addr_lsb", &(TOP.mem_stage_pip__DOT__addr_lsb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"alu_result_in", &(TOP.mem_stage_pip__DOT__alu_result_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"alu_result_out", &(TOP.mem_stage_pip__DOT__alu_result_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"byte_enable", &(TOP.mem_stage_pip__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"clk", &(TOP.mem_stage_pip__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"funct3_in", &(TOP.mem_stage_pip__DOT__funct3_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_data", &(TOP.mem_stage_pip__DOT__mem_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_data_out", &(TOP.mem_stage_pip__DOT__mem_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_read_in", &(TOP.mem_stage_pip__DOT__mem_read_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.mem_stage_pip__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.mem_stage_pip__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"mem_write_in", &(TOP.mem_stage_pip__DOT__mem_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"rd_in", &(TOP.mem_stage_pip__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"rd_out", &(TOP.mem_stage_pip__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"read_data", &(TOP.mem_stage_pip__DOT__read_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"reg_write_in", &(TOP.mem_stage_pip__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"reg_write_out", &(TOP.mem_stage_pip__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"rs2_data_in", &(TOP.mem_stage_pip__DOT__rs2_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip.varInsert(__Vfinal,"rst", &(TOP.mem_stage_pip__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__byte_mask.varInsert(__Vfinal,"addr_lsb", &(TOP.mem_stage_pip__DOT__byte_mask__DOT__addr_lsb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mem_stage_pip__byte_mask.varInsert(__Vfinal,"byte_enable", &(TOP.mem_stage_pip__DOT__byte_mask__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_mem_stage_pip__byte_mask.varInsert(__Vfinal,"funct3", &(TOP.mem_stage_pip__DOT__byte_mask__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mem_stage_pip__mem_access.varInsert(__Vfinal,"addr_lsb", &(TOP.mem_stage_pip__DOT__mem_access__DOT__addr_lsb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mem_stage_pip__mem_access.varInsert(__Vfinal,"funct3", &(TOP.mem_stage_pip__DOT__mem_access__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_mem_stage_pip__mem_access.varInsert(__Vfinal,"mem_data", &(TOP.mem_stage_pip__DOT__mem_access__DOT__mem_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__mem_access.varInsert(__Vfinal,"mem_out", &(TOP.mem_stage_pip__DOT__mem_access__DOT__mem_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"addr", &(TOP.mem_stage_pip__DOT__memory__DOT__addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"byte_enable", &(TOP.mem_stage_pip__DOT__memory__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"clk", &(TOP.mem_stage_pip__DOT__memory__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"mem", &(TOP.mem_stage_pip__DOT__memory__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,1023 ,31,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"mem_read", &(TOP.mem_stage_pip__DOT__memory__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"mem_write", &(TOP.mem_stage_pip__DOT__memory__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"read_data", &(TOP.mem_stage_pip__DOT__memory__DOT__read_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memory.varInsert(__Vfinal,"write_data", &(TOP.mem_stage_pip__DOT__memory__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"alu_result_in", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__alu_result_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"alu_result_out", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"clk", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"mem_data_in", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__mem_data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"mem_data_out", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"mem_to_reg_in", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"mem_to_reg_out", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"rd_in", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__rd_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"rd_out", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__rd_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"reg_write_in", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__reg_write_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"reg_write_out", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mem_stage_pip__memwb_register.varInsert(__Vfinal,"rst", &(TOP.mem_stage_pip__DOT__memwb_register__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
