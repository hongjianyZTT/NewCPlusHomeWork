/*
 * Similar to exercise 1.9.1 but write to a file instead of screen.
 */
#include <stdio.h>

int main()
{
  int input;
  FILE *fptr = fopen("outputFile", "w"); // Open the target file.
  if (fptr == NULL)                      // Check if file is opened successfully.
  {
    printf("Output file is invalid! \n");
    return 0;
  }
  printf("Enter some characters: \n");

  while((input = getchar()))
  {
    fputc(input, fptr);
    // Check if ^A is entered, if so, output characters to target file and break the loop.
    if (input == 1)
    {
      fputc(input, fptr);
      printf("\nCTRL + A is a correct ending.\n");  // Print a message on screen.
      break;
    }
  }
  fclose(fptr);
  return 0;
}