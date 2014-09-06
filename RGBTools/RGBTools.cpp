/*
* RGBTools
* Version 1.0 November, 2012
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

// output for common cathode RGB leds (0 = dark)
// default: common anode (0 = bright)
uint8_t _common_cathode = 0;

// constructor; saves the pins
RGBTools::RGBTools(int r, int g, int b){
	r_pin = r;
	g_pin = g;
	b_pin = b;
}

RGBTools::RGBTools(int r, int g, int b, uint8_t common_cathode){
	r_pin = r;
	g_pin = g;
	b_pin = b;

	_common_cathode = common_cathode;
}

// Set LED-color to custom color instantely
void RGBTools::setColor(int r, int g, int b){
	// set color of LED
	if (_common_cathode) {
		analogWrite(r_pin, r);
		analogWrite(g_pin, g);
		analogWrite(b_pin, b);
	} else {
		analogWrite(r_pin, 255 - r);
		analogWrite(g_pin, 255 - g);
		analogWrite(b_pin, 255 - b);
	}

	// save state
	curr_r = r;
	curr_g = g;
	curr_b = b;
}

// Fade to custom color in specific time in specific steps
void RGBTools::fadeTo(int r,int g,int b,int steps,int duration){

	// calculate difference to target
	int diff_r = r-curr_r;
	int diff_g = g-curr_g;
	int diff_b = b-curr_b;

	// calculate the width of each step
	int steps_r = diff_r / steps;
	int steps_g = diff_g / steps;
	int steps_b = diff_b / steps;

	// loop through the steps (i: distance to target)
	for(int i = steps - 1; i >= 0; i--){

		// set color of current step
		this->setColor(
			r - i * steps_r,	// red target minus distance to target steps
			g - i * steps_g,	// green
			b - i * steps_b 	// blue
		);

		// delay until next step
		delay(duration/steps);  
	}
}

