/*
 * A C-program that prints the contents of a struct call Article.
 */
#include <stdio.h>

// Define a struct called Article.
struct Article
{
  int articleNumber;
  int quantity;
  char description[20];
};
// Declare Print() function.
void Print(struct Article *article);

int main()
{
  struct Article article = {12345, 20, "Article Description"};
  struct Article *p = &article;
  Print(p);
}
/*
 * This function will take the address of a struct and print each of its characteristics.
 * Argument: struct Article
 */
void Print(struct Article *article)
{
  printf("The article number of this article is %d. \n", article->articleNumber);
  printf("The quantity of this article is %d. \n", article->quantity);
  printf("The description of this article is %s. \n", article->description);
}