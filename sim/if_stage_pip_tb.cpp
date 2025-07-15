#include "Vif_stage_pip.h"   // Verilated module header
#include "verilated.h"
#include <iostream>
#include <cstdlib>

// Clock period in simulation time units
const vluint64_t clk_period = 10;

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vif_stage_pip* top = new Vif_stage_pip;

    vluint64_t main_time = 0;

    // Helper to toggle clock
    auto toggle_clk = [&]() {
        top->clk = 0;
        top->eval();
        main_time += clk_period / 2;

        top->clk = 1;
        top->eval();
        main_time += clk_period / 2;
    };

    // Initialize inputs
    top->rst = 0;
    top->pc_write = 0;
    top->if_id_write = 0;
    top->flush = 0;
    top->jump = 0;
    top->branch_taken = 0;
    top->branch_target = 0;
    top->jump_target = 0;

    // Apply reset for 2 cycles
    toggle_clk();
    toggle_clk();
    top->rst = 1;

    std::cout << "Starting testbench simulation...\n";

    // Test sequence

    // Cycle 1: Normal PC increment
    top->pc_write = 1;
    top->if_id_write = 1;
    top->flush = 0;
    top->jump = 0;
    top->branch_taken = 0;
    toggle_clk();
    std::cout << "Cycle 1: PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Cycle 2: Flush asserted - IF/ID pipeline cleared
    top->flush = 1;
    toggle_clk();
    std::cout << "Cycle 2 (flush): PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Cycle 3: Flush cleared, branch taken
    top->flush = 0;
    top->branch_taken = 1;
    top->branch_target = 0x40; // example branch target
    toggle_clk();
    std::cout << "Cycle 3 (branch taken): PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Cycle 4: Jump asserted
    top->branch_taken = 0;
    top->jump = 1;
    top->jump_target = 0x80; // example jump target
    toggle_clk();
    std::cout << "Cycle 4 (jump): PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Cycle 5: Disable pc_write (stall PC)
    top->jump = 0;
    top->pc_write = 0;
    toggle_clk();
    std::cout << "Cycle 5 (pc_write=0 stall): PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Cycle 6: Normal operation resume
    top->pc_write = 1;
    top->if_id_write = 1;
    toggle_clk();
    std::cout << "Cycle 6 (normal resume): PC=" << std::hex << top->pc_out
              << ", Instr=" << top->instr_out << "\n";

    // Run a few more cycles to check stability
    for (int i = 7; i <= 12; i++) {
        toggle_clk();
        std::cout << "Cycle " << i << ": PC=" << std::hex << top->pc_out
                  << ", Instr=" << top->instr_out << "\n";
    }

    std::cout << "Testbench simulation finished.\n";

    delete top;
    return 0;
}
