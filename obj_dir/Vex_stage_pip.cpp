// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vex_stage_pip__pch.h"

//============================================================
// Constructors

Vex_stage_pip::Vex_stage_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vex_stage_pip__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rs1_in{vlSymsp->TOP.rs1_in}
    , rs2_in{vlSymsp->TOP.rs2_in}
    , rd_in{vlSymsp->TOP.rd_in}
    , alu_ctrl_in{vlSymsp->TOP.alu_ctrl_in}
    , branch_ctrl_in{vlSymsp->TOP.branch_ctrl_in}
    , reg_write_in{vlSymsp->TOP.reg_write_in}
    , mem_read_in{vlSymsp->TOP.mem_read_in}
    , mem_write_in{vlSymsp->TOP.mem_write_in}
    , mem_to_reg_in{vlSymsp->TOP.mem_to_reg_in}
    , alu_src_in{vlSymsp->TOP.alu_src_in}
    , branch_in{vlSymsp->TOP.branch_in}
    , jal_in{vlSymsp->TOP.jal_in}
    , jalr_in{vlSymsp->TOP.jalr_in}
    , forward_rs1{vlSymsp->TOP.forward_rs1}
    , forward_rs2{vlSymsp->TOP.forward_rs2}
    , rd_out{vlSymsp->TOP.rd_out}
    , rs1_out{vlSymsp->TOP.rs1_out}
    , rs2_out{vlSymsp->TOP.rs2_out}
    , mem_read_out{vlSymsp->TOP.mem_read_out}
    , mem_write_out{vlSymsp->TOP.mem_write_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , mem_to_reg_out{vlSymsp->TOP.mem_to_reg_out}
    , branch_taken_out{vlSymsp->TOP.branch_taken_out}
    , jump_out{vlSymsp->TOP.jump_out}
    , pc_in{vlSymsp->TOP.pc_in}
    , rs1_data_in{vlSymsp->TOP.rs1_data_in}
    , rs2_data_in{vlSymsp->TOP.rs2_data_in}
    , imm_in{vlSymsp->TOP.imm_in}
    , forward_data_mem{vlSymsp->TOP.forward_data_mem}
    , forward_data_wb{vlSymsp->TOP.forward_data_wb}
    , pc_out{vlSymsp->TOP.pc_out}
    , alu_result_out{vlSymsp->TOP.alu_result_out}
    , rs2_data_out{vlSymsp->TOP.rs2_data_out}
    , branch_target_out{vlSymsp->TOP.branch_target_out}
    , jump_target_out{vlSymsp->TOP.jump_target_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vex_stage_pip::Vex_stage_pip(const char* _vcname__)
    : Vex_stage_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vex_stage_pip::~Vex_stage_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vex_stage_pip___024root___eval_debug_assertions(Vex_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vex_stage_pip___024root___eval_static(Vex_stage_pip___024root* vlSelf);
void Vex_stage_pip___024root___eval_initial(Vex_stage_pip___024root* vlSelf);
void Vex_stage_pip___024root___eval_settle(Vex_stage_pip___024root* vlSelf);
void Vex_stage_pip___024root___eval(Vex_stage_pip___024root* vlSelf);

void Vex_stage_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vex_stage_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vex_stage_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vex_stage_pip___024root___eval_static(&(vlSymsp->TOP));
        Vex_stage_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vex_stage_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vex_stage_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vex_stage_pip::eventsPending() { return false; }

uint64_t Vex_stage_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vex_stage_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vex_stage_pip___024root___eval_final(Vex_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vex_stage_pip::final() {
    Vex_stage_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vex_stage_pip::hierName() const { return vlSymsp->name(); }
const char* Vex_stage_pip::modelName() const { return "Vex_stage_pip"; }
unsigned Vex_stage_pip::threads() const { return 1; }
void Vex_stage_pip::prepareClone() const { contextp()->prepareClone(); }
void Vex_stage_pip::atClone() const {
    contextp()->threadPoolpOnClone();
}
