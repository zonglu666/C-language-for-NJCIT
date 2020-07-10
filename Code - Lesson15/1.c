#include <stdio.h>
int main()
{
  int x1, x2, *p1, *p2 = &x2;
  scanf("%d%d", &x1, p2);
  p1 = &x1;
  printf("*p1 = %d *p2 = %d \n", *p1, *p2);
  p2 = p1;
  printf("*p1 = %d *p2 = %d \n", *p1, *p2);
  return 0;
}
