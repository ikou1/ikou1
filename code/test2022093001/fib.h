#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 2;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		int i;
		for (i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}