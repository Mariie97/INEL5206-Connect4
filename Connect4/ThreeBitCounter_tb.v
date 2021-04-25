`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:38:44 04/19/2021
// Design Name:   ThreeBitCounter
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ThreeBitCounter_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ThreeBitCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ThreeBitCounter_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] column;
	reg add;

	// Outputs
	wire [11:0] count;

	// Instantiate the Unit Under Test (UUT)
	ThreeBitCounter uut (
		.clk(clk),
		.reset(reset), 
		.column(column), 
		.add(add), 
		.count(count)
	);
	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		column = 0;
		add = 0;

		// Wait 100 ns for global reset to finish
		#100;
		column = 4'b1110;
		add = 1;
		#1 add = 0;
		
		#4
		
		column = 4'b1110;
		add = 1;
		#1 add = 0;

		#4
		
		column = 4'b1101;
		add = 1;
		#1 add = 0;
		
		#4
		
		column = 4'b0111;
		add = 1;
		#1 add = 0;
		
		#4
		
		column = 4'b1011;
		add = 1;
		#1 add = 0;
		
        
		// Add stimulus here

	end
      
endmodule

