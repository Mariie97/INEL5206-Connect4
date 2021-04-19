`timescale 1ns / 1ps

module FSM (
     input clk,// clock of the circuit 
     input reset,// reset 
     input [1:0] in_game_status,
	  input player_turn,
     output reg [1:0] out_game_status, current_state
     );

parameter GAME_INIT=2'b00, P1_TURN=2'b01, P2_TURN=2'b10, END_GAME=2'b11; //STATES
parameter NEXT_TURN=2'b00, P1_WIN=2'b01, P2_WIN=2'b10, TIE_GAME=2'b11; //INPUTS - (TIE GAME will be the same as board_full)
parameter STILL_PLAYING=2'b00, P1_WINS=2'b01, P2_WINS=2'b10, TIE=2'b11; //outputs


reg[1:0] next_state = GAME_INIT;


// current state registers 
always @(posedge clk, posedge reset) 
begin 
 if(reset==1'b1) current_state <= GAME_INIT;
 else current_state <= next_state;
end 	


 // next state 
always @(current_state, in_game_status, player_turn)
//always @(posedge clk)
begin
	if(in_game_status == TIE_GAME) 
	begin
		next_state <= END_GAME;
		out_game_status <= TIE;
	end
	else begin
		case(current_state)
			GAME_INIT: begin
							next_state <= P1_TURN;
							out_game_status <= STILL_PLAYING;
							end
			P1_TURN: begin
						case(in_game_status)
							NEXT_TURN: if(player_turn==1'b1) begin
											next_state <= P2_TURN;
											out_game_status <= STILL_PLAYING;
											end
											else begin
												next_state <= P1_TURN;
												out_game_status <= STILL_PLAYING;
												end
							P1_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P1_WINS;
											end
							P2_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P2_WINS;
											end
							TIE_GAME: begin
											next_state <= END_GAME;
											out_game_status <= TIE;
										 end
							endcase
						end
						
			END_GAME: next_state <= END_GAME;
			
			P2_TURN:begin
							case(in_game_status)
							NEXT_TURN: if(player_turn==1'b0) begin
											next_state <= P1_TURN;
											out_game_status <= STILL_PLAYING;
											end
											else begin
												next_state <= P2_TURN;
												out_game_status <= STILL_PLAYING;
												end
							P1_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P1_WINS;
											end
							P2_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P2_WINS;
											end
							TIE_GAME: begin
											next_state <= END_GAME;
											out_game_status <= TIE;
										 end
							default: begin
											next_state <= END_GAME;
											out_game_status <= TIE;		
										end
							endcase
						end		
		endcase
	end
 end
endmodule