#include <stdint.h>
#include "../src/RGBTools.h"

RGBTools rgb(1,2,3);

int main()
{
    printf("# 255, 255, 255\n");
    rgb.setColor(255,255,255);

    printf("# 0, 0, 0\n");
    rgb.setColor(0,0,0);
}