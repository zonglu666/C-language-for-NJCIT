#include <stdio.h>
int main()
{
    char name[] = "Gary";
    int age = 20;
    float score = 90.5;
    // a single character must use the single quotes
    char grade = 'A';
    printf("The student name is %s. \n", name);
    printf("His age is %d. \n", age);
    printf("His score is %f. \n", score);
    printf("His grade is %c. \n", grade);
    return 0;
}