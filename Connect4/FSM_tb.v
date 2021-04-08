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
	reg invalid_column;
	reg [1:0] in_game_status;
	reg player_turn;

	// Outputs
	wire [1:0] out_game_status;
	wire [1:0] current_state;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.invalid_column(invalid_column), 
		.in_game_status(in_game_status), 
		.player_turn(player_turn), 
		.out_game_status(out_game_status),
		.current_state(current_state)
	);

	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		invalid_column = 0;
		in_game_status = 0;
		player_turn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		#20 player_turn = 1; //P2 Turn
		#20 player_turn = 0; //P1 Turn
		#20 player_turn = 1; // P2 Turn
		#20 player_turn = 0; // P1 Turn
		#20 invalid_column = 1; // Column is full, player 1 should keep playing
		#20 invalid_column = 0; 
		#20 in_game_status = 2'b10; // Tie Game, Board is full
		
		#20 reset=1;
		in_game_status = 2'b00;		
		player_turn = 0;
		#20 reset=0;
		
		#20 player_turn = 1; //P2 Turn
				#20 invalid_column = 1; // Column is full, player 1 should keep playing
		#20 invalid_column = 0; 
		#20 player_turn = 0; //P1 Turn
		#20 in_game_status = 2'b01; //P1 Wins
		
		#20 reset=1;
		in_game_status = 2'b00;		
		player_turn = 0;
		#20 reset=0;
				
		#20 player_turn = 1; // P2 Turn
		#20 in_game_status = 2'b01; // P2 wins
		#50 $finish;
	end
      
endmodule

