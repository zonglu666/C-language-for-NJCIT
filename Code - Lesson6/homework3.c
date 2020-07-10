#include <stdio.h>
int main()
{
  int number;
  scanf("%d", &number);
  int reminder = number % 2;
  if (reminder == 1)
  {
    printf("odd \n");
  }
  else
  {
    printf("even \n");
  }
  return 0;
}