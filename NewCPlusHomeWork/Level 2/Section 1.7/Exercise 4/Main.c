/*
 * This file will get the input number from screen and call DayName() function to print the actual day name.
 */
#include "DayName.h"

int main()
{
  int i;
  printf("Please enter a number: \n");
  scanf("%d", &i);
  DayName(i);  // Call DayName()
  return 0;
}