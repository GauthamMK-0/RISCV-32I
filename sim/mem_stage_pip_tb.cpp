#include "Vmem_stage_pip.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vmem_stage_pip* dut, VerilatedVcdC* tfp) {
    dut->clk = 0;
    dut->eval();
    tfp->dump(main_time);
    main_time += 5;

    dut->clk = 1;
    dut->eval();
    tfp->dump(main_time);
    main_time += 5;
}

void reset(Vmem_stage_pip* dut, VerilatedVcdC* tfp) {
    dut->rst = 1;
    tick(dut, tfp);
    tick(dut, tfp);
    dut->rst = 0;
    tick(dut, tfp);
}

void print_outputs(Vmem_stage_pip* dut) {
    std::cout << std::hex << std::setfill('0');
    std::cout << "PC OUT         : 0x" << std::setw(8) << dut->pc_out << "\n";
    std::cout << "ALU Result OUT : 0x" << std::setw(8) << dut->alu_result_out << "\n";
    std::cout << "MEM Data  OUT  : 0x" << std::setw(8) << dut->mem_data_out << "\n";
    std::cout << "RD OUT         : " << std::dec << static_cast<int>(dut->rd_out) << "\n";
    std::cout << "RegWrite       : " << static_cast<int>(dut->reg_write_out) << "\n";
    std::cout << "MemToReg       : " << static_cast<int>(dut->mem_to_reg_out) << "\n";
    std::cout << "WB_SEL         : " << static_cast<int>(dut->wb_sel_out) << "\n";
    std::cout << "-----------------------------\n";
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vmem_stage_pip* dut = new Vmem_stage_pip;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("mem_stage.vcd");

    // === Reset ===
    std::cout << "--- Resetting ---\n";
    reset(dut, tfp);

    // === Test 1: Store Word (SW) ===
    std::cout << "--- Test 1: SW (Store Word @ addr 0x04) ---\n";
    dut->alu_result_in = 0x00000004;
    dut->rs2_data_in   = 0x12345678;
    dut->funct3_in     = 0b010;  // SW
    dut->rd_in         = 0;
    dut->pc_in         = 0x100;
    dut->wb_sel_in     = 0;
    dut->mem_read_in   = 0;
    dut->mem_write_in  = 1;
    dut->reg_write_in  = 0;
    dut->mem_to_reg_in = 0;
    tick(dut, tfp);  // Write

    // === Test 2: Load Word (LW) ===
    std::cout << "--- Test 2: LW (Load Word @ addr 0x04) ---\n";
    dut->alu_result_in = 0x00000004;
    dut->rs2_data_in   = 0;
    dut->funct3_in     = 0b010;  // LW
    dut->rd_in         = 1;
    dut->pc_in         = 0x104;
    dut->wb_sel_in     = 1;
    dut->mem_read_in   = 1;
    dut->mem_write_in  = 0;
    dut->reg_write_in  = 1;
    dut->mem_to_reg_in = 1;
    tick(dut, tfp);  // Load input latch
    tick(dut, tfp);  // Load output captured in reg
    print_outputs(dut);

    // === Test 3: Store Byte (SB) ===
    std::cout << "--- Test 3: SB (Store Byte @ addr 0x08) ---\n";
    dut->alu_result_in = 0x00000008;
    dut->rs2_data_in   = 0x000000AA;
    dut->funct3_in     = 0b000;  // SB
    dut->rd_in         = 0;
    dut->pc_in         = 0x108;
    dut->wb_sel_in     = 0;
    dut->mem_read_in   = 0;
    dut->mem_write_in  = 1;
    dut->reg_write_in  = 0;
    dut->mem_to_reg_in = 0;
    tick(dut, tfp);

    // === Test 4: Load Byte (LB) ===
    std::cout << "--- Test 4: LB (Load Byte @ addr 0x08) ---\n";
    dut->alu_result_in = 0x00000008;
    dut->rs2_data_in   = 0;
    dut->funct3_in     = 0b000;  // LB
    dut->rd_in         = 2;
    dut->pc_in         = 0x10C;
    dut->wb_sel_in     = 1;
    dut->mem_read_in   = 1;
    dut->mem_write_in  = 0;
    dut->reg_write_in  = 1;
    dut->mem_to_reg_in = 1;
    tick(dut, tfp);
    tick(dut, tfp);
    print_outputs(dut);

    std::cout << "--- Simulation Complete ---\n";

    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
