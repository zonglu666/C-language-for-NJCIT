/**
 * Triangle Area
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float s, area;
    printf("Input the side length of a triangle:");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f\n", area);
    return 0;
}