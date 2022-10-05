#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"
#include"reserve1.h"
#include"reserve2.h"
int main()
{
	char arr1[20];
	scanf("%s", arr1);
	printf("%d\n", mystrlen(arr1));
	reserve1(arr1);
	printf("%s\n", arr1);
	reserve2(arr1);
	printf("%s\n", arr1);

	return 0;
}