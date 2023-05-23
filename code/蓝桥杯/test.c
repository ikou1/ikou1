#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int maxx(int a, int b)
{
    return (a > b ? a : b);
}
int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d\n", 2 * n - 2);
            break;
        }
        printf("%d\n", maxx(2 * i - 2, 2 * n - 2*i));
    }
    return 0;
}