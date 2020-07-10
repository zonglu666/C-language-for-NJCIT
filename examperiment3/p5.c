#include <stdio.h>
int main()
{
    float number1 = 1, number2 = 1;
    char operator= '+';
    while (1)
    {
        printf("Please input the first operand : ");
        scanf("%f", &number1);
        printf("Please input the second operand : ");
        scanf("%f", &number2);
        printf("Please input the operator : ");
        getchar(); // Do you know why write the line statement?
        scanf("%c", &operator);
        if (number1 == 0 && number2 == 0 && operator== '0')
            break;
        switch (operator)
        {
        case '+':
            printf("%f + %f  = %f \n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%f - %f  = %f \n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%f * %f  = %f \n", number1, number2, number1 * number2);
            break;
        case '/':
            printf("%f / %f  = %f \n", number1, number2, number1 / number2);
            break;
        default:
            printf("Invalid operator \n");
        }
    }
    printf("The calculator is exited.\n");
    return 0;
}