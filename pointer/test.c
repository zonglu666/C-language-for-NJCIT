#include <stdio.h>
int main()
{
    int a;
    int *p = &a;
    *p = 100;
    printf("%d\n", a);
    return 0;
}