#include <stdio.h>
int main()
{
    int i, j;
    int a[2][3] = {1, 2, 3, 4, 5, 6}, b[3][2];
    printf("The raw matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("The transposed matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
