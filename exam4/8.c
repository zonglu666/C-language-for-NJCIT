#include <stdio.h>
#include <math.h>
/**
 * Function: judge a number is prime number
 * Arguments: int a, int b, int c
 * Return: the area of the triangle
 */
float calculateArea(int side1, int side2, int side3)
{
    float s, area;
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}
int main()
{
    int a, b, c;
    printf("Input the side length of a triangle:");
    scanf("%d %d %d", &a, &b, &c);
    float area = calculateArea(a, b, c);
    printf("The area of the triangle is %f\n", area);
    return 0;
}