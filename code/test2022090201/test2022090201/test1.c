#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 100;
	scanf("%d\n", &a);
	if (a <= b)
		printf("a小于等于100");
	else
		printf("a大于100");
	return 0;
}

