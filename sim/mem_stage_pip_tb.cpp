#include "Vmem_stage_pip.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

void tick(Vmem_stage_pip *dut) {
    dut->clk = 0;
    dut->eval();
    main_time += 5;

    dut->clk = 1;
    dut->eval();
    main_time += 5;
}

void reset(Vmem_stage_pip *dut) {
    dut->rst = 1;
    tick(dut);
    tick(dut);
    dut->rst = 0;
    tick(dut);
}

void print_outputs(Vmem_stage_pip *dut) {
    std::cout << std::hex << std::setfill('0');
    std::cout << "ALU Result OUT : 0x" << std::setw(8) << dut->alu_result_out << "\n";
    std::cout << "MEM Data  OUT  : 0x" << std::setw(8) << dut->mem_data_out << "\n";
    std::cout << "RD OUT         : " << std::dec << static_cast<int>(dut->rd_out) << "\n";
    std::cout << "RegWrite       : " << static_cast<int>(dut->reg_write_out) << "\n";
    std::cout << "MemToReg       : " << static_cast<int>(dut->mem_to_reg_out) << "\n";
    std::cout << "-----------------------------\n";
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmem_stage_pip* dut = new Vmem_stage_pip;

    dut->clk = 0;
    dut->rst = 0;

    std::cout << "--- Resetting ---\n";
    reset(dut);

    // Test 1: Store Word (SW)
    std::cout << "--- Test 1: SW ---\n";
    dut->alu_result_in = 0x00000004;
    dut->rs2_data_in   = 0xdeadbeef;
    dut->funct3_in     = 0b010;
    dut->rd_in         = 0;
    dut->mem_read_in   = 0;
    dut->mem_write_in  = 1;
    dut->reg_write_in  = 0;
    dut->mem_to_reg_in = 0;
    tick(dut);  // Write happens on posedge

    // Test 2: Load Word (LW)
    std::cout << "--- Test 2: LW ---\n";
    dut->alu_result_in = 0x00000004;
    dut->rs2_data_in   = 0x0;
    dut->funct3_in     = 0b010;
    dut->rd_in         = 1;
    dut->mem_read_in   = 1;
    dut->mem_write_in  = 0;
    dut->reg_write_in  = 1;
    dut->mem_to_reg_in = 1;
    tick(dut);  // initiate load
    tick(dut);  // wait for memory read output to propagate
    print_outputs(dut);

    // Test 3: Store Byte (SB)
    std::cout << "--- Test 3: SB ---\n";
    dut->alu_result_in = 0x00000008;
    dut->rs2_data_in   = 0x000000aa;
    dut->funct3_in     = 0b000;
    dut->rd_in         = 0;
    dut->mem_read_in   = 0;
    dut->mem_write_in  = 1;
    dut->reg_write_in  = 0;
    dut->mem_to_reg_in = 0;
    tick(dut);  // Write

    // Test 4: Load Byte (LB)
    std::cout << "--- Test 4: LB ---\n";
    dut->alu_result_in = 0x00000008;
    dut->funct3_in     = 0b000;
    dut->rd_in         = 2;
    dut->mem_read_in   = 1;
    dut->mem_write_in  = 0;
    dut->reg_write_in  = 1;
    dut->mem_to_reg_in = 1;
    tick(dut);  // Start load
    tick(dut);  // Wait for read
    print_outputs(dut);

    std::cout << "--- Done ---\n";

    delete dut;
    return 0;
}
