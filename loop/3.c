#include <stdio.h>
int main()
{
    int n, i = 1, s = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        s = s * i;
        i++;
    }
    printf("%d! = %d \n", n, s);
    return 0;
}
