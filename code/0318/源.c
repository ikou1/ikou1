#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int n = 14;
int used[20] = { 0 };   //1-used     0-unused
int ever[20] = { 0 };
int k;
int answer = 0;


//void check2(int k, int a, int c)
//{
//    int b = n * c - a * c;
//    if (b % c != 0)
//    {
//        return;
//    }
//    int tmp;
//    int times = 0;
//    int record = b;
//    if (a == 0 || b == 0 || c == 0)
//    {
//        return;
//    }
//    while (b)
//    {
//        tmp = b % 10;
//        if (ever[tmp] == 1)
//        {
//            memset(ever, 0, sizeof(ever));
//            return;
//        }
//        ever[tmp] = 1;
//        if (tmp == 0 || used[tmp] == 1)
//        {
//            memset(ever, 0, sizeof(ever));
//            return;
//        }
//        b = b / 10;
//        times++;
//    }
//    memset(ever, 0, sizeof(ever));
//    if (k == 9 - times)
//    {
//        printf("k=%d  a=%d   b=%d   c=%d\n",k, a, record, c);
//        answer++;
//        return;
//    }
//    return;
//}
//
//
//void check1(int k, int a, int c)
//{
//    int b = n * c - a * c;
//
//    if (!a || !b || !c)return;
//
//    memcpy(ever, used, sizeof(used));
//    while (b)
//    {
//        int t = b % 10;
//        b /= 10;
//        if (!t || ever[t])return;
//        ever[t] = 1;
//    }
//    for (int i = 1; i <= 9; i++)//
//        if (!ever[i])
//            return;
//    answer++;
//}
//
//
//
//void dfs_c(int k, int a, int c)
//{
//    if (k >= 9)
//    {
//        return;
//    }
//    if (c)
//    {
//        check2(k, a, c);
//    }
//    for (int i = 1; i <= 9; i++)
//    {
//        if (!used[i])
//        {
//            used[i] = 1;
//            dfs_c(k + 1, a, c * 10 + i);
//            used[i] = 0;
//        }
//    }
//}
//
//
//void dfs_a(int k, int a)    //k-numbers of used number  a-val of a
//{
//    if (k >= 9 || a >= n)
//    {
//        return;
//    }
//    if (a)
//    {
//        dfs_c(k, a, 0);
//    }
//    for (int i = 1; i <= 9; i++)
//    {
//        if (!used[i])
//        {
//            used[i] = 1;
//            dfs_a(k + 1, a * 10 + i);
//            used[i] = 0;
//        }
//    }
//}
 


//fengjiexian
void check(int k, int a, int b, int c)
{
    if (b % c != 0 || n != a + b / c || k != 9)
    {
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!used[i])
        {
            return;
        }
    }
    answer++;

}




void dfs_c(int k, int a, int b, int c)
{
    if (a==0||b==0)
    {
        return;
    }

    if (c)
    {
        check(k, a, b, c);
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            dfs_c(k + 1, a, b, c * 10 + i);
            used[i] = 0;
        }
    }
}


void dfs_b(int k, int a, int b)
{
    if (k >=9||a==0)
    {
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            dfs_c(k + 1, a, b * 10 + i, 0);
            dfs_b(k + 1, a, b * 10 + i);
            used[i] = 0;
        }
    }
}







void dfs_a(int k, int a)      //k-numbers of used numbers   a-values of a
{
    if (k >= 9|| a >= n)
    {
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!used[i])
        {
            used[i] = 1;
            dfs_b(k + 1, a * 10 + i, 0);
            dfs_a(k + 1, a * 10 + i);
            used[i] = 0;
        }
    }
}




int main()
{
    scanf("%d", &n);
    dfs_a(0, 0);
    printf("%d", answer);
    //check(9,9,6435,1287);
    return 0;
}
