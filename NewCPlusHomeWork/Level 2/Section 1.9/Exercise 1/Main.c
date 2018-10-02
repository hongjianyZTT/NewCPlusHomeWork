#include <stdio.h>

int main()
{
  int input;
  printf("Enter some characters: \n");
  while((input = getchar()))
  {
    putchar(input);
    if (input == 1)
    {
      putchar(input);
      printf("\nCTRL + A is a correct ending.\n");
      break;
    }
  }
  return 0;
}