#include <stdio.h>
int main()
{
    printf("Please input a letter : ");
    char c = getchar();
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    if (c >= 'A' && c <= 'Z')
    {
        printf("The uppercase letter is %c \n", c);
    }
    else
    {
        printf("The input value is not a letter \n");
    }
    return 0;
}