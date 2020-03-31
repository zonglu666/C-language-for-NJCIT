#include <stdio.h>
int main()
{
    int feet = 5, inch = 7;
    // meter will have fractional part
    // so we need declarate it with float
    float meter = (feet + inch / 12.0) * 0.3048;
    // output the result
    // such as " 5 feet 7 inches is 1.7 meters "
    printf("\n\n%d feet %d inches is %f meters\n\n", feet, inch, meter);
    return 0;
}