## Introduction
This repository contains the RTL implementation of a **5-stage pipelined RV32I processor core** with hazard handling and data forearding for efficient instruction execution using Verilog. This core supports all the instructions of the 32-bit Base Integer Instruction Set. **RISC-V** is an open-source **Instruction Set Architecture (ISA)**, unlike existing proprietary ISAs such as **ARM** and **x86**. It follows the **RISC** principles and employs a **load-store architecture** with 32 general-purpose registers. RISC-V defines a minimal base integer instruction set, with optional standard extensions that provide full flexibility to customize the architecture for a wide range of applications.

## Tools and Workspace
|Component|Tool|
| --- | --- |
|Development Environment| Windows 11 + WSL2 (Ubuntu-24.04)|
|Code Editor| VScode + Remote-WSL extension|
|Simulator | Verilator| 
|Waveform Viewer| GTKWave + VcXsrv|

## Pipeline Architecture
- **IF stage:**
       The instruction is fetched from the instruction memory based on the current Program Counter (**PC**).
  
    **Workflow:**
   - Reads instruction at **PC**
   - Computes next **PC = PC + 4** 
   - Handles jump and branch instructions by redirecting to target address
   - **IF/ID** pipeline register forwards instruction and **PC** to **ID** stage
     
- **ID stage:**
      Decoding of the retrieved instruction for **IF** stage and generation of control signals for **EX** stage.
  
  **Workflow:**
  - Generates `rs1`, `rs2`, `imm`, `funct3`, `funct7` fields and control signals
  - Read data from the general purpose registers
  - Based on forwarding, data from **EX** or **MEM** stage is forwarded to next stage
  - **ID/EX** pipeline register forwards decoded fields and control signals to **EX** stage
    
- **EX stage:**
      Execution of arthimetic, logical, condition checks or address calculations.

  **Workflow:**
  - Based on forwarding data from **MEM** or **WB** stage is forwarded to ALU
  - Based on control signals, ALU executes the instructions
  - Target addresses for branch and jump intructions are calculated
  - **EX/MEM** pipeline register forwards ALU result, data, and control signals to **MEM** stage

- **MEM stage:**
       Access data memory for load/store instructions

  **Workflow:**
  - Byte masking based on `funct3` for partial data write
  - Store: writes data to data memory in designated address
  - Load: reads signed or unsigned data according to requirements
  - **MEM/WB** pipeline register forwards memory data, ALU result, and control signals to **WB** stage
- **WB stage:**
       Writes the final data to register file based on the instruction

  **Workflow:**
  - Computes **PC + 4** for `JAL` and `JALR` instructions
  - Based on the `wb_sel`, selects:
    - ALU result (Arithmetic/Logical instructions)
    - Memory data (Load instructions)
    - **PC + 4**  (Jump instructions)
  - Writes the data to destination register in the register file

## Forwarding and Hazard handling

