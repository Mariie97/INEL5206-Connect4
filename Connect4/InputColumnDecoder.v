`timescale 1ns / 1ps

module InputColumnDecoder(
	input reset_column,
	input [3:0] in_column,
	output reg [2:0] column_decode
    );
	 
always @ (in_column)
case(in_column)
	4'b0001: column_decode <= 2'b000;
	4'b0010: column_decode <= 2'b001;
	4'b0100: column_decode <= 2'b010;
	4'b1000: column_decode <= 2'b011;
	default: column_decode <= 2'b111;
endcase

always @ (reset_column)
	column_decode = 3'b111;
endmodule

