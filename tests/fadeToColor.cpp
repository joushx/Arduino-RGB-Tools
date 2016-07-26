#include <stdint.h>
#include "../src/RGBTools.h"

RGBTools rgb(1,2,3);

int main() {
  printf("# 255, 0, 0 in 3 steps, 5 sec\n");
  rgb.fadeTo(255, 0, 0, 3, 5000);
}