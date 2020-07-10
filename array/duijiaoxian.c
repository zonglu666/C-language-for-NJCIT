#include <stdio.h>
#define N 5 // N = 5 constant
int main()
{
    int arr[N][N], i, j;
    // input numbers into the arr
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &arr[i][j]);
    // output the array
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    int sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum + arr[i][i] + arr[i][N - 1 - i];

        if (i == N - 1 - i)
            sum = sum - arr[i][i];
    }
    printf("sum = %d\n", sum);
    return 0;
}