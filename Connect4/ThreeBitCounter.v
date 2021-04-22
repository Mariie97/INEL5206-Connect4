`timescale 1ns / 1ps

module ThreeBitCounter(
	input clk,
	input reset,
	input [3:0] column,
	input add,
	output reg [11:0] count
    );
	
	reg [2:0]counter_0 ;
	reg [2:0]counter_1 ;
	reg [2:0]counter_2 ;
	reg [2:0]counter_3 ;
	
initial begin
	counter_0 = 0;
	counter_1 = 0;
	counter_2 = 0;
	counter_3 = 0;
end
always @(clk) begin
	count = {counter_3, counter_2, counter_1, counter_0};	
end

//always@(posedge clk or posedge add or posedge reset)
always@(posedge add or posedge reset)
begin
	if(reset==1'b1) begin
		counter_0 <= 0;
		counter_1 <= 0;
		counter_2 <= 0;
		counter_3 <= 0;	
		end
	else begin
		case(column)
		4'b1110: counter_0 <= counter_0 + 3'b001;
		4'b1101: counter_1 <= counter_1 + 3'b001;
		4'b1011: counter_2 <= counter_2 + 3'b001;	
		4'b0111: counter_3 <= counter_3 + 3'b001;		
		endcase
end
end



endmodule