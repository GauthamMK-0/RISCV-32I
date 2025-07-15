    module instr_decoder (
        input wire [31:0] instr,
        output reg [6:0] opcode,
        output reg [4:0] rd,
        output reg [4:0] rs1,
        output reg [4:0] rs2,
        output reg [2:0] funct3,
        output reg [6:0] funct7,
        output reg [31:0] imm
    );

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
        opcode = instr[6:0];
        rd = instr[11:7];
        funct3 = instr[14:12];
        rs1 = instr[19:15];
        rs2 = instr[24:20];
        funct7 = instr[31:25];

        // immediate value extraction based on opcode
        case (opcode)
            R_TYPE: imm = 32'b0; 
            I_TYPE_LOAD: imm = {{20{instr[31]}}, instr[31:20]};
            I_TYPE_ALU: imm = {{20{instr[31]}}, instr[31:20]}; 
            I_TYPE_JALR: imm = {{20{instr[31]}}, instr[31:20]}; 
            S_TYPE: imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            B_TYPE: imm = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0}; 
            J_TYPE: imm = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0}; 
            U_TYPE_LUI: imm = {instr[31:12], 12'b0}; 
            U_TYPE_AUIPC: imm = {instr[31:12], 12'b0};
            default: imm = 32'b0;
        endcase
    end

    endmodule