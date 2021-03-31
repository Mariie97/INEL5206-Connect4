`timescale 1ns / 1ps

module FSM (
     input clk,// clock of the circuit 
     input reset,// reset 
     input invalid_move, //Flag when column is full 
     input [1:0] in_game_status,
	  input player_turn,	  //indicate wich player turn (P1=0 P2=1) para asegurarnos que el jugador realizo la jugada
	  input board_full,
     output reg [1:0] out_game_status, current_state
     );

parameter GAME_INIT=2'b00, P1_TURN=2'b01, END_GAME=2'b10, P2_TURN=2'b11; //STATES
parameter NEXT_TURN=2'b00, PLAYER_WIN=2'b01, TIE_GAME=2'b10; //INPUTS
parameter STILL_PLAYING=2'b00, P1_WINS=2'b01, P2_WINS=2'b10, TIE=2'b11; //outputs

reg[1:0] next_state=GAME_INIT;

// current state registers 
always @(posedge clk or posedge reset) 
begin 
 if(reset==1'b1) current_state <= GAME_INIT;
 else current_state <= next_state;
end 	

 // next state 
always @(current_state, player_turn, board_full)
begin
	if(board_full==1'b1) begin
									next_state <= END_GAME;
									out_game_status = TIE;
								end
	else begin
		case(current_state)
			GAME_INIT: begin
							next_state <= P1_TURN;
							out_game_status <= STILL_PLAYING;
							end
			P1_TURN: begin
						if(invalid_move==1'b1 || player_turn == 1'b0) //flag que indica que la columna o si a�n el jugador 1 no ha tirado
						begin
							next_state <= P1_TURN;
							out_game_status <= STILL_PLAYING;
						end
						else begin							
							case(in_game_status)
							NEXT_TURN: begin
											next_state <= P2_TURN;
											out_game_status <= STILL_PLAYING;
											end
							PLAYER_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P1_WINS;
											end
							TIE_GAME: begin
											next_state <= END_GAME;
											out_game_status <= TIE;
										 end
//							default: begin //Not sure if this will be the correct behavior
//											next_state <= END_GAME;
//											out_game_status <= TIE;		
//										end
							endcase
							end
						end
						
			END_GAME: next_state <= END_GAME;
			
			P2_TURN:begin
						if(invalid_move==1'b1 || player_turn == 1'b1) //verifica que la columna esta llena o si a�n el jugador 2 no ha tirado
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
							PLAYER_WIN: begin
											next_state <= END_GAME;
											out_game_status <= P2_WINS;
											end
							TIE_GAME: begin
											next_state <= END_GAME;
											out_game_status <= TIE;
										 end
//							default: begin
//											next_state <= GAME_INIT;
//											out_game_status <= TIE;		
//										end
							endcase
							end
						end		
		endcase
	end
 end
endmodule
