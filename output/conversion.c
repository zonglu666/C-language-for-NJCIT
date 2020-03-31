#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d  \n", a);
    printf("%u  \n", a);
    printf("%f  \n", (float)a);
    printf("%e  \n", (float)a);
    char c = 'A';
    printf("%c  \n", c);
    printf("%d  \n", c);
    char str[] = "Hello world.";
    printf("%s  \n", str);
    return 0;
}