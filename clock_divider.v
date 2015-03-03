`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:10:54 03/02/2015 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider(
    input master_clk,
    output clk_display,
    output clk_vga,
    output clk_debounce,
	 output clk_blink
    );

	 reg [31:0] clk_display_dv_inc;
	 reg [31:0] clk_vga_dv_inc;
	 reg [31:0] clk_blink_dv_inc;
	 reg [31:0] clk_debounce_dv_inc;

    reg clk_display_en;
	 reg clk_vga_en;
	 reg clk_blink_en;
	 reg clk_debounce_en;

	 // Number of cycles for a clock to go to 1 and back to 0
	 parameter num_cycles_clk_vga =               2;		// 50 MHz
	 parameter num_cycles_clk_display =      600000;		// 
	 parameter num_cycles_clk_debounce =    5000000;		// 20Hz 
	 parameter num_cycles_clkblink =       50000000;		// 	
	 parameter num_cycles_clkblink_limit = 33333333;	   // 
	 
	 initial begin
		clk_display_dv_inc = 0;
		clk_vga_dv_inc = 0;
		clk_blink_dv_inc = 0;
		clk_debounce_dv_inc = 0;
		clk_display_en = 0;
		clk_vga_en = 0;
		clk_blink_en = 0;
		clk_debounce_en = 0;
	 end

	assign clk_display = clk_display_en;
	assign clk_vga = clk_vga_en;
	assign clk_debounce = clk_debounce_en;
	assign clk_blink = clk_blink_en;
	
	always @(posedge master_clk) begin
		if (clk_vga_dv_inc == num_cycles_clk_vga - 1) begin
			clk_vga_dv_inc <= 0;
			clk_vga_en <= 1;
		end
		else begin
			clk_vga_dv_inc <= clk_vga_dv_inc + 1;
			clk_vga_en <= 0;
		end	
		
		if (clk_display_dv_inc == num_cycles_clk_display - 1) begin
			clk_display_dv_inc <= 0;
			clk_display_dv_inc_en <= 1; 
		end
		else begin
			clk_display_dv_inc <= clk_display_dv_inc + 1;
			clk_display_dv_inc_en <= 0;
		end 
		
		if (clk_debounce_dv_inc == num_cycles_clk_debounce - 1) begin
			clk_debounce_dv_inc <= 0;
			clk_debounce_dv_inc_en <= 1; 
		end
		else begin
			clk_debounce_dv_inc <= clk_debounce_dv_inc + 1;
			clk_debounce_dv_inc_en <= 0;
		end
		
		if (clk_blink_dv_inc == num_cycles_clk_blink - 1) begin
			clk_blink_dv_inc <= 0;
			clk_blink_en <= 1;
		end
		else if (clk_blink_dv_inc > num_cycles_clk_blink_limit) begin
			clk_blink_dv_inc <= clk_blink_dv_inc + 1;
			clk_blink_en <= 1;
		end
		else begin
			clk_blink_dv_inc <= clk_blink_dv_inc + 1;
			clk_blink_en <= 0;
		end
	end
	

endmodule
