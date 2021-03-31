`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:33:33 03/29/2021
// Design Name:   FSM
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/FSM_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg invalid_move;
	reg [1:0] in_game_status;
	reg player_turn;
	reg board_full;

	// Outputs
	wire [1:0] out_game_status;
	wire [1:0] current_state;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.invalid_move(invalid_move), 
		.in_game_status(in_game_status), 
		.player_turn(player_turn), 
		.board_full(board_full), 
		.out_game_status(out_game_status),
		.current_state(current_state)
	);

	always #10 clk = ~clk;
	initial #500 $finish; 
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		invalid_move = 0;
		in_game_status = 0;
		player_turn = 0;
		board_full = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		player_turn = 1;
		#20 player_turn = 0;
		#20 player_turn = 1;
		#20 player_turn = 0;
		#20 board_full = 1;
		
//		#205 
//		reset = 1;
//		player_turn = 0;
//		board_full = 0;
		

		

	end
      
endmodule

