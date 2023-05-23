#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
char lamp[10][10];
char backup[10][10];
int n;
int step;
int min = 10;
int dx[5] = { -1,0,0,0,1 };
int dy[5] = { 0,1,0,-1,0 };
void turn(int i)
{
    if (i == 5)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (backup[5][j] == '0')
            {
                return;
            }
        }
        if (step > 6)
        {
            return;
        }
        if (step < min)
        {
            min = step;
            memcpy(lamp, backup, sizeof(lamp));
            return;
        }
    }
    for (int j = 1; j <= 5; j++)
    {
        if (backup[i - 1][j] == '0')
        {
            step++;
            for (int k = 0; k <= 5; k++)
            {
                int inew = i + dy[k];
                int jnew = j + dx[k];
                if (jnew <= 5 && jnew >= 1 && inew >= 1 && inew <= 5)
                {
                    backup[inew][jnew] ^= 1;
                }
            }
        }
    }
    turn(i + 1);
}



void dfs(int u)   //枚举第一行
{
    if (u > 5)
    {
        turn(2);
        step--;
        return;
    }
    backup[1][u] = '1';
    step++;
    dfs(u + 1);
    backup[1][u] = '2';

    backup[1][u] = '0';
    dfs(u + 1);
    backup[1][u] = '2';
}



int main()
{
    scanf("%d", &n);
    while (n--)
    {
        step = 0;
        min = 10;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                scanf("%c", lamp[i][j]);
            }
        }
        memcpy(backup, lamp, sizeof(lamp));
        dfs(1);
        printf("%d\n", min);
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("%c", lamp[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}