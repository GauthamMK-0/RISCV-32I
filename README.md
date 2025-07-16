##Introduction:
This repository contains the RTL implementation of a **5-stage pipelined RV32I processor core** with hazard handling and data forearding for efficient instruction execution using Verilog. This core supports all the instructions of the 32-bit Base Integer Instruction Set. **RISC-V** is an open-source Instruction Set Architecture (ISA), unlike existing proprietary ISAs such as ARM and x86. It follows the **RISC** principles and employs a **load-store architecture** with 32 general-purpose registers. RISC-V defines a minimal base integer instruction set, with optional standard extensions that provide full flexibility to customize the architecture for a wide range of applications.

##Tools and Workspace:
Development Environment - Windows 11 + WSL2 (Ubuntu-24.04)
Code Editor - VScode + Remote-WSL extension
Simulator - Verilator 
Waveform Viewer - GTKWave + VcXsrv

##Pipeline Architecture:
- **IF stage**:
       The instruction is feteched from the instruction memory based on the current Program Counter (PC).
   #Workflow:
   - Reads instruction at **PC**
   - Computes next **PC = PC + 4** 
   - Handles jump and branch instructions by redirecting to target address
   - **IF/ID** pipeline register forwards the output to ID stage
- **ID stage**:
      Decoding of the retrieved instruction for **IF** stage and generation of control signals for EX stage.
  Workflow:
  - Generates `rs1`, `rs2`, `imm`, `funt3`, `funt7` fields and control signals
  - Read data from the general purpose registers
  - **ID/EX** pipeline register fowards the output to **EX** stage
- **EX stage**:
      
