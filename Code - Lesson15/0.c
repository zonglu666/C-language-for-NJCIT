#include <stdio.h>
int main()
{
  int a = 0;
  int *p = &a;
  printf("a = %d \n", a);
  printf("&a = %p \n", &a);
  printf("p = %p \n", p);
  printf("*p = %d \n", *p);
  return 0;
}
