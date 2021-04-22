`timescale 1ns / 1ps
`include "ColumnSelector.v"
`include "ColumnCalculator.v"
`include "ButtonPressDetector.v"
`include "DetectWinner.v"
`include "ThreeBitCounter.v"



module connect4_top(
//	input clk,
//   output wire pin_0,
//	output wire pin_1,
//	output wire pin_2,
//	output wire pin_3,
//	output wire pin_4,
//	output wire pin_5,
//	output wire pin_6,
//	output wire pin_7,
//	input [1:0] state,
//	output wire [41:0] gameboard_out

	clk,
	reset, 
//	pin_0,
//	pin_1,
//	pin_2,
//	pin_3,
//	pin_4,
//	pin_5,
//	pin_6,
//	pin_7,
	//state,
	Switch_0,
	Switch_1,
	Switch_2,
	Switch_3,
	BTN_EAST,
	leds
	);
	
	wire[15:0] gameboard_out;
	
	input Switch_0;
	input Switch_1;
	input Switch_2;
	input Switch_3;
	input BTN_EAST;

	input clk;
	input reset;

	
	//FPGA LEDS
	output [7:0] leds;

	
	
	
	wire [15:0]player_cells;
	wire [4:0] selected_column;
	wire Enable_Button;
	wire next_player;
	wire add;
	wire clk_delay;
	wire [1:0] state;
	wire [1:0] game_status;
	wire [1:0] out_game_status;
	wire [11:0] counters;

	
	ButtonPressDetector BPD(clk_delay, BTN_EAST, Enable_Button);
	
	CLockDelay CD(
    .clk_in(clk),
    .clk_out(clk_delay)
    );
	
	ColumnCalculator columnCounter(
		.enable(BTN_EAST),
		.counters(counters),		
		.selected_column({Switch_3, Switch_2, Switch_1, Switch_0}), 
		.column_position(selected_column),
		.add(add)
		);
		
		
	ThreeBitCounter tbc (
		.clk(clk_delay),
		.reset(reset), 
		.column({Switch_3, Switch_2, Switch_1, Switch_0}), 
		.add(add), 
		.count(counters)
	);
		
		
	ColumnSelector columnSelector(
		.column_position(selected_column),
		.state(state), 
		.out_gameboard(gameboard_out),
		.out_players_cells(player_cells),
		.next_player(next_player)
		);
	
	
	FSM fsm (
		.clk(clk_delay), 
		.reset(reset), 
		.in_game_status(game_status), 
		.player_turn(next_player), 
		.out_game_status(out_game_status),
		.current_state(state)
	);
	
	DetectWinner WD(
		 .clk(clk_delay), 
		 .reset(reset),
		 .game_board(gameboard_out),
		 .player_cells(player_cells),
		 .game_status(game_status)   
    );
	 
	DisplayGameStatus DGS (
		.state(state),
		.game_status(out_game_status),
		.LEDs(leds)
	);
	 	
	
endmodule