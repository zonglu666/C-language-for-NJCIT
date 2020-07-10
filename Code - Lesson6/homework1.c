#include <stdio.h>
int main()
{
  int minutes;
  scanf("%d", &minutes);
  printf("%d minutes  \n", minutes);
  int hours, rest_minutes;
  hours = minutes / 60;
  rest_minutes = minutes - hours * 60;
  // rest_minutes = minutes % 60;
  printf("%d hours and %d minutes  \n", hours, rest_minutes);
  return 0;
}