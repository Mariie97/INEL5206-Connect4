`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:47:56 03/22/2021
// Design Name:   ColumnSelector
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ColumnSelector_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ColumnSelector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ColumnSelector_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [2:0] in_column;
	reg [1:0] state;

	// Outputs
	wire [41:0] out_gameboard;
	wire [41:0] out_players_cells;

	// Instantiate the Unit Under Test (UUT)
	ColumnSelector uut (
		.clk(clk), 
		.reset(reset), 
		.in_column(in_column), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells)
	);

	always #10 clk=~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		in_column = 0;
		state = 0;
		reset=0;
		
		// Wait 100 ns for global reset to finish
		#100;
		
		#10 state = 2'b01; //P1		
		 in_column=3'b000;
		
		#25 state = 2'b10; //P2
		in_column=3'b010;
		
		#25 state = 2'b01; //P1
		in_column=3'b000;

		#25 state = 2'b10; //P2
		in_column=3'b010;
		
		#25 state = 2'b01; //P1
		in_column=3'b110;
		
		#25 state = 2'b10; //P2
		in_column=3'b000;
	
		#25 state = 2'b01; //P1
		in_column=3'b000;

end
initial $monitor("column=%d", in_column);      
endmodule

