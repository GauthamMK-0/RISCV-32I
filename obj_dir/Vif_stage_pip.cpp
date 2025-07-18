// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vif_stage_pip__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vif_stage_pip::Vif_stage_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vif_stage_pip__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pc_write{vlSymsp->TOP.pc_write}
    , if_id_write{vlSymsp->TOP.if_id_write}
    , if_id_flush{vlSymsp->TOP.if_id_flush}
    , jump{vlSymsp->TOP.jump}
    , branch_taken{vlSymsp->TOP.branch_taken}
    , branch_target{vlSymsp->TOP.branch_target}
    , jump_target{vlSymsp->TOP.jump_target}
    , instr_out{vlSymsp->TOP.instr_out}
    , pc_out{vlSymsp->TOP.pc_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vif_stage_pip::Vif_stage_pip(const char* _vcname__)
    : Vif_stage_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vif_stage_pip::~Vif_stage_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vif_stage_pip___024root___eval_debug_assertions(Vif_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vif_stage_pip___024root___eval_static(Vif_stage_pip___024root* vlSelf);
void Vif_stage_pip___024root___eval_initial(Vif_stage_pip___024root* vlSelf);
void Vif_stage_pip___024root___eval_settle(Vif_stage_pip___024root* vlSelf);
void Vif_stage_pip___024root___eval(Vif_stage_pip___024root* vlSelf);

void Vif_stage_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vif_stage_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vif_stage_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vif_stage_pip___024root___eval_static(&(vlSymsp->TOP));
        Vif_stage_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vif_stage_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vif_stage_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vif_stage_pip::eventsPending() { return false; }

uint64_t Vif_stage_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vif_stage_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vif_stage_pip___024root___eval_final(Vif_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vif_stage_pip::final() {
    Vif_stage_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vif_stage_pip::hierName() const { return vlSymsp->name(); }
const char* Vif_stage_pip::modelName() const { return "Vif_stage_pip"; }
unsigned Vif_stage_pip::threads() const { return 1; }
void Vif_stage_pip::prepareClone() const { contextp()->prepareClone(); }
void Vif_stage_pip::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vif_stage_pip::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vif_stage_pip___024root__trace_decl_types(VerilatedVcd* tracep);

void Vif_stage_pip___024root__trace_init_top(Vif_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vif_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vif_stage_pip___024root*>(voidSelf);
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vif_stage_pip___024root__trace_decl_types(tracep);
    Vif_stage_pip___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_register(Vif_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vif_stage_pip::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vif_stage_pip::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vif_stage_pip___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
