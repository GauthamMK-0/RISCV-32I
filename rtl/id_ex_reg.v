// Description: ID/EX pipeline register

module id_ex_reg (
    input wire clk,
    input wire rst,
    input wire id_ex_write,
    input wire id_ex_flush,
    input wire [31:0] pc_in,
    input wire [31:0] rs1_data_in,
    input wire [31:0] rs2_data_in,
    input wire [31:0] imm_in,
    input wire [2:0] funct3_in,
    input wire [4:0] rs1_in,
    input wire [4:0] rs2_in,
    input wire [4:0] rd_in,
    input wire [3:0] alu_ctrl_in,
    input wire [2:0] branch_ctrl_in,
    input wire [1:0] wb_sel_in, 
    input wire reg_write_in,
    input wire mem_read_in,
    input wire mem_write_in,
    input wire mem_to_reg_in,
    input wire alu_src_in,
    input wire branch_in,
    input wire jal_in,
    input wire jalr_in,

    output reg [31:0] pc_out,
    output reg [31:0] rs1_data_out,
    output reg [31:0] rs2_data_out,
    output reg [31:0] imm_out,
    output reg [2:0] funct3_out,
    output reg [4:0] rs1_out,
    output reg [4:0] rs2_out,
    output reg [4:0] rd_out,
    output reg [3:0] alu_ctrl_out,
    output reg [2:0] branch_ctrl_out,
    output reg [1:0] wb_sel_out,
    output reg reg_write_out,
    output reg mem_read_out,
    output reg mem_write_out,
    output reg mem_to_reg_out,
    output reg alu_src_out,
    output reg branch_out,
    output reg jal_out,
    output reg jalr_out

);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        pc_out <= 32'b0;
        rs1_data_out <= 32'b0;
        rs2_data_out <= 32'b0;
        imm_out <= 32'b0;
        funct3_out <= 3'b0;
        rs1_out <= 5'b0;
        rs2_out <= 5'b0;
        rd_out <= 5'b0;
        alu_ctrl_out <= 4'b0;
        branch_ctrl_out <= 3'b0;
        wb_sel_out <= 2'b0; 
        reg_write_out <= 1'b0;
        mem_read_out <= 1'b0;
        mem_write_out <= 1'b0;
        mem_to_reg_out <= 1'b0;
        alu_src_out <= 1'b0;
        branch_out <= 1'b0;
        jal_out <= 1'b0;
        jalr_out <= 1'b0;

    end else if (id_ex_flush) begin
        pc_out <= 32'b0;
        rs1_data_out <= 32'b0;
        rs2_data_out <= 32'b0;
        imm_out <= 32'b0;
        funct3_out <= 3'b0;
        rs1_out <= 5'b0;
        rs2_out <= 5'b0;
        rd_out <= 5'b0;
        alu_ctrl_out <= 4'b0;
        branch_ctrl_out <= 3'b0;
        wb_sel_out <= 2'b0;
        reg_write_out <= 1'b0;
        mem_read_out <= 1'b0;
        mem_write_out <= 1'b0;
        mem_to_reg_out <= 1'b0;
        alu_src_out <= 1'b0;
        branch_out <= 1'b0;
        jal_out <= 1'b0;
        jalr_out <= 1'b0; 

    end else if (id_ex_write) begin
        pc_out <= pc_in;
        rs1_data_out <= rs1_data_in; 
        rs2_data_out <= rs2_data_in; 
        imm_out <= imm_in; 
        funct3_out <= funct3_in;
        rs1_out <= rs1_in; 
        rs2_out <= rs2_in; 
        rd_out <= rd_in; 
        alu_ctrl_out <= alu_ctrl_in; 
        branch_ctrl_out <= branch_ctrl_in; 
        wb_sel_out <= wb_sel_in;
        reg_write_out <= reg_write_in; 
        mem_read_out <= mem_read_in; 
        mem_write_out <= mem_write_in; 
        mem_to_reg_out <= mem_to_reg_in; 
        alu_src_out <= alu_src_in; 
        branch_out <= branch_in;
        jal_out <= jal_in;
        jalr_out <= jalr_in;
    end
end

endmodule
