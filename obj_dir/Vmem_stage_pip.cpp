// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmem_stage_pip__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmem_stage_pip::Vmem_stage_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmem_stage_pip__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , funct3_in{vlSymsp->TOP.funct3_in}
    , rd_in{vlSymsp->TOP.rd_in}
    , wb_sel_in{vlSymsp->TOP.wb_sel_in}
    , mem_read_in{vlSymsp->TOP.mem_read_in}
    , mem_write_in{vlSymsp->TOP.mem_write_in}
    , reg_write_in{vlSymsp->TOP.reg_write_in}
    , mem_to_reg_in{vlSymsp->TOP.mem_to_reg_in}
    , rd_out{vlSymsp->TOP.rd_out}
    , wb_sel_out{vlSymsp->TOP.wb_sel_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , mem_to_reg_out{vlSymsp->TOP.mem_to_reg_out}
    , pc_in{vlSymsp->TOP.pc_in}
    , alu_result_in{vlSymsp->TOP.alu_result_in}
    , rs2_data_in{vlSymsp->TOP.rs2_data_in}
    , pc_out{vlSymsp->TOP.pc_out}
    , alu_result_out{vlSymsp->TOP.alu_result_out}
    , mem_data_out{vlSymsp->TOP.mem_data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmem_stage_pip::Vmem_stage_pip(const char* _vcname__)
    : Vmem_stage_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmem_stage_pip::~Vmem_stage_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmem_stage_pip___024root___eval_debug_assertions(Vmem_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vmem_stage_pip___024root___eval_static(Vmem_stage_pip___024root* vlSelf);
void Vmem_stage_pip___024root___eval_initial(Vmem_stage_pip___024root* vlSelf);
void Vmem_stage_pip___024root___eval_settle(Vmem_stage_pip___024root* vlSelf);
void Vmem_stage_pip___024root___eval(Vmem_stage_pip___024root* vlSelf);

void Vmem_stage_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmem_stage_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmem_stage_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmem_stage_pip___024root___eval_static(&(vlSymsp->TOP));
        Vmem_stage_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vmem_stage_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmem_stage_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmem_stage_pip::eventsPending() { return false; }

uint64_t Vmem_stage_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmem_stage_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmem_stage_pip___024root___eval_final(Vmem_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vmem_stage_pip::final() {
    Vmem_stage_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmem_stage_pip::hierName() const { return vlSymsp->name(); }
const char* Vmem_stage_pip::modelName() const { return "Vmem_stage_pip"; }
unsigned Vmem_stage_pip::threads() const { return 1; }
void Vmem_stage_pip::prepareClone() const { contextp()->prepareClone(); }
void Vmem_stage_pip::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmem_stage_pip::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmem_stage_pip___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmem_stage_pip___024root__trace_init_top(Vmem_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmem_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem_stage_pip___024root*>(voidSelf);
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmem_stage_pip___024root__trace_decl_types(tracep);
    Vmem_stage_pip___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_register(Vmem_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmem_stage_pip::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmem_stage_pip::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmem_stage_pip___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
