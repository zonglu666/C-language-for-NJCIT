#include <stdio.h>
void change(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int a, b;
    a = 2, b = 3;
    change(a, b);
    printf("a=%d, b=%d \n", a, b);
    return 0;
}
