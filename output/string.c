#include <stdio.h>
int main()
{
    char str[] = "Hello world";
    printf("%s      \n", str);
    printf("%10s    \n", str);
    printf("%.10s   \n", str);
    printf("%-10s   \n", str);
    printf("%-15s   \n", str);
    printf("%15.10s \n", str);
    printf("%-15.10s\n", str);
    return 0;
}
