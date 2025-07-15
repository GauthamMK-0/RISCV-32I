#include "Vpipeline.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0;  // simulation time
double sc_time_stamp() { return main_time; }

void tick(Vpipeline* dut) {
    dut->clk = 0; dut->eval(); main_time += 5;
    dut->clk = 1; dut->eval(); main_time += 5;
}

void print_debug(Vpipeline* dut, int cycle) {
    std::cout << "Cycle " << std::setw(2) << cycle << " | "
              << "IF_PC: 0x" << std::hex << std::setw(8) << dut->dbg_if_pc << " "
              << "Instr: 0x" << std::setw(8) << dut->dbg_if_instr << " | "
              << "ID [rs1: " << std::dec << (int)dut->dbg_id_rs1
              << ", rs2: " << (int)dut->dbg_id_rs2
              << ", rd: "  << (int)dut->dbg_id_rd << "] "
              << "rs1_data: 0x" << std::hex << std::setw(8) << dut->dbg_id_rs1_data
              << ", rs2_data: 0x" << std::setw(8) << dut->dbg_id_rs2_data << " | "
              << "EX [A: 0x" << std::setw(8) << dut->dbg_ex_alu_op_a
              << ", B: 0x" << std::setw(8) << dut->dbg_ex_alu_op_b
              << ", ALU: 0x" << std::setw(8) << dut->dbg_ex_alu_result << "] "
              << "Taken: " << dut->dbg_ex_branch_taken << " | "
              << "MEM [ALU: 0x" << std::setw(8) << dut->dbg_mem_alu_result
              << ", Data: 0x" << std::setw(8) << dut->dbg_mem_data << "] | "
              << "WB [Data: 0x" << std::setw(8) << dut->dbg_wb_data
              << ", rd: " << std::dec << (int)dut->dbg_wb_rd
              << ", we: " << (int)dut->dbg_wb_reg_write << "]"
              << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vpipeline* dut = new Vpipeline;

    // Reset sequence
    dut->rst = 1;
    tick(dut);
    tick(dut);
    dut->rst = 0;

    std::cout << "=== Begin Pipeline Simulation ===" << std::endl;

    for (int cycle = 0; cycle < 30; ++cycle) {
        tick(dut);
        print_debug(dut, cycle);
    }

    std::cout << "=== End Simulation ===" << std::endl;
    dut->final();
    delete dut;
    return 0;
}
