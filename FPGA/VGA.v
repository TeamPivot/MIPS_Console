`timescale 1ns / 1ps

`define SCREEN_WIDTH 640
`define SCREEN_HEIGHT 480

`define FRAME_X 240
`define FRAME_Y 168
`define FRAME_WIDTH 160
`define FRAME_HEIGHT 144

`define BLACK 3'b000
`define BLUE 3'b001
`define GREEN 3'b010
`define CYAN 3'b011
`define RED 3'b100
`define MAGENTA 3'b101
`define YELLOW 3'b110
`define WHITE 3'b111

module VGA(
    input clk,
	 input [2:0] pixel_data,
    output reg hsync, vsync,
    output reg [2:0] pixel,
	 output reg [7:0] row,
	 output reg [7:0] column
    );
	 
reg [9:0] hcount, vcount;

always @ (posedge clk)
begin
	if(hcount == 799)
	begin
		hcount <= 0;
		if(vcount == 524)
			vcount <= 0;
		else
			vcount <= vcount + 1;
	end
	else
		hcount <= hcount + 1;
	
	if(vcount >= 490 && vcount < 492)
		vsync <= 0;
	else
		vsync <= 1;
		
	if(hcount >= 656 && hcount < 752)
		hsync <= 0;
	else
		hsync <= 1;
		
	if(hcount < `SCREEN_WIDTH && vcount < `SCREEN_HEIGHT)
	begin
		if(hcount >= `FRAME_X && hcount < (`FRAME_X + `FRAME_WIDTH) &&
			vcount >= `FRAME_Y && vcount < (`FRAME_Y + `FRAME_HEIGHT) )
			begin
				pixel <= pixel_data;
				column <= column + 1;
			end
		else
		begin
			pixel <= `WHITE;
			if(column >= `FRAME_WIDTH)
			begin
				row <= row + 1;
				column <= 0;
			end
			if(row >= `FRAME_HEIGHT)
				row <= 0;
		end
	end
	else
		pixel <= `BLACK;
end

initial
begin
	hcount = 0;
	vcount = 0;
end

endmodule
