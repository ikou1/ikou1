#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int reserve(int n)
{
	int x = 0;
	while (n != 0)
	{
		x = 10 * x + n % 10;
		n = n / 10;
	}
	return x;
}