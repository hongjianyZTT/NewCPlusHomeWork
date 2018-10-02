#include <stdio.h>
char* array[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
void DayName(int i)
{
  if (i > 7 || i < 1)
  {
    printf("The input number is not valid. \n");
  }
  else
  {
    printf("Day %d is a %s. \n", i, array[i - 1]);
  }
}