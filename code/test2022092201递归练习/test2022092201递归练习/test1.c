#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"
#include"factorial.h"
int main()
{
	char arr1[20] = { 0 };
	scanf("%s", arr1);
	printf("%d\n", mystrlen(arr1));
	int n;
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	return 0;
}