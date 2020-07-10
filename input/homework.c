#include <stdio.h>
int main()
{
    int number;
    int bussiness1, bussiness2, bussiness3;
    int remainder1, remainder2, remainder3;
    printf("Input a decimal integer: ");
    scanf("%d", &number);
    bussiness1 = number / 8;
    remainder1 = number - bussiness1 * 8;
    bussiness2 = bussiness1 / 8;
    remainder2 = bussiness1 - bussiness2 * 8;
    bussiness3 = bussiness2 / 8;
    remainder3 = bussiness2 - bussiness3 * 8;
    printf("The octonary number is: ");
    printf("%d%d%d\n", remainder3, remainder2, remainder1);
    return 0;
}