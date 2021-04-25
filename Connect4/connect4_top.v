`timescale 1ns / 1ps
`include "ColumnSelector.v"
`include "ColumnCalculator.v"
`include "ButtonPressDetector.v"
`include "DetectWinner.v"
`include "ThreeBitCounter.v"


//////////////////////////////////////////////////////////////////////////////////
module connect4_top(

	clk,
	reset,
	clock_pos,
	P9_leds,
	P8_leds,
	P7_leds,
	P6_leds,
	Switch_0,
	Switch_1,
	Switch_2,
	Switch_3,
	BTN_EAST,
	leds,
	gameboard,
	player_moves
	
	);
	
	output [15:0]gameboard;
	output [15:0]player_moves;
	
	wire[15:0] gameboard_out;
	
	input Switch_0;
	input Switch_1;
	input Switch_2;
	input Switch_3;
	input BTN_EAST;
	
	input clk;
	input reset;
	
	
	//FPGA LEDS
	output [6:0] leds;
	output reg clock_pos;
	
	//Output LEDS
	output P9_leds;
	output P8_leds;
	output P7_leds;
	output P6_leds;
	reg [7:0] P9_leds = 0;
	reg [7:0] P8_leds = 0;
	reg [7:0] P7_leds = 0;
	reg [7:0] P6_leds = 0;
	
	wire [15:0]player_cells;
	wire [4:0] column_position;
	wire next_player;
	wire add;
	wire [1:0] state;
	wire [1:0] game_status;
	wire [1:0] out_game_status;	
   wire [2:0] counter_0;
   wire [2:0] counter_1;
   wire [2:0] counter_2;
   wire [2:0] counter_3;
   wire [1:0] c_register;
	
	
	ClockDelay CD(
		.clk_in(clk),
		.clk_out(clk_delay)
    );
	 
	ColumnCalculator columnCounter(
		.clk(clk_delay),
		.enable(BTN_EAST),
		.counter_0(counter_0),		
		.counter_1(counter_1),		
		.counter_2(counter_2),		
		.counter_3(counter_3),		
		.selected_column({Switch_3, Switch_2, Switch_1, Switch_0}), 
		.column_position(column_position),
		.add(add),
		.c_register(c_register)
		);
		
		
	ThreeBitCounter tbc (
		.clk(clk_delay),
		.reset(reset), 
		.counter(c_register), 
		.add(add), 
		.counter_0(counter_0),		
		.counter_1(counter_1),		
		.counter_2(counter_2),		
		.counter_3(counter_3)
	);
		
		
	ColumnSelector columnSelector(
		.clk(clk_delay),	
		.column_position(column_position),
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
		.clk(clk_delay),	
		.state(state),
		.game_status(out_game_status),
		.LEDs(leds)
	);
	 
	always@(clk_delay) begin
		clock_pos = clk_delay;
	end

	
	assign gameboard = gameboard_out;
	assign player_moves = player_cells;
	
	always@(gameboard or player_moves) begin
	
		//----First column----
		if(gameboard[0] == 1)begin
			if(player_moves[0] == 0)begin
				P9_leds[0] = 1;
				P9_leds[1] = 0;
			end else begin
				P9_leds[0] = 0;
				P9_leds[1] = 1;
			end
		end else begin
			P9_leds[0] = 0;
			P9_leds[1] = 0;
		end	
		
		
		
		if(gameboard[1] == 1)begin
			if(player_moves[1] == 0)begin
				P9_leds[2] = 1;
				P9_leds[3] = 0;
			end else begin
				P9_leds[2] = 0;
				P9_leds[3] = 1;
			end
		end else begin
			P9_leds[2] = 0;
			P9_leds[3] = 0;
		end	
		
		
		
		if(gameboard[2] == 1)begin
			if(player_moves[2] == 0)begin
				P9_leds[4] = 1;
				P9_leds[5] = 0;
			end else begin
				P9_leds[4] = 0;
				P9_leds[5] = 1;
			end
		end else begin
			P9_leds[4] = 0;
			P9_leds[5] = 0;
		end
		
		
		
		if(gameboard[3] == 1)begin
			if(player_moves[3] == 0)begin
				P9_leds[6] = 1;
				P9_leds[7] = 0;
			end else begin
				P9_leds[6] = 0;
				P9_leds[7] = 1;
			end
		end else begin
			P9_leds[6] = 0;
			P9_leds[7] = 0;
		end
	
		//----Second Column---- 
		if(gameboard[4] == 1)begin
			if(player_moves[4] == 0)begin
				P8_leds[0] = 1;
				P8_leds[1] = 0;
			end else begin
				P8_leds[0] = 0;
				P8_leds[1] = 1;
			end
		end else begin
			P8_leds[0] = 0;
			P8_leds[1] = 0;
		end
		
		
		if(gameboard[5] == 1)begin
			if(player_moves[5] == 0)begin
				P8_leds[2] = 1;
				P8_leds[3] = 0;
			end else begin
				P8_leds[2] = 0;
				P8_leds[3] = 1;
			end
		end else begin
			P8_leds[2] = 0;
			P8_leds[3] = 0;
		end
		
		
		if(gameboard[6] == 1)begin
			if(player_moves[6] == 0)begin
				P8_leds[4] = 1;
				P8_leds[5] = 0;
			end else begin
				P8_leds[4] = 0;
				P8_leds[5] = 1;
			end
		end else begin
			P8_leds[4] = 0;
			P8_leds[5] = 0;
		end
		
		
		if(gameboard[7] == 1)begin
			if(player_moves[7] == 0)begin
				P8_leds[6] = 1;
				P8_leds[7] = 0;
			end else begin
				P8_leds[6] = 0;
				P8_leds[7] = 1;
			end
		end else begin
			P8_leds[6] = 0;
			P8_leds[7] = 0;
		end
		
		//----Third Column----
		if(gameboard[8] == 1)begin
			if(player_moves[8] == 0)begin
				P7_leds[0] = 1;
				P7_leds[1] = 0;
			end else begin
				P7_leds[0] = 0;
				P7_leds[1] = 1;
			end
		end else begin
			P7_leds[0] = 0;
			P7_leds[1] = 0;
		end
		
		
		if(gameboard[9] == 1)begin
			if(player_moves[9] == 0)begin
				P7_leds[2] = 1;
				P7_leds[3] = 0;
			end else begin
				P7_leds[2] = 0;
				P7_leds[3] = 1;
			end
		end else begin
			P7_leds[2] = 0;
			P7_leds[3] = 0;
		end
		
		
		if(gameboard[10] == 1)begin
			if(player_moves[10] == 0)begin
				P7_leds[4] = 1;
				P7_leds[5] = 0;
			end else begin
				P7_leds[4] = 0;
				P7_leds[5] = 1;
			end
		end else begin
			P7_leds[4] = 0;
			P7_leds[5] = 0;
		end
		
		if(gameboard[11] == 1)begin
			if(player_moves[11] == 0)begin
				P7_leds[6] = 1;
				P7_leds[7] = 0;
			end else begin
				P7_leds[6] = 0;
				P7_leds[7] = 1;
			end
		end else begin
			P7_leds[6] = 0;
			P7_leds[7] = 0;
		end
		
		//----Fouth Column----
		if(gameboard[12] == 1)begin
			if(player_moves[12] == 0)begin
				P6_leds[0] = 1;
				P6_leds[1] = 0;
			end else begin
				P6_leds[0] = 0;
				P6_leds[1] = 1;
			end
		end else begin
			P6_leds[0] = 0;
			P6_leds[1] = 0;
		end
		
		
		if(gameboard[13] == 1)begin
			if(player_moves[13] == 0)begin
				P6_leds[2] = 1;
				P6_leds[3] = 0;
			end else begin
				P6_leds[2] = 0;
				P6_leds[3] = 1;
			end
		end else begin
			P6_leds[2] = 0;
			P6_leds[3] = 0;
		end
		
		
		if(gameboard[14] == 1)begin
			if(player_moves[14] == 0)begin
				P6_leds[4] = 1;
				P6_leds[5] = 0;
			end else begin
				P6_leds[4] = 0;
				P6_leds[5] = 1;
			end
		end else begin
			P6_leds[4] = 0;
			P6_leds[5] = 0;
		end
		
		
		if(gameboard[15] == 1)begin
			if(player_moves[15] == 0)begin
				P6_leds[6] = 1;
				P6_leds[7] = 0;
			end else begin
				P6_leds[6] = 0;
				P6_leds[7] = 1;
			end
		end else begin
			P6_leds[6] = 0;
			P6_leds[7] = 0;
		end
	end
endmodule

