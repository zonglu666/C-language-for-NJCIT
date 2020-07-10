#include <stdio.h>
#include <math.h>
int judgePrime(int);
int main()
{
    int number;
    printf("Please input a number : ");
    scanf("%d", &number);
    int ret = judgePrime(number);
    if (ret)
        printf("%d is prime number. \n", number);
    else
        printf("%d is not prime number. \n", number);
    return 0;
}
/**
 * Function: judge a number is prime number
 * Arguments: int number
 * Return: 
 *   return 1 - the number is prime number
 *   return 0 - the number is not a prime number
 */
int judgePrime(int number)
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