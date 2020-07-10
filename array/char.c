#include <stdio.h>
int main()
{
    char c1[7] = {'H', 'E', 'L', 'L', 'O', ' ', 'C'};
    char c2[8] = {"HELLO C"};
    char c3[8] = "HELLO C";
    char c4[] = "HELLO C";
    printf("%s \n", c1);
    printf("%s \n", c2);
    printf("%s \n", c3);
    printf("%s \n", c4);
    return 0;
}
