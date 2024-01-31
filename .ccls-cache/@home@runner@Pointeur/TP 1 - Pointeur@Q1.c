#include <stdio.h>

int main() {

  float a = 45.78;
  float b = 678.89;

  float * pa = &a;
  float * pb = &b;

  printf("a = %f\n", a);

  return 0;
  
}