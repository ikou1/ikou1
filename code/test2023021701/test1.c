#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>        //1~n���������ѡ��m��   n<=25
#define N 30
int n, m;
int state[N];   //��ʾ�������
int used[N] = { 0 };//1������ʹ��   0����δʹ��
int min = 1;
void dfs(int u)
{
    if (n-min<m-u)
    {
        return;
    }
    if (u > m)
    {
        for (int i = 1; i <= m; i++)
        {
                printf("%d ", state[i]);
        }
        printf("\n");
        return;
    }

    for (int i = min; i <= n; i++)
    {
        if (!used[i] && i > state[u - 1])
        {
            state[u] = i;
            used[i] = 1;
            min = i + 1;
            dfs(u+1);
            state[u] = 0;
            used[i] = 0;
        }
    }
    return;
}
int main()
{
    scanf("%d %d", &n, &m);
    dfs(1);
    return 0;
}