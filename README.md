register:
- asynchronous reset, less logic required to implement,but need to make sure passes recovery and removal time 
- for ASIC,active low reset

ALU:
- LUI, AUIPC needs to be implemented in design 
- need separate signal for LUI for execution 

Branch Unit:
- look into the updation of pc logic ✅
- need to implement both branch and branch_flag ✅

Instruction decoder:
- implement U-type later ✅

Jump logic:
- need implementation of jump logic  ========> PRIORITY! ✅
- implement jump = jal| jalr later in the pipeline

Control unit:
- alu_src = 0 => rs2, alu_src = 1 => imm ✅

EX_stage:
- need implementation of forwarding unit ✅
- need multiplexer for alu from frowarding unit
- remove unwanted wires in register  (needed pc for wb stage)

MEM_stage:
- need to implement memory access mux ✅
- need to implement byte masking ✅


THINGS TO DO AND LEARN:
- learn about stalling in pipelines
- implementation of separate flush signals
- try using RISC-V NOP instruction ADDI x0, x0, 0
-remove mem_to_reg signal (replaced by wb_sel)

POINTS TO REMEBER:
- jump and branch instructions are handled in EX satge
- refer commenting style from mem_mux.v

PROGRESS:
- IF_stage completed and checked
- ID_stage completed and checked
- EX_stage completed and checked
- MEM_stage completed and checked
- WB_stage completed and checked



THINGS TO CHECK:
- sub instr fails 
- check logical instructions