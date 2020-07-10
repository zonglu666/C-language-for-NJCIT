#include <stdio.h>
int main()
{
    int day, month, year, sum = -1, leap;
    printf("Please input the date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &year, &month, &day);
    // calculate the sum day before the month
    switch (month)
    {
    case 1:
        sum = 0;
        break;
    case 2:
        sum = 31; // the numbero
        break;
    case 3:
        sum = 59; // 31 + 28
        break;
    case 4:
        sum = 90; // 59 + 31
        break;
    case 5:
        sum = 120; // 90 + 30
        break;
    case 6:
        sum = 151; // 120 + 31
        break;
    case 7:
        sum = 181; // 151 + 30
        break;
    case 8:
        sum = 212; // 181 + 31
        break;
    case 9:
        sum = 243; // 212 + 31
        break;
    case 10:
        sum = 273; // 243 + 30
        break;
    case 11:
        sum = 304; // 273 + 31
        break;
    case 12:
        sum = 334; // 304 + 30
        break;
    }
    if (sum < 0)
    {
        printf("month is invalid \n");
        return 0;
    }
    sum = sum + day; // sum add the day
    // leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    // leap year and month greather than 2
    if (leap == 1 && month > 2)
    {
        sum = sum + 1;
    }
    printf("%d day of the year \n", sum);
    return 0;
}