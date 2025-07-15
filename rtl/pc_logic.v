module pc_logic (
    input wire [31:0] current_pc,
    input wire [31:0] branch_target,
    input wire [31:0] jump_target,
    input wire jump,
    input wire branch_taken,
    output reg [31:0] next_pc

);

// increment the current PC by 4
wire [31:0] pc_4;
assign pc_4 = current_pc + 32'd4;

always @(*) begin
    if (jump) begin
        next_pc = jump_target;
    end else if (branch_taken) begin
        next_pc = branch_target; 
    end else begin
        next_pc = pc_4; 
    end
end

endmodule