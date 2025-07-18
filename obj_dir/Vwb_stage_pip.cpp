// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwb_stage_pip__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vwb_stage_pip::Vwb_stage_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vwb_stage_pip__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rd_in{vlSymsp->TOP.rd_in}
    , wb_sel{vlSymsp->TOP.wb_sel}
    , reg_write_in{vlSymsp->TOP.reg_write_in}
    , mem_to_reg_in{vlSymsp->TOP.mem_to_reg_in}
    , rd_out{vlSymsp->TOP.rd_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , pc_in{vlSymsp->TOP.pc_in}
    , alu_result_in{vlSymsp->TOP.alu_result_in}
    , mem_data_in{vlSymsp->TOP.mem_data_in}
    , reg_data_out{vlSymsp->TOP.reg_data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vwb_stage_pip::Vwb_stage_pip(const char* _vcname__)
    : Vwb_stage_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vwb_stage_pip::~Vwb_stage_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vwb_stage_pip___024root___eval_debug_assertions(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vwb_stage_pip___024root___eval_static(Vwb_stage_pip___024root* vlSelf);
void Vwb_stage_pip___024root___eval_initial(Vwb_stage_pip___024root* vlSelf);
void Vwb_stage_pip___024root___eval_settle(Vwb_stage_pip___024root* vlSelf);
void Vwb_stage_pip___024root___eval(Vwb_stage_pip___024root* vlSelf);

void Vwb_stage_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwb_stage_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwb_stage_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vwb_stage_pip___024root___eval_static(&(vlSymsp->TOP));
        Vwb_stage_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vwb_stage_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vwb_stage_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vwb_stage_pip::eventsPending() { return false; }

uint64_t Vwb_stage_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vwb_stage_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vwb_stage_pip___024root___eval_final(Vwb_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vwb_stage_pip::final() {
    Vwb_stage_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vwb_stage_pip::hierName() const { return vlSymsp->name(); }
const char* Vwb_stage_pip::modelName() const { return "Vwb_stage_pip"; }
unsigned Vwb_stage_pip::threads() const { return 1; }
void Vwb_stage_pip::prepareClone() const { contextp()->prepareClone(); }
void Vwb_stage_pip::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vwb_stage_pip::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vwb_stage_pip___024root__trace_decl_types(VerilatedVcd* tracep);

void Vwb_stage_pip___024root__trace_init_top(Vwb_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwb_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_stage_pip___024root*>(voidSelf);
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vwb_stage_pip___024root__trace_decl_types(tracep);
    Vwb_stage_pip___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_register(Vwb_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vwb_stage_pip::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vwb_stage_pip::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vwb_stage_pip___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
