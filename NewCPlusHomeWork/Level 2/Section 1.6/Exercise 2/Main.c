#include <stdio.h>
#include "Defs.h"
int main()
{
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  printf("Max of x and y is %d. \n", MAX2(x, y));
  printf("Max of x ,y and z is %d. \n", MAX3(x, y, z));
  return 0;
}