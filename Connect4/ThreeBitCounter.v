`timescale 1ns / 1ps

module ThreeBitCounter(
	input clk,
	input reset,
	input [1:0] counter,
	input add,
	output reg [2:0]counter_0,
	output reg [2:0]counter_1,
	output reg [2:0]counter_2,
	output reg [2:0]counter_3
    );
initial begin	
	counter_0 = 0;
	counter_1 = 0;
	counter_2 = 0;
	counter_3 = 0;
end

always@(negedge clk or posedge reset)
begin
	if(reset==1'b1) begin
			counter_0 = 0;
			counter_1 = 0;
			counter_2 = 0;
			counter_3 = 0;	
		end
	else
		if(add==1'b1) begin
		case(counter)
		2'b00: counter_0 = counter_0 + 3'b001;
		2'b01: counter_1 = counter_1 + 3'b001;
		2'b10: counter_2 = counter_2 + 3'b001;	
		2'b11: counter_3 = counter_3 + 3'b001;		
		endcase
	end
end

endmodule
