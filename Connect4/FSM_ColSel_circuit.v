`timescale 1ns / 1ps

`include "ColumnSelector.v"
`include "ColumnCalculator.v"
`include "DetectWinner.v"
`include "ThreeBitCounter.v"

 
module FSM_ColSel_circuit(
	  input clk,// clock of the circuit 
     input reset,// reset 
     input enable,
	  input [3:0] in_column, // selected column (0-6)
//	  input [1:0] in_game_status,
	  output [15:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
	  output [15:0] out_players_cells, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] out_game_status, // keep track of player cells. 0-Player1, 1-Player2 
	  output [1:0] current_state, // keep track of player cells. 0-Player1, 1-Player2 
	  output playerTurn,
	  output [4:0] column_calc,
	  output [6:0] LEDs,
	  output  [2:0]counter_0,
	  output  [2:0]counter_1,
	  output  [2:0]counter_2,
	  output  [2:0]counter_3
    );
 
 
 wire [1:0] state;
 wire [1:0] c_register;
 wire [1:0] in_game_status;
 wire pturn;
 wire add;
 wire oset_invalid_column;
 wire [4:0] column_position;
 wire [2:0] wcounter_0;
 wire [2:0] wcounter_1;
 wire [2:0] wcounter_2;
 wire [2:0] wcounter_3;


	FSM fsm (
		.clk(clk), 
		.reset(reset), 
		.in_game_status(in_game_status), 
		.player_turn(pturn), 
		.out_game_status(out_game_status),
		.current_state(state)
	);
	
	ThreeBitCounter tbc (
		.clk(clk),
		.reset(reset), 
		.counter(c_register), 
		.add(add), 
		.counter_0(wcounter_0),		
		.counter_1(wcounter_1),		
		.counter_2(wcounter_2),		
		.counter_3(wcounter_3)	
	);
	
	ColumnCalculator CC(
		.clk(clk),	
		.enable(enable),
		.counter_0(wcounter_0),		
		.counter_1(wcounter_1),		
		.counter_2(wcounter_2),		
		.counter_3(wcounter_3),		
		.selected_column(in_column),
		.column_position(column_position),
		.add(add),
		.c_register(c_register)
    );
		
	ColumnSelector CS (
		.clk(clk),	
		.column_position(column_position), 
		.state(state), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells),
		.next_player(pturn)
	);
	
	DetectWinner DW (
		.clk(clk), 
		.reset(reset),
	   .game_board(out_gameboard),
	   .player_cells(out_players_cells),
	   .game_status(in_game_status)   
	);
	
	DisplayGameStatus DGS (
		.clk(clk),	
		.state(state),
		.game_status(out_game_status),
		.LEDs(LEDs)
	);
	
	assign current_state = state;
	assign playerTurn = pturn;
	assign column_calc = column_position;	
	assign counter_0 = wcounter_0;
	assign counter_1 = wcounter_1;
	assign counter_2 = wcounter_2;
	assign counter_3 = wcounter_3;

endmodule
