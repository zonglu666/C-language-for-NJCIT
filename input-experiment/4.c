#include <stdio.h>
int main()
{
    int x, y;
    printf("Please input the value of x : ");
    scanf("%d", &x);
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 100)
        y = 2 * x - 1;
    else if (x >= 100)
        y = 3 * x + 11;
    printf("The value of y is %d \n", y);
    return 0;
}