#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"fib.h"
#include"hanoi.h"
int main()
{
	int a;
	scanf("%d", &a);
		printf("%d\n", fib(a));
		printf("%d\n", hanoi(a));
}