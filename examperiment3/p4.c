#include <stdio.h>
#include <string.h>
int main()
{
    char *s, c;
    printf("Please input a string: ");
    gets(s);
    int len = strlen(s), upperNum, lowerNum;
    for (int i = 0; i < len; i++)
    {
        c = *(s + i);
        if ((c >= 'a' && c <= 'z'))
            upperNum++;
        else if ((c >= 'A' && c <= 'Z'))
            lowerNum++;
    }
    printf("Upper case letter:%d\nLower case letter:%d\n", upperNum, lowerNum);
    return 0;
}
