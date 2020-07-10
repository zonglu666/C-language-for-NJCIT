#include <stdio.h>
#include <float.h>
int main()
{
  printf("sizeof(float): %lu \n", sizeof(float));
  printf("minimum number: %E\n", FLT_MIN);
  printf("maximum number: %E\n", FLT_MAX);
  printf("point: %d\n", FLT_DIG);
  return 0;
}