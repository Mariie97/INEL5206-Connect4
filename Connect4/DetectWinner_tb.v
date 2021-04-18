`timescale 1ns / 1ps


`include "DetectWinner.v"


////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:29:57 04/17/2021
// Design Name:   DetectWinner
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/DetectWinner_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DetectWinner
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DetectWinner_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [15:0] game_board;
	reg [15:0] player_cells;

	// Outputs
	wire [1:0] game_status;

	// Instantiate the Unit Under Test (UUT)
	DetectWinner uut (
		.clk(clk), 
		.reset(reset), 
		.game_board(game_board), 
		.player_cells(player_cells), 
		.game_status(game_status)
	);

	always #10 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		game_board = 0;
		player_cells = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#10 game_board = 16'b0001000100010001;
		player_cells = 16'b00000000000000000;
		#10 player_cells = 16'b0001000100010001;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b00000000000000000;
		#10 player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0100010001000100;
		player_cells = 16'b0100010001000100;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		
		#50 $finish;
        
		// Add stimulus here

	end
      
endmodule

