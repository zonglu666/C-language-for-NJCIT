#include <stdio.h>
void counter(char *s);
int main()
{
    char s[100];
    printf("Please input a string : ");
    scanf("%s", s);
    counter(s);
    return 0;
}
/**
 * Function: count the number of letter, number and other character in the string.
 * Arguments: char *s;
 * Return: null
 */
void counter(char *s)
{
    int letter_count = 0;
    int number_count = 0;
    int other_count = 0;
    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
            number_count++;
        else if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            letter_count++;
        else
            other_count++;
        s++;
    }
    printf("The count of letter is %d \n", letter_count);
    printf("The count of number is %d \n", number_count);
    printf("The count of other character is %d \n", other_count);
    return;
}