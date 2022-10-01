#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void table()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d   ", i, j, i * j);
		}
		printf("\n");
	}
}