#include <stdio.h>
int main()
{
    printf("\n  5 + 3 = %d  \n", (5 + 3));
    printf("\n  5 / 3 = %d ... %d  \n", (5 / 3), (5 % 3));
    int i = 0;
    printf("\n  %d  \n", i--);
    int number1 = 5, number2 = 3;
    number1 += number2;
    number1 = number1 + number2;
    return 0;
}