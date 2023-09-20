// Absolute value macro

#include <stdio.h>

#define ABSOLUTE_VALUE(x) (x) >= 0 ? (x) : -(x)

int main(void) {

  printf ("%d\n", ABSOLUTE_VALUE(1 + 3));
  printf ("%d\n", ABSOLUTE_VALUE(1 - 3));
  
  return 0;
}