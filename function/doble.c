#include <stdio.h>

void solution(double solu_element);

int main()
{
    double solu[4] = {0, 0, 0, 0};
    printf("000 %lf\n", solu[0]);
    solution(solu[0]);
    printf("222 %lf\n", solu[0]);
}

void solution(double solu_element)
{
    // 。。。。。。
    solu_element = 1;
    printf("111 %lf\n", solu_element);
    return;
}
