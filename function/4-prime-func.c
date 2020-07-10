#include <stdio.h>
#include <math.h>
/**
 * Judge Prime Number
 * 
 * return
 * 1 - yes
 * 0 - no
 */
int isPrimeFunc(int number)
{
    int ret = 1;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}
int main()
{
    int number;
    printf("Please input a number:");
    scanf("%d", &number);
    int ret = isPrimeFunc(number);
    if (ret)
        printf("%d is prime number. \n", number);
    else
        printf("%d is not prime number. \n", number);
}