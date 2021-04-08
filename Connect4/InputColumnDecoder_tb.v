`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:10:12 04/07/2021
// Design Name:   InputColumnDecoder
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/InputColumnDecoder_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InputColumnDecoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InputColumnDecoder_tb;

	// Inputs
	reg [6:0] in_column;

	// Outputs
	wire [2:0] column_decode;

	// Instantiate the Unit Under Test (UUT)
	InputColumnDecoder uut (
		.in_column(in_column), 
		.column_decode(column_decode)
	);

	initial begin
		// Initialize Inputs
		in_column = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// Add stimulus here	
		#10 in_column = 7'b0000010;
		#10 in_column = 7'b0000001;
		#10 in_column = 7'b0000100;
		#10 in_column = 7'b0001000;
		#10 in_column = 7'b0010000;
		#10 in_column = 7'b0100000;
		#10 in_column = 7'b1000000;
      #5 $finish;
	end
      
endmodule

