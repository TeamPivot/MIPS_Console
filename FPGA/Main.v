`timescale 1ns / 1ps

module Main(
    input clk,
	 output stopped,
	 output stopped_led,
	 output vsync,
	 output hsync,
	 output [2:0] pixel
    );
	 
	assign stopped_led = stopped;
	
	reg we = 0;
	reg [2:0] din = 3'b010;
	
	CPU cpu(clk, stopped);
	GPU gpu(clk, we, din, vsync, hsync, pixel);
	
endmodule
