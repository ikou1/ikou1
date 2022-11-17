#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int a,int b,int c)
{
	return  a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int maxcom(int m, int n)
{
	return (m % n == 0) ? n : maxcom(n, m % n);
}
int main()
{
	//  ()?():()     三目操作符
	int n, m;
	while (1)
	{
		scanf("%d%d", &m, &n);
		printf("m,n的公约数为%d", maxcom(m, n));
	}
	return 0;
}
