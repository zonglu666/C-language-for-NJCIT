#include <stdio.h>
int main()
{
    float radius,area, perimeter;
    printf("The radius is ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    perimeter = 3.14 * 2 * radius;
    printf("The area is %f.\n", area);
    printf("The perimeter is %f.\n", perimeter);
    return 0;
}
