#include <stdio.h>
int main()
{
  float pi = 3.14;
  float radius, area, perimeter;
  scanf("%f", &radius);
  perimeter = 2 * pi * radius;
  area = pi * radius * radius;
  printf("%f %f \n", perimeter, area);
  return 0;
}