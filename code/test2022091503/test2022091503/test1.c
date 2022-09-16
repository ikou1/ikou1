#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%%d%d", &a, &b, &c);
	int max = a >= b ? a : b;
	max = max >= c ? max : c;
	int min = a <= b ? a : b;
	int min = min <= c ? min : c;


	return 0;
}