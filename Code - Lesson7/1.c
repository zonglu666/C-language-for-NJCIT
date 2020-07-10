#include <stdio.h>
int main()
{
  printf("Input the foot and inch of heitht: ");
  int foot, inch;
  scanf("%d %d", &foot, &inch);
  int height = (foot + inch / 12) * 0.3048;
  printf("%d foot %d inches is %d meters\n", foot, inch, height);
  return 0;
}
