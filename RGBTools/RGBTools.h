#ifndef RGBTools_H
#define RGBTools_H

#include <Arduino.h>

class RGBTools
{
	public:
		RGBTools(int r, int g, int b);
		RGBTools(int r, int g, int b, uint8_t common_cathode);
		void setColor(int r, int g, int b);
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

#endif
