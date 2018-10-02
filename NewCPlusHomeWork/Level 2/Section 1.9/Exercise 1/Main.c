/*
 * A C-program that reads the characters from the keyboard and shows them on screen.
 */
#include <stdio.h>

int main()
{
  int input;
  printf("Enter some characters: \n");
  // Check if ^A is entered, if so, output the characters on screen and break the loop.
  while((input = getchar()))
  {
    putchar(input);
    if (input == 1)
    {
      putchar(input);
      printf("\nCTRL + A is a correct ending.\n");   // Print a message on screen.
      break;
    }
  }
  return 0;
}