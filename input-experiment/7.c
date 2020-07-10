#include <stdio.h>
int main()
{
    int number;
    printf("Please input the number : ");
    scanf("%d", &number);
    // (even % 2) equals to 0
    // (odd % 2) not equals to 0
    // 0 is false, !0 is true
    if (number % 2)
        printf("%d is odd \n", number);
    else
        printf("%d is even \n", number);
    return 0;
}