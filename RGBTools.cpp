#include "RGBTools.h"

int r_pin;
int g_pin;
int b_pin;

int curr_r = 0;
int curr_g = 0;
int curr_b = 0;

RGBTools::RGBTools(int r, int g, int b){
	r_pin = r;
	g_pin = g;
	b_pin = b;
}

// Set LED-color to custom color instantely
void RGBTools::setColor(int r, int g, int b){
	analogWrite(r_pin,255-r);
    analogWrite(g_pin,255-g);
    analogWrite(b_pin,255-b);
	
	curr_r = r;
	curr_g = g;
	curr_b = b;
}

// Fade to custom color in specific time in specific steps
void RGBTools::fadeTo(int r,int g,int b,int steps,int duration){
	float diff_r = r-curr_r;
    float diff_g = g-curr_g;
    float diff_b = b-curr_b;
    
    float steps_r = diff_r / steps;
    float steps_g = diff_g / steps;
    float steps_b = diff_b / steps;
    
    for(int i = 0; i < steps; i++){
        this->setColor(r + i*steps_r,  g + i*steps_g, b + i*steps_b);
        delay(duration/steps);  
    }
	
	curr_r = r;
	curr_g = g;
	curr_b = b;
}

