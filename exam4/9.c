#include <stdio.h>
char *strcpy(char *strDest, const char *strSrc)
{
    if (strDest == NULL || strSrc == NULL)
    {
        return NULL;
    }

    char *p = NULL; // char *p = strDest;
    p = strDest;

    do
    {
        *strDest = *strSrc;
        strSrc++;
        strDest++;
    } while (*strSrc != '\0');

    return p;
}

int main()
{
    // strSrc - string source
    // strDest - string destination
    char strDest[100], strSrc[100];
    printf("Please input a string : ");
    scanf("%s", strSrc);
    strcpy(strDest, strSrc);
    printf("The copied string: %s\n", strDest);
    return 0;
}