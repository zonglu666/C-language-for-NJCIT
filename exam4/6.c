#include <stdio.h>
// function decalration 函数原型/函数声明
char converter(char);
int main()
{
    char lowercase, uppercase;
    printf("Please input a lowercase letter character : ");
    lowercase = getchar();
    if (lowercase < 'a' || lowercase > 'z')
    {
        // 如果不是英文小写字母，直接输出
        printf("The character is not a lowercase letter. \n");
    }
    else
    {
        uppercase = converter(lowercase);
        printf("The uppercase letter is %c. \n", uppercase);
    }
    return 0;
}
/**
 * Function: convert a letter from lettercase to uppercase
 * Arguments: char c
 * Return: the uppercase of c
 */
char converter(char c)
{
    // ASCII code
    // lowercase --> uppercase
    // 'a' - 32 --> 'A'
    return c - 32;
}