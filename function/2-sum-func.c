#include <stdio.h>
int sumFunc(int x, int y)
{
    int sum = 0, i;
    for (i = x; i <= y; i++)
        sum = sum + i;
    return sum;
}
int main()
{
    int sum = 0, i;
    sum += sumFunc(0, 10);
    sum += sumFunc(25, 30);
    sum += sumFunc(35, 45);
    printf("sum = %d", sum);
    return 0;
}