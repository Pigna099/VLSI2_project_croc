// This is a user-defined module for a Multiply-Accumulate (MAC).
// It takes two operands for multiplication and an accumulator, and outputs the result of the MAC operation

module cve2_mac (
    input  cve2_pkg::alu_op_e       alu_operator_i,
    input  logic [31:0]             op_a_i,   // Multiplicand
    input  logic [31:0]             op_b_i,   // Multiplier
    input  logic [31:0]             acc_i,    // Accumulator
    output logic [31:0]             result_o  // Result: (op_a_i * op_b_i) + acc_i
);

    always_comb begin
        if (alu_operator_i == cve2_pkg::ALU_MAC)
            result_o = (op_a_i * op_b_i) + acc_i;
        else
            result_o = 32'b0;
    end
    
endmodule