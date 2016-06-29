#RGB-Tools

RGBTools is a software library for Arduino for controlling an RGB-LED.

##Installation
Import a ZIP file from the release section in your Arduino IDE.

##Initialization
```c++
#include <RGBTools.h>
 
// Initialize a common cathode RGB LED (default is common anode)
RGBTools rgb(9,10,11, COMMON_CATHODE);
```

##Set a color##
Use the `setColor`-method for setting an RGB-specified color.

```c++
#include <RGBTools.h>
 
// set pins of red, green and blue
RGBTools rgb(9,10,11);
 
void setup(){
  // specify a color using R,G,B values
  rgb.setColor(255,0,0);
  // Or specify a color using the Color class in the header
  rgb.setColor(Color::BLUE);
}
 
void loop(){
  // nothing to loop
}
```

##Fade to color##
Use the `fadeTo`-method for fade to a specific color in certain steps and time.

```c++
#include <RGBTools.h>
 
// set pins of red, green and blue
RGBTools rgb(9,10,11);
 
void setup(){
  rgb.fadeTo(255,0,0,50,3000); // to red in 50 steps and 3 seconds
}
 
void loop(){
  // nothing to loop
}
```

##Author##
Johannes Mittendorfer (http://johannes-mittendorfer.com)
