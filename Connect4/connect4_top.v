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
//	gameboard_out,
//	led_1,
//	led_2,
//	led_3,
//	led_4,
//	led_5,
//	led_6,
//	led_7,
//	led_8,
	
	
	);
	
	 wire[15:0] gameboard_out;
	
	input Switch_0;
	input Switch_1;
	input Switch_2;
	input Switch_3;
	input BTN_EAST;
	
	input clk;
	input reset;
	//input [2:0] selected_column;
	
	//FPGA LEDS
	output [6:0] leds;
	output reg clock_pos;
	
	
//	output reg led_1;
//	output reg led_2;
//	output reg led_3;
//	output reg led_4;
//	output reg led_5;
//	output reg led_6;
//	output reg led_7;
//	output reg led_8;
	
	
//	output pin_0;
//	output pin_1;
//	output pin_2;
//	output pin_3;
//	output pin_4;
//	output pin_5;
//	output pin_6;
//	output pin_7;
//	
//	reg pin_0 = 0;
//	reg pin_1 = 0;
//	reg pin_2 = 0;
//	reg pin_3 = 0;
//	reg pin_4 = 0;
//	reg pin_5 = 0;
//	reg pin_6 = 0;
//	reg pin_7 = 0;

	//wire pin_0;
//	wire pin_1;
//	wire pin_2;
//	wire pin_3;
//	wire pin_4;
//	wire pin_5;
//	wire pin_6;
//	wire pin_7;
	
	
	
	wire [15:0]player_cells;
	wire [4:0] column_position;
//	wire Enable_Button;
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
	
//	wire pin0;
//	wire pin1;
//	wire pin2;
//	wire pin3;
//	wire pin4;
//	wire pin5;
//	wire pin6;
//	wire pin7;
	
	
	parameter column = 3'b001;
	parameter statep = 2'b01;
	
//	ButtonPressDetector BPD(clk, BTN_EAST, Enable_Button);
	
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

	
//	always@(gameboard_out, player_cells) begin
//	
//		//if(BTN_EAST == 1)begin
//			if(gameboard_out[0] == 1)begin
//				led_1 = 1;
//			end else begin
//				led_1= 0;
//			end	
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[1] == 1)begin
//			led_2 = 1;
//		end else begin
//			led_2 = 0;
//		end
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[2] == 1)begin
//			led_3= 1;
//		end else begin
//			led_3 = 0;
//		end
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[3] == 1)begin
//			led_4 = 1;
//		end else begin
//			led_4 = 0;
//		end
//	//	end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[4] == 1)begin
//			led_5 = 1;
//		end else begin
//			led_5 = 0;
//		end
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[5] == 1)begin
//			led_6 = 1;
//		end else begin
//			led_6 = 0;
//		end
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[6] == 1)begin
//			led_7 = 1;
//		end else begin
//			led_7 = 0;
//		end
//		//end
//		
//		//if(BTN_EAST == 1)begin
//		if(gameboard_out[7] == 1)begin
//			led_8 = 1;
//		end else begin
//			led_8 = 0;
//		end
		//end
//		pin_0 = gameboard_out[0];
//		pin_1 = gameboard_out[1];
//		pin_2 = gameboard_out[2];
//		pin_3 = gameboard_out[3];
//		pin_4 = gameboard_out[4];
//		pin_5 = gameboard_out[5];
//		pin_6 = gameboard_out[6];
//		pin_7 = gameboard_out[7];
//	end
	

	
	
endmodule

