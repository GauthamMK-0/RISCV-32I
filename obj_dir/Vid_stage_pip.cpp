// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vid_stage_pip__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vid_stage_pip::Vid_stage_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vid_stage_pip__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , id_ex_flush{vlSymsp->TOP.id_ex_flush}
    , id_ex_write{vlSymsp->TOP.id_ex_write}
    , reg_write_wb{vlSymsp->TOP.reg_write_wb}
    , rd_wb{vlSymsp->TOP.rd_wb}
    , ex_rd{vlSymsp->TOP.ex_rd}
    , mem_rd{vlSymsp->TOP.mem_rd}
    , ex_reg_write{vlSymsp->TOP.ex_reg_write}
    , mem_reg_write{vlSymsp->TOP.mem_reg_write}
    , forward_rs1{vlSymsp->TOP.forward_rs1}
    , forward_rs2{vlSymsp->TOP.forward_rs2}
    , rs1_hzd{vlSymsp->TOP.rs1_hzd}
    , rs2_hzd{vlSymsp->TOP.rs2_hzd}
    , rd_hzd{vlSymsp->TOP.rd_hzd}
    , rs1_out{vlSymsp->TOP.rs1_out}
    , rs2_out{vlSymsp->TOP.rs2_out}
    , rd_out{vlSymsp->TOP.rd_out}
    , funct3_out{vlSymsp->TOP.funct3_out}
    , alu_ctrl_out{vlSymsp->TOP.alu_ctrl_out}
    , branch_ctrl_out{vlSymsp->TOP.branch_ctrl_out}
    , wb_sel_out{vlSymsp->TOP.wb_sel_out}
    , reg_write_out{vlSymsp->TOP.reg_write_out}
    , mem_read_out{vlSymsp->TOP.mem_read_out}
    , mem_write_out{vlSymsp->TOP.mem_write_out}
    , mem_to_reg_out{vlSymsp->TOP.mem_to_reg_out}
    , jal_out{vlSymsp->TOP.jal_out}
    , jalr_out{vlSymsp->TOP.jalr_out}
    , branch_out{vlSymsp->TOP.branch_out}
    , alu_src_out{vlSymsp->TOP.alu_src_out}
    , instr_in{vlSymsp->TOP.instr_in}
    , pc_in{vlSymsp->TOP.pc_in}
    , rd_data_wb{vlSymsp->TOP.rd_data_wb}
    , ex_alu_result{vlSymsp->TOP.ex_alu_result}
    , mem_alu_result{vlSymsp->TOP.mem_alu_result}
    , pc_out{vlSymsp->TOP.pc_out}
    , rs1_data_out{vlSymsp->TOP.rs1_data_out}
    , rs2_data_out{vlSymsp->TOP.rs2_data_out}
    , imm_out{vlSymsp->TOP.imm_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vid_stage_pip::Vid_stage_pip(const char* _vcname__)
    : Vid_stage_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vid_stage_pip::~Vid_stage_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vid_stage_pip___024root___eval_debug_assertions(Vid_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vid_stage_pip___024root___eval_static(Vid_stage_pip___024root* vlSelf);
void Vid_stage_pip___024root___eval_initial(Vid_stage_pip___024root* vlSelf);
void Vid_stage_pip___024root___eval_settle(Vid_stage_pip___024root* vlSelf);
void Vid_stage_pip___024root___eval(Vid_stage_pip___024root* vlSelf);

void Vid_stage_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vid_stage_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vid_stage_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vid_stage_pip___024root___eval_static(&(vlSymsp->TOP));
        Vid_stage_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vid_stage_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vid_stage_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vid_stage_pip::eventsPending() { return false; }

uint64_t Vid_stage_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vid_stage_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vid_stage_pip___024root___eval_final(Vid_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vid_stage_pip::final() {
    Vid_stage_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vid_stage_pip::hierName() const { return vlSymsp->name(); }
const char* Vid_stage_pip::modelName() const { return "Vid_stage_pip"; }
unsigned Vid_stage_pip::threads() const { return 1; }
void Vid_stage_pip::prepareClone() const { contextp()->prepareClone(); }
void Vid_stage_pip::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vid_stage_pip::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vid_stage_pip___024root__trace_decl_types(VerilatedVcd* tracep);

void Vid_stage_pip___024root__trace_init_top(Vid_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vid_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vid_stage_pip___024root*>(voidSelf);
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vid_stage_pip___024root__trace_decl_types(tracep);
    Vid_stage_pip___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vid_stage_pip___024root__trace_register(Vid_stage_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vid_stage_pip::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vid_stage_pip::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vid_stage_pip___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
