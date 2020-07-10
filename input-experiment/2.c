#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Please input three integer : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) // compare a and b
    {
        max = a;
    }
    else if (b > c) // b greather than a, compare b and c
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("The max integer is %d \n", max);
    return 0;
}