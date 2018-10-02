#include <stdio.h>

int main()
{
  int input;
  FILE *fptr = fopen("outputFile", "w");
  if (fptr == NULL)
  {
    printf("Output file is invalid! \n");
    return 0;
  }
  printf("Enter some characters: \n");

  while((input = getchar()))
  {
    fputc(input, fptr);
    if (input == 1)
    {
      fputc(input, fptr);
      printf("\nCTRL + A is a correct ending.\n");
      break;
    }
  }
  fclose(fptr);
  return 0;
}