    module hazard_unit (
        input wire [4:0] id_rs1,
        input wire [4:0] id_rs2,
        input wire [4:0] ex_rd,
        input wire ex_mem_read,
        input wire branch_taken,
        input wire jump,
        output wire pc_write,
        output wire if_id_write,
        output wire id_ex_write,
        output wire if_id_flush,
        output wire id_ex_flush
        
    );

    wire load_hazard;
    assign load_hazard = ex_mem_read && (id_rs1 == ex_rd || id_rs2 == ex_rd) && ex_rd != 5'b0;
    assign pc_write = !load_hazard;
    assign if_id_write = !load_hazard;
    assign id_ex_write = !load_hazard;
    assign if_id_flush = branch_taken || jump;
    assign id_ex_flush = branch_taken || jump;

    
    endmodule