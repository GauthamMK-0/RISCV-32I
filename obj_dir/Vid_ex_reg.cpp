// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vid_ex_reg__pch.h"

//============================================================
// Constructors

Vid_ex_reg::Vid_ex_reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vid_ex_reg__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , id_ex_write{vlSymsp->TOP.id_ex_write}
    , id_ex_flush{vlSymsp->TOP.id_ex_flush}
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
    , rs1_out{vlSymsp->TOP.rs1_out}
    , rs2_out{vlSymsp->TOP.rs2_out}
    , rd_out{vlSymsp->TOP.rd_out}
    , alu_ctrl_out{vlSymsp->TOP.alu_ctrl_out}
    , branch_ctrl_out{vlSymsp->TOP.branch_ctrl_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , mem_read_out{vlSymsp->TOP.mem_read_out}
    , mem_write_out{vlSymsp->TOP.mem_write_out}
    , mem_to_reg_out{vlSymsp->TOP.mem_to_reg_out}
    , alu_src_out{vlSymsp->TOP.alu_src_out}
    , branch_out{vlSymsp->TOP.branch_out}
    , jal_out{vlSymsp->TOP.jal_out}
    , jalr_out{vlSymsp->TOP.jalr_out}
    , rs1_data_in{vlSymsp->TOP.rs1_data_in}
    , rs2_data_in{vlSymsp->TOP.rs2_data_in}
    , imm_in{vlSymsp->TOP.imm_in}
    , rs1_data_out{vlSymsp->TOP.rs1_data_out}
    , rs2_data_out{vlSymsp->TOP.rs2_data_out}
    , imm_out{vlSymsp->TOP.imm_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vid_ex_reg::Vid_ex_reg(const char* _vcname__)
    : Vid_ex_reg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vid_ex_reg::~Vid_ex_reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vid_ex_reg___024root___eval_debug_assertions(Vid_ex_reg___024root* vlSelf);
#endif  // VL_DEBUG
void Vid_ex_reg___024root___eval_static(Vid_ex_reg___024root* vlSelf);
void Vid_ex_reg___024root___eval_initial(Vid_ex_reg___024root* vlSelf);
void Vid_ex_reg___024root___eval_settle(Vid_ex_reg___024root* vlSelf);
void Vid_ex_reg___024root___eval(Vid_ex_reg___024root* vlSelf);

void Vid_ex_reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vid_ex_reg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vid_ex_reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vid_ex_reg___024root___eval_static(&(vlSymsp->TOP));
        Vid_ex_reg___024root___eval_initial(&(vlSymsp->TOP));
        Vid_ex_reg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vid_ex_reg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vid_ex_reg::eventsPending() { return false; }

uint64_t Vid_ex_reg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vid_ex_reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vid_ex_reg___024root___eval_final(Vid_ex_reg___024root* vlSelf);

VL_ATTR_COLD void Vid_ex_reg::final() {
    Vid_ex_reg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vid_ex_reg::hierName() const { return vlSymsp->name(); }
const char* Vid_ex_reg::modelName() const { return "Vid_ex_reg"; }
unsigned Vid_ex_reg::threads() const { return 1; }
void Vid_ex_reg::prepareClone() const { contextp()->prepareClone(); }
void Vid_ex_reg::atClone() const {
    contextp()->threadPoolpOnClone();
}
