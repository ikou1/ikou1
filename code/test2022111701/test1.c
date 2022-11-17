#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
#include<assert.h>
void print(char a,int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", a);
	}
}
void rhombus(int n)
{
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		print(' ', ((n + 1) / 2 - i));
		print('*', 2*i - 1);
		print(' ', ((n + 1) / 2 - i));
		printf("\n");
	}
	for (int i = ((n + 1) / 2) - 1; i >= 1; i--)
	{
		print(' ', ((n + 1) / 2 - i));
		print('*', 2 * i - 1);
		print(' ', ((n + 1) / 2 - i));
		printf("\n");
	}
}
void uptri(int n)
{
	for (int i = 1; i <= n; i++)
	{
		print(' ', n - i);
		print('*', 2 * i - 1);
		print(' ', n - i);
		printf("\n");
	}
}
void downtri(int n)
{
	for (int i = n; i >= 1; i--)
	{
		print(' ', n - i);
		print('*', 2 * i - 1);
		print(' ', n - i);
		printf("\n");
	}
}
void lefttri(int n)
{
	for (int i = 1; i <= n; i++)
	{
		print(' ', n - i);
		print('*', i);
		printf("\n");
	}
	for (int i = n - 1; i >= 1; i--)
	{
		print(' ', n - i);
		print('*', i);
		printf("\n");
	}
}
void righttri(int n)
{
	for (int i = 1; i <= n; i++)
	{
		print('*', i);
		print(' ', n - i);
		printf("\n");
	}
	for (int i =n-1; i >=1; i--)
	{
		print('*', i);
		print(' ', n - i);
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d", &n);
 /*uptri(n);
 downtri(n);*/
	righttri(n);
}