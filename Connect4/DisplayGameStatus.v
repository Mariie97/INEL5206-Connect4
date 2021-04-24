`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:00:47 04/21/2021 
// Design Name: 
// Module Name:    DisplayGameStatus 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DisplayGameStatus(
	input clk,
	input [1:0] state,
	input [1:0] game_status,
	output reg[6:0] LEDs
    );

parameter STILL_PLAYING=2'b00, P1_WINS=2'b01, P2_WINS=2'b10, TIE=2'b11; //GAME_STATUS
parameter GAME_INIT=2'b00, P1_TURN=2'b01, P2_TURN=2'b10, END_GAME=2'b11; //STATES
	 
initial begin
	LEDs = 7'b0000000;
end	 
always @ (posedge clk)
begin
	case(state)
	GAME_INIT: LEDs = 7'b0000000;
	P1_TURN: LEDs = 7'b0001000; 
	P2_TURN: LEDs = 7'b0010000; 
	END_GAME: begin 
					if(game_status==P1_WINS) LEDs = 7'b0000001;
					else begin
							if(game_status==P2_WINS) LEDs = 7'b1000000;
							else LEDs = 7'b1111111;
							end
				 end
	endcase
end
endmodule
