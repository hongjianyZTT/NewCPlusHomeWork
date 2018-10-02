#include <stdio.h>

struct Article
{
  int articleNumber;
  int quantity;
  char description[20];
};

void Print(struct Article *article);

int main()
{
  struct Article article = {12345, 20, "Article Description"};
  struct Article *p = &article;
  Print(p);
}

void Print(struct Article *article)
{
  printf("The article number of this article is %d. \n", article->articleNumber);
  printf("The quantity of this article is %d. \n", article->quantity);
  printf("The description of this article is %s. \n", article->description);
}