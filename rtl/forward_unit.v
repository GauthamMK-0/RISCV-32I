// Description: Forwarding unit 
// forwards data form later stages to previous stages

module forward_unit (
    input wire [4:0] ex_rs1,
    input wire [4:0] ex_rs2,
    input wire [4:0] id_rs1,
    input wire [4:0] id_rs2,
    input wire [4:0] ex_rd,
    input wire [4:0] mem_rd,
    input wire [4:0] wb_rd,
    input wire ex_reg_write,
    input wire mem_reg_write,
    input wire wb_reg_write,
    output reg [1:0] forward_rs1_ex,
    output reg [1:0] forward_rs2_ex,
    output reg [1:0] forward_rs1_id,
    output reg [1:0] forward_rs2_id
);

always @(*) begin 
    // Default: no forwardin
    forward_rs1_ex = 2'b00;
    forward_rs2_ex = 2'b00;
    forward_rs1_id = 2'b00;
    forward_rs2_id = 2'b00;

    // Forwarding for rs1
    if (mem_reg_write && (mem_rd != 5'b0) && (mem_rd == ex_rs1)) begin
        forward_rs1_ex = 2'b10;  // Forward from MEM
    end else if (wb_reg_write && (wb_rd != 5'b0) && (wb_rd == ex_rs1)) begin
        forward_rs1_ex = 2'b01;  // Forward from WB
    end

    // Forwarding for rs2
    if (mem_reg_write && (mem_rd != 5'b0) && (mem_rd == ex_rs2)) begin
        forward_rs2_ex = 2'b10;  // Forward from MEM
    end else if (wb_reg_write && (wb_rd != 5'b0) && (wb_rd == ex_rs2)) begin
        forward_rs2_ex = 2'b01;  // Forward from WB
    end

    // Forwarding for ID stage  
    forward_rs1_id = 2'b00;
    if (ex_reg_write && (ex_rd != 0) && (ex_rd == id_rs1)) begin
        forward_rs1_id = 2'b11;  // Forward from EX (highest priority)
    end else if (mem_reg_write && (mem_rd != 0) && (mem_rd == id_rs1)) begin
        forward_rs1_id = 2'b10;  // Forward from MEM
    end else if (wb_reg_write && (wb_rd != 0) && (wb_rd == id_rs1)) begin
        forward_rs1_id = 2'b01;  // Forward from WB
    end

     if (ex_reg_write && (ex_rd != 0) && (ex_rd == id_rs2)) begin
        forward_rs2_id = 2'b11;  // Forward from EX
    end else if (mem_reg_write && (mem_rd != 0) && (mem_rd == id_rs2)) begin
        forward_rs2_id = 2'b10;  // Forward from MEM
    end else if (wb_reg_write && (wb_rd != 0) && (wb_rd == id_rs2)) begin
        forward_rs2_id = 2'b01;  // Forward from WB
    end
end

endmodule
