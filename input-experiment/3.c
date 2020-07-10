#include <stdio.h>
int main()
{
    int a, b, c, temp;
    printf("Please input three integer : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("The sorted integer is %d %d %d \n", a, b, c);
    return 0;
}