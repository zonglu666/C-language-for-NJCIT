#include <stdio.h>
int main()
{
    char grade;
    printf("Please input the grade : ");
    grade = getchar();
    printf("The range of score is ");
    switch (grade)
    {
    case 'A':
        printf("85~100");
        break;
    case 'B':
        printf("70~84");
        break;
    case 'C':
        printf("60~69");
        break;
    case 'D':
        printf("< 60");
        break;
    default:
        printf("error!");
    }
    printf("\n");
    return 0;
}