#include <stdio.h>
#include <math.h>
int main()
{
    int length = 1;
    printf("The all prime numbers: \n");
    for (int m = 2; m <= 100; m++)
    {
        // judge m is a prime number
        char isPrime = 'T';
        for (int i = 2; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                isPrime = 'F';
                break;
            }
        }
        if (isPrime == 'T')
        {
            printf("%d \t", m);
            length++;
        }
        if (length > 5)
        {
            length = 1;
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}