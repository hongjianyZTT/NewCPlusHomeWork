/* Calculate the length of a string */
#include <stdio.h>
#define MAXLINE 30
// String lenght declaration
int Length(char str[]);

int main()
{
  char string[MAXLINE+1];  // Line of maxium 30 chars + \0
  int c;                   // The input character
  int i=0;                 // The counter

  // Print intro text
  printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

  // Get the characters
  while ((c=getchar())!=EOF && i<MAXLINE)
  {
    // Append entered character to string
    string[i++]=(char)c;
  }
  string[i]='\0';     // String must be closed with \0
  printf("String length is %d\n", Length(string));
  return 0;
}
/*
 * This function will return the length of a string.
 * Argument: char array.
 * Return: int
 */
int Length(char str[])
{
  char *s = str;    // Create a pointer which points to input char array.
  while (*s != '\0' && *s != '\n')
  {
    s++;           // Move forward the pointer for one position.
  }
  return (int)(s - str);     // The distance between these two pointers should be the length of the string.
}