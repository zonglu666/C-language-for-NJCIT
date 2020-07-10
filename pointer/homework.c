#include <stdio.h>
int main()
{
    int a[10] = {0, 1, 2, 3, 25, 6, 8, 3, 3, 5};
    int n = 6, *p1, *p2;
    p1 = p2 = &a[0];
    printf("1. *p1=%d,*p2=%d \n", *p1, *p2);
    p1 = p1 + n;
    p2++;
    printf("2. *p1=%d,*p2=%d \n", *p1, *p2);
    ++p1;
    p1 = p1 - 3;
    p2 = p2 + 7;
    printf("3. *p1=%d,*p2=%d \n", *p1, *p2);
    return 0;
}
