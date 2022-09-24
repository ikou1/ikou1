#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"fib.h"
#include"reserve.h"
#include"print.h"
int main()
{
	int a,b;
	scanf("%d",&a);
	printf("%d\n", fib(a));
	scanf("%d", &b);
	print(reserve(b));
	return 0;
}