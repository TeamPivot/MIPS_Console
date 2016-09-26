`timescale 1ns / 1ps

module VideoMemory(
	input clk,
	input we,
	input [7:0] row,
	input [7:0] column,
	input [2:0] din,
	output reg [2:0] pixel
    );

	reg [2:0] M[0:23039];
	wire [14:0] addr;
	
	assign addr = row*160 + column;
	
	always @ (posedge clk)
	begin
		if(we)
			M[addr] <= din;
		pixel <= M[addr];
	end
	
endmodule
