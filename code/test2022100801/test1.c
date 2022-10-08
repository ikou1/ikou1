#define  _CRT_SECURE_NO_WARNINGS 1
int digitsum(int n)
{

	if (n <= 9)
	{
		return n;
	}
	return (n % 10 + digitsum(n / 10));
}
#include<stdio.h>
#include"digitsum2.h"
#include"digitsum1.h"
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",digitsum2(n));
	printf("%d\n",digitsum1(n));


	return 0;
}
