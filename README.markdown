#RGB-Tools

RGBTools is a software library for Arduino for controlling an RGB-LED.

##Installation
Just copy the `RGBTools`-folder the `libraries`-folder of your Arduino-IDE.

##Set a color##
Use the `setColor`-method for setting an RGB-specified color.

```
#include <RGBTools.h>
 
// set pins of red, green and blue
RGBTools rgb(9,10,11);
 
void setup(){
  rgb.setColor(255,0,0);
}
 
void loop(){
  // nothing to loop
}
```

##Fade to color##
Use the `fadeTo`-method for fade to a specific color in certain steps and time.

```
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
Johannes Mittendorfer (http://jmittendorfer.hostingsociety.com)