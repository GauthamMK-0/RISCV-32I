// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VEX_STAGE_PIP_H_
#define VERILATED_VEX_STAGE_PIP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vex_stage_pip__Syms;
class Vex_stage_pip___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vex_stage_pip VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vex_stage_pip__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&funct3_in,2,0);
    VL_IN8(&rs1_in,4,0);
    VL_IN8(&rs2_in,4,0);
    VL_IN8(&rd_in,4,0);
    VL_IN8(&alu_ctrl_in,3,0);
    VL_IN8(&branch_ctrl_in,2,0);
    VL_IN8(&wb_sel_in,1,0);
    VL_IN8(&reg_write_in,0,0);
    VL_IN8(&mem_read_in,0,0);
    VL_IN8(&mem_write_in,0,0);
    VL_IN8(&mem_to_reg_in,0,0);
    VL_IN8(&alu_src_in,0,0);
    VL_IN8(&branch_in,0,0);
    VL_IN8(&jal_in,0,0);
    VL_IN8(&jalr_in,0,0);
    VL_IN8(&forward_rs1,1,0);
    VL_IN8(&forward_rs2,1,0);
    VL_OUT8(&funct3_out,2,0);
    VL_OUT8(&rd_out,4,0);
    VL_OUT8(&rs1_out,4,0);
    VL_OUT8(&rs2_out,4,0);
    VL_OUT8(&wb_sel_out,1,0);
    VL_OUT8(&mem_read_out,0,0);
    VL_OUT8(&mem_write_out,0,0);
    VL_OUT8(&reg_write_out,0,0);
    VL_OUT8(&mem_to_reg_out,0,0);
    VL_OUT8(&branch_taken_out,0,0);
    VL_OUT8(&jump_out,0,0);
    VL_OUT8(&alu_ctrl_debug,3,0);
    VL_IN(&pc_in,31,0);
    VL_IN(&rs1_data_in,31,0);
    VL_IN(&rs2_data_in,31,0);
    VL_IN(&imm_in,31,0);
    VL_IN(&forward_data_mem,31,0);
    VL_IN(&forward_data_wb,31,0);
    VL_OUT(&pc_out,31,0);
    VL_OUT(&alu_result_out,31,0);
    VL_OUT(&rs2_data_out,31,0);
    VL_OUT(&branch_target_out,31,0);
    VL_OUT(&jump_target_out,31,0);
    VL_OUT(&alu_a_debug,31,0);
    VL_OUT(&alu_b_debug,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vex_stage_pip___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vex_stage_pip(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vex_stage_pip(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vex_stage_pip();
  private:
    VL_UNCOPYABLE(Vex_stage_pip);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
