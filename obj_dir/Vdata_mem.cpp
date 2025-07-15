// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_mem__pch.h"

//============================================================
// Constructors

Vdata_mem::Vdata_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_mem__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , funct3_in{vlSymsp->TOP.funct3_in}
    , rd_in{vlSymsp->TOP.rd_in}
    , mem_read_in{vlSymsp->TOP.mem_read_in}
    , mem_write_in{vlSymsp->TOP.mem_write_in}
    , reg_write_in{vlSymsp->TOP.reg_write_in}
    , mem_to_reg_in{vlSymsp->TOP.mem_to_reg_in}
    , rd_out{vlSymsp->TOP.rd_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , mem_to_reg_out{vlSymsp->TOP.mem_to_reg_out}
    , alu_result_in{vlSymsp->TOP.alu_result_in}
    , rs2_data_in{vlSymsp->TOP.rs2_data_in}
    , alu_result_out{vlSymsp->TOP.alu_result_out}
    , mem_data_out{vlSymsp->TOP.mem_data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_mem::Vdata_mem(const char* _vcname__)
    : Vdata_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_mem::~Vdata_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_mem___024root___eval_static(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf);

void Vdata_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_mem___024root___eval_static(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_mem::eventsPending() { return false; }

uint64_t Vdata_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdata_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_mem___024root___eval_final(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem::final() {
    Vdata_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_mem::hierName() const { return vlSymsp->name(); }
const char* Vdata_mem::modelName() const { return "Vdata_mem"; }
unsigned Vdata_mem::threads() const { return 1; }
void Vdata_mem::prepareClone() const { contextp()->prepareClone(); }
void Vdata_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
