#include <stdio.h>
int main()
{
    int i, a[5];
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
        printf("a[%d]=%d \n", i, a[i]);
    return 0;
}
