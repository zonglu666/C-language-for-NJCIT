#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float area, s;
    printf("Input 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area is %f  \n", area);
    return 0;
}