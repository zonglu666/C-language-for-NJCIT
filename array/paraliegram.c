#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 6; i++) // loop each row
    {
        // 先输出 i 个 “ ”， 再输出5 个 “*”
        // i row => i " "
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 6; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
