/*
 * Header file which contains the DayName() function.
 */
#include <stdio.h>
// Define an array of strings to store all the day names.
char* array[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
/*
 * This function will print the day of a given day-number.
 * Argument: int
 */
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