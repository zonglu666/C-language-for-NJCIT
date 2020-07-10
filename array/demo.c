#define N 3
#define M N + 1

int main()
{
    int a[3][4];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            a[i][j] = i * j;
    return 0;
}
