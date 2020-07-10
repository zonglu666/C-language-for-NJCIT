#include <stdio.h>

void solution(double solu[4]);

int main()
{
    double solu[4] = {0, 0, 0, 0};
    printf("000 %lf\n", solu[0]);
    solution(solu);
    printf("222 %lf\n", solu[0]);
}

void solution(double solu[4])
{
    // 。。。。。。
    solu[0] = 1;
    printf("111 %lf\n", solu[0]);
    return;
}
