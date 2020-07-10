#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 0; i <= 10; i++)
        sum = sum + i;
    for (i = 25; i <= 30; i++)
        sum = sum + i;
    for (i = 35; i <= 45; i++)
        sum = sum + i;
    printf("sum = %d", sum);
    return 0;
}