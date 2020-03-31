#include <stdio.h>
/**
 * Reverse Integer
 */
int main()
{
    int number;
    printf("Input a number(0-999):");
    scanf("%d", &number);
    int hund_int = number / 100;
    int ten_int = (number % 100) / 10;
    int single_int = (number % 100) % 10;
    int reversed_number = single_int * 100 + ten_int * 10 + hund_int;
    printf("The reversed number is %d.\n", reversed_number);
    return 0;
}
