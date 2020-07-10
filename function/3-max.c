#include <stdio.h>
int maxFunc(int x, int y)
{
    int max = x;
    if (y > max)
        max = y;
    return max;
}
int main()
{
    int max = maxFunc(1, 2);
    printf("max = %d", max);
    return 0;
}
