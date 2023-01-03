#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void print(char a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", a);
	}
}

int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		print(' ', i - 1);
		print('*', 11 - 2 * i);
		print(' ', i - 1);
		if (i <= 4)
		{
			printf("\n");
		}

	}
}