`timescale 1ns / 1ps

module GPU(
	input clk,
	input we,
	input [7:0] din,
	output vsync,
	output hsync,
	output [2:0] pixel
    );
	 
	wire vga_clk;
	// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
	// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm(.CLKIN(clk), .CLKFX(vga_clk));
	
	wire [7:0] row;
	wire [7:0] column;
	
	VideoMemory VM(clk, we, row, column, din, pixel_data);
	VGA VGA(vga_clk, pixel_data, hsync, vsync, pixel, row, column);
	
endmodule
