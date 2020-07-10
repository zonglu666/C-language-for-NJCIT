#include <stdio.h>
int main()
{
    int number, max, min;
    printf("Please input 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number);
        if (i == 0)
        {
            max = min = number;
            continue;
        }
        if (number > max)
            max = number;
        else if (number < min)
            min = number;
    }
    printf("max = %d, min = %d \n", max, min);
    return 0;
}
