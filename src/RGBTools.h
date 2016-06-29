/*
* RGBTools
* Version 1.4 April, 2015
* Copyright 2015 Johannes Mittendorfer
* 
* Use this code with RGB-LEDs.
*/

#ifndef RGBTools_H
#define RGBTools_H

#include <Arduino.h>

enum Mode { COMMON_ANODE, COMMON_CATHODE };

class RGBTools
{
	public:
		RGBTools(int r, int g, int b);
		RGBTools(int r, int g, int b, uint8_t common_cathode);
		RGBTools(int r, int g, int b, Mode mode);
		void setColor(int r, int g, int b);
		void setColor(uint32_t);
		void fadeTo(int r,int g,int b,int steps,int duration);
		
	private:
		// pins for colors
		int r_pin, g_pin, b_pin;

		// saves current state (color)
		int curr_r, curr_g, curr_b;

		// output for common cathode RGB leds (0 = dark)
		// default: common anode (0 = bright)
		uint8_t _common_cathode;

};

class Color {
  public:
    static const uint32_t RED = 0xFF0000;
    static const uint32_t GREEN = 0x00FF00;
    static const uint32_t BLUE = 0x0000FF;
};

#endif
