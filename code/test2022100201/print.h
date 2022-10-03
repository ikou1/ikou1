#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%2d   ", i, j, i * j);
		}
		printf("\n");
	}
}