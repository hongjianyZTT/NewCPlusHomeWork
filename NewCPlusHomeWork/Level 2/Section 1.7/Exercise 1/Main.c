/*
 * This program will cal Swap function which is defined in Swap.h
 * to swap the value of two variables.
 */
#include <stdio.h>
#include "Swap.h"

int main()
{
  int x = 1;
  int y = 2;
  printf("x is %d and y is %d before swap. \n", x, y);
  Swap(&x, &y);  // Swap the value of x and y.
  printf("x is %d and y is %d after swap. \n", x, y);
}