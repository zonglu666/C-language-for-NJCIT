#include <stdio.h>
int main()
{
    int year;
    printf("Please input the year : ");
    scanf("%d", &year);
    // leap year
    // 可以被4整除但是不可以被100整除 或者 可以被400整除
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d year is leap year \n", year);
    else
        printf("%d year is not leap year \n", year);
    return 0;
}