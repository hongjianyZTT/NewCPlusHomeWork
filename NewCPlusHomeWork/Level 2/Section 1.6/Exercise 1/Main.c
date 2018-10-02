/*
 * This is a file that contains two print macro calls.
 */
#include <stdio.h>
#include "Defs.h"
int main()
{
  int a , b;
  scanf("%d%d", &a, &b);       // Input variable a and b.
  PRINT1(a);                   // Call PRINT1 to print variable a.
  PRINT2(a, b);                // Call PRINT1 and PRINT2 to print variable a and b.
  printf("I just add a testing line. ");
  return 0;
}

