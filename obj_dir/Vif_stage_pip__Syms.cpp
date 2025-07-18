// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vif_stage_pip__pch.h"
#include "Vif_stage_pip.h"
#include "Vif_stage_pip___024root.h"

// FUNCTIONS
Vif_stage_pip__Syms::~Vif_stage_pip__Syms()
{
}

Vif_stage_pip__Syms::Vif_stage_pip__Syms(VerilatedContext* contextp, const char* namep, Vif_stage_pip* modelp)
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
    __Vscope_if_stage_pip.configure(this, name(), "if_stage_pip", "if_stage_pip", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_if_stage_pip__ifid_register.configure(this, name(), "if_stage_pip.ifid_register", "ifid_register", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_if_stage_pip__instruction_memory.configure(this, name(), "if_stage_pip.instruction_memory", "instruction_memory", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_if_stage_pip__pc_logic_unit.configure(this, name(), "if_stage_pip.pc_logic_unit", "pc_logic_unit", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_if_stage_pip__prog_counter.configure(this, name(), "if_stage_pip.prog_counter", "prog_counter", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"branch_taken", &(TOP.branch_taken), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch_target", &(TOP.branch_target), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"if_id_flush", &(TOP.if_id_flush), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"if_id_write", &(TOP.if_id_write), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"instr_out", &(TOP.instr_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"jump", &(TOP.jump), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"jump_target", &(TOP.jump_target), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_out", &(TOP.pc_out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_write", &(TOP.pc_write), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"branch_taken", &(TOP.if_stage_pip__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"branch_target", &(TOP.if_stage_pip__DOT__branch_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"clk", &(TOP.if_stage_pip__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"current_pc", &(TOP.if_stage_pip__DOT__current_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"if_id_flush", &(TOP.if_stage_pip__DOT__if_id_flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"if_id_write", &(TOP.if_stage_pip__DOT__if_id_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"instr", &(TOP.if_stage_pip__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"instr_out", &(TOP.if_stage_pip__DOT__instr_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"jump", &(TOP.if_stage_pip__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"jump_target", &(TOP.if_stage_pip__DOT__jump_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"next_pc", &(TOP.if_stage_pip__DOT__next_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"pc_out", &(TOP.if_stage_pip__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"pc_write", &(TOP.if_stage_pip__DOT__pc_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip.varInsert(__Vfinal,"rst", &(TOP.if_stage_pip__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"clk", &(TOP.if_stage_pip__DOT__ifid_register__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"if_id_flush", &(TOP.if_stage_pip__DOT__ifid_register__DOT__if_id_flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"if_id_write", &(TOP.if_stage_pip__DOT__ifid_register__DOT__if_id_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"instr_in", &(TOP.if_stage_pip__DOT__ifid_register__DOT__instr_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"instr_out", &(TOP.if_stage_pip__DOT__ifid_register__DOT__instr_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"pc_in", &(TOP.if_stage_pip__DOT__ifid_register__DOT__pc_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"pc_out", &(TOP.if_stage_pip__DOT__ifid_register__DOT__pc_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__ifid_register.varInsert(__Vfinal,"rst", &(TOP.if_stage_pip__DOT__ifid_register__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__instruction_memory.varInsert(__Vfinal,"addr", &(TOP.if_stage_pip__DOT__instruction_memory__DOT__addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__instruction_memory.varInsert(__Vfinal,"instr", &(TOP.if_stage_pip__DOT__instruction_memory__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__instruction_memory.varInsert(__Vfinal,"memory", &(TOP.if_stage_pip__DOT__instruction_memory__DOT__memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,255 ,31,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"branch_taken", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"branch_target", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__branch_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"current_pc", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__current_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"jump", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"jump_target", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__jump_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"next_pc", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__pc_logic_unit.varInsert(__Vfinal,"pc_4", &(TOP.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__prog_counter.varInsert(__Vfinal,"clk", &(TOP.if_stage_pip__DOT__prog_counter__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__prog_counter.varInsert(__Vfinal,"current_pc", &(TOP.if_stage_pip__DOT__prog_counter__DOT__current_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__prog_counter.varInsert(__Vfinal,"next_pc", &(TOP.if_stage_pip__DOT__prog_counter__DOT__next_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_if_stage_pip__prog_counter.varInsert(__Vfinal,"pc_write", &(TOP.if_stage_pip__DOT__prog_counter__DOT__pc_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_if_stage_pip__prog_counter.varInsert(__Vfinal,"rst", &(TOP.if_stage_pip__DOT__prog_counter__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
