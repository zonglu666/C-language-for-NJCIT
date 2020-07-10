#include <stdio.h>
int main()
{
  int year, month, day;
  printf("Please input the date(year month day):");
  scanf("%d %d %d", &year, &month, &day);
  printf("%d-%d-%d \n", year, month, day);
  return 0;
}