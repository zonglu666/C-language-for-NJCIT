#include <stdio.h>
int main()
{
    char *t = "Hello World\n";
    char *s;
    while (*t != '\0')
    {
        *s = *t;
        t++;
        s++;
    }
    printf("t = %s", t);
    printf("s = %s", s);
    return 0;
}
