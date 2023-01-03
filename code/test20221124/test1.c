#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[20][20] = { 0 };
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][0] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
}