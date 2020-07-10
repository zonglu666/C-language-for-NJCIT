/* function 1 */
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Please input three integer : ");
    scanf("%d%d%d", &a, &b, &c);
    // compare a and b
    max = (a > b) ? a : b;
    // compare max and c
    max = (max > c) ? max : c;
    printf("The max integer is %d \n", max);
    return 0;
}