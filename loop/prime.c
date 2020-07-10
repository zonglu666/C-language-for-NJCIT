#include <stdio.h>
#include <math.h>
int main()
{
    int m;
    printf("Please input the number m: ");
    scanf("%d", &m);
    char isPrime = 'T';
    for (int i = 2; i < sqrt(m); i++)
    {
        if (m % i == 0)
        {
            isPrime = 'F';
            break;
        }
    }
    if (isPrime == 'T')
        printf("%d is a prime number. \n", m);
    else
        printf("%d is a not prime number. \n", m);
    return 0;
}

