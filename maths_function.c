#include <stdio.h>
#include <math.h>
int main(void) {
  double age = 34.38;
  int floor_age = floor(age);
  printf("FLOOR = %d", floor_age);
  printf("\n");
  int ceil_age = ceil(age);
  printf("CEILING = %d", ceil_age);
}
