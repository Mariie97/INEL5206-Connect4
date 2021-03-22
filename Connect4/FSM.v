`timescale 1ns / 1ps

module FSM (
     input clk,// clock of the circuit 
     input reset,// reset 
     input invalid_move, //Flag when column is full 
     input [1:0] in_game_status,
	  input player_turn,	  //indicate wich player turn (P1=0 P2=1)
	  input board_full,
     output reg [1:0] out_game_status 
     );

parameter GAME_INIT=2'b00, P1_TURN=2'b01, END_GAME=2'b10, P2_TURN=2'b11; //STATES
parameter NEXT_TURN=2'b00, GAME_OVER=2'b01, TIE_GAME=2'b10; //INPUTS
parameter STILL_PLAYING=2'b00, P1_WINS=2'b01, P2_WINS=2'b10, TIE=2'b11; //outputs

reg[1:0] current_state, next_state;

// current state registers 
always @(posedge clk or posedge reset) 
begin 
 if(reset)
  current_state <= GAME_INIT;
 else 
  current_state <= next_state;
end 	

 // next state 
always @(current_state)
begin
	if(board_full==1'b1) begin
									next_state<=GAME_INIT;
									out_game_status = TIE;
								end
	else begin
		case(current_state)
			GAME_INIT: begin
							next_state <= PI_TURN;
							out_game_status <= STILL_PLAYING;
							end
			P1_TURN: begin
						if(invalid_move==1'b1)
						begin
							next_state <= PI_TURN;
							out_game_status <= STILL_PLAYING;
						end
						else begin							
							case(in_game_status)
							NEXT_TURN: begin
											next_state <= P2_TURN;
											out_game_status <= STILL_PLAYING;
											end
							GAME_OVER: begin
											next_state <= GAME_INIT;
											out_game_status <= 2'bXX;
											end
							TIE_GAME: begin
																					
											
										 end
							default: begin
											next_state <= END_GAME;
											out_game_status <= TIE;		
										end
							endcase
							end
						end
			END_GAME:begin
						end
			
			P2_TURN:begin
						if(invalid_move==1'b1)
						begin
							next_state <= P2_TURN;
							out_game_status <= STILL_PLAYING;
						end
						else begin							
							case(in_game_status)
							NEXT_TURN: begin
											next_state <= P1_TURN;
											out_game_status <= STILL_PLAYING;
											end
							GAME_OVER: begin
											next_state <= GAME_INIT;
											out_game_status <= 2'bXX;
											end
							TIE_GAME: begin
										 end
							default: begin
											next_state <= GAME_INIT;
											out_game_status <= TIE;		
										end
							endcase
							end
						end		
		endcase
	end
 end
endmodule
