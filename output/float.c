#include <stdio.h>
int main()
{
    float num = 1234.56789;
    printf("%f      \n", num);
    printf("%10f    \n", num);
    printf("%.3f   \n", num);
    printf("%-10f   \n", num);
    printf("%10.3f \n", num);
    printf("%-10.3f\n", num);
    return 0;
}
