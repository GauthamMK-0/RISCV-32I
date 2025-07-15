module control_unit (
    input wire [6:0] opcode,
    input wire [2:0] funct3,
    input wire [6:0] funct7,
    output reg [3:0] alu_ctrl,
    output reg [2:0] branch_ctrl,
    output reg [1:0] wb_sel,
    output reg reg_write,
    output reg mem_read,
    output reg mem_write,
    output reg mem_to_reg,
    output reg jal,
    output reg jalr,
    output reg branch,
    output reg alu_src

);

localparam ADD = 4'b0000;
localparam SUB = 4'b0001;
localparam AND = 4'b0010;
localparam OR  = 4'b0011;
localparam XOR = 4'b0100;
localparam SLL = 4'b0101;
localparam SRL = 4'b0110;
localparam SRA = 4'b0111;
localparam SLT = 4'b1000;
localparam SLTU = 4'b1001;
localparam PASS = 4'b1010;
localparam ADD_PC = 4'b1011;

localparam BEQ = 3'b000;  // Branch if equal
localparam BNE = 3'b001;  // Branch if not equal
localparam BLT = 3'b010;  // Branch if less than
localparam BGE = 3'b011;  // Branch if greater than or equal
localparam BLTU = 3'b100; // Branch if less than unsigned
localparam BGEU = 3'b101; // Branch if greater than or equal unsigned

localparam R_TYPE = 7'b0110011;
localparam I_TYPE_LOAD = 7'b0000011;
localparam I_TYPE_ALU = 7'b0010011;
localparam I_TYPE_JALR = 7'b1100111;
localparam S_TYPE = 7'b0100011;
localparam B_TYPE = 7'b1100011;
localparam J_TYPE = 7'b1101111;
localparam U_TYPE_LUI = 7'b0110111;
localparam U_TYPE_AUIPC = 7'b0010111;

always @(*) begin
        alu_ctrl = ADD;
        branch_ctrl = 3'b000;
        reg_write = 1'b0; 
        mem_read = 1'b0; 
        mem_write = 1'b0; 
        mem_to_reg = 1'b0;
        jal = 1'b0;
        jalr = 1'b0;
        branch = 1'b0; 
        alu_src = 1'b0;
        wb_sel = 2'b00; 
    
        case(opcode)
            R_TYPE: begin
                reg_write = 1'b1;
                alu_src = 1'b0;
                wb_sel = 2'b00; // ALU result to register 
                case(funct3)
                    3'b000: alu_ctrl = (funct7 == 7'b0000000) ? ADD : SUB;
                    3'b001: alu_ctrl = SLL;
                    3'b010: alu_ctrl = SLT;
                    3'b011: alu_ctrl = SLTU;
                    3'b100: alu_ctrl = XOR;
                    3'b101: alu_ctrl = (funct7 == 7'b0000000) ? SRL : SRA;
                    3'b110: alu_ctrl = OR;
                    3'b111: alu_ctrl = AND;
                    default: alu_ctrl = ADD; // Default case
                endcase
            end

            I_TYPE_LOAD: begin
                reg_write = 1'b1;
                mem_read = 1'b1;
                alu_src = 1'b1;
                mem_to_reg = 1'b1;
                wb_sel = 2'b01; // Memory data to register
                alu_ctrl = ADD; // Load uses ADD for address calculation
            end

            I_TYPE_ALU: begin
                reg_write = 1'b1;
                alu_src = 1'b1;
                wb_sel = 2'b00; // ALU result to register
                
                case(funct3)
                    3'b000: alu_ctrl = ADD;
                    3'b001: alu_ctrl = SLL;
                    3'b010: alu_ctrl = SLT;
                    3'b011: alu_ctrl = SLTU;
                    3'b100: alu_ctrl = XOR;
                    3'b101: alu_ctrl = (funct7 == 7'b0000000) ? SRL : SRA;
                    3'b110: alu_ctrl = OR;
                    3'b111: alu_ctrl = AND;
                    default: alu_ctrl = ADD;
                endcase
            end

            I_TYPE_JALR: begin
                reg_write = 1'b1;
                alu_src = 1'b1;
                jalr = 1'b1;
                wb_sel = 2'b10; // PC + 4 to register
                alu_ctrl = ADD; 
            end

            S_TYPE: begin
                mem_write = 1'b1;
                alu_src = 1'b1;
                alu_ctrl = ADD; // Store uses ADD for address calculation
            end

            B_TYPE: begin
                branch = 1'b1;
                case(funct3)
                    3'b000:                     // Branch if equal
                    begin 
                        branch_ctrl = BEQ; 
                        alu_ctrl = SUB; 
                    end
                    3'b001:                     // Branch if not equal
                    begin
                         branch_ctrl = BNE;
                         alu_ctrl = SUB;  
                    end
                    3'b100:                      // Branch if less than
                    begin
                         branch_ctrl = BLT;
                         alu_ctrl = SLT;
                    end 
                    3'b101:                     // Branch if greater than or equal
                    begin
                         branch_ctrl = BGE;
                         alu_ctrl = SLT;
                    end  
                    3'b110:                      // Branch if less than unsigned
                    begin
                         branch_ctrl = BLTU;
                         alu_ctrl = SLTU;
                    end     
                    3'b111:                      // Branch if greater than or equal unsigned
                    begin 
                        branch_ctrl = BGEU;
                        alu_ctrl = SLTU;
                    end 
                    default: branch_ctrl = BEQ; // Default case
                endcase
            end

            J_TYPE: begin
                reg_write = 1'b1;
                jal = 1'b1;
                alu_src = 1'b1;
                wb_sel = 2'b10; // PC + 4 to register
                alu_ctrl = ADD;
            end

            U_TYPE_AUIPC: begin
                reg_write = 1'b1;
                alu_src = 1'b1;
                wb_sel = 2'b00; // ALU result to register
                alu_ctrl = ADD_PC; 
            end

            U_TYPE_LUI: begin
                reg_write = 1'b1;
                alu_src = 1'b1;
                wb_sel = 2'b00; // ALU result to register
                alu_ctrl = PASS;
            end

            default: begin 
            end

        endcase
    end

    
endmodule

//need a signal for IUPAC to use pc 