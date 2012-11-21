/*
* RGBTools
* Version 1 November, 2012
* Copyright 2012 Johannes Mittendorfer
* 
* Use this code with RGB-LEDs.
*/

#include "RGBTools.h"

// pins for colors
int r_pin;
int g_pin;
int b_pin;

// saves current state (color)
int curr_r = 0;
int curr_g = 0;
int curr_b = 0;

// constructor; saves the pins
RGBTools::RGBTools(int r, int g, int b){
	r_pin = r;
	g_pin = g;
	b_pin = b;
}

// Set LED-color to custom color instantely
void RGBTools::setColor(int r, int g, int b){
	// set color of LED
	analogWrite(r_pin,255-r);
	analogWrite(g_pin,255-g);
	analogWrite(b_pin,255-b);

	// save state
	curr_r = r;
	curr_g = g;
	curr_b = b;
}

// Fade to custom color in specific time in specific steps
void RGBTools::fadeTo(int r,int g,int b,int steps,int duration){

	// calculate differance to target
	float diff_r = r-curr_r;
	float diff_g = g-curr_g;
	float diff_b = b-curr_b;

	// calculate the width of each step
	float steps_r = diff_r / steps;
	float steps_g = diff_g / steps;
	float steps_b = diff_b / steps;

	// loop through the steps
	for(int i = 0; i < steps; i++){

		// set color of current step
		this->setColor(
			r + i*steps_r,	// red part plus i times the value of one step
			g + i*steps_g,	// green part plus i times the value of one step	
			b + i*steps_b	// blue part plus i times the value of one step
		);

		// delay until next step
		delay(duration/steps);  
	}

	// save state
	curr_r = r;
	curr_g = g;
	curr_b = b;
}

