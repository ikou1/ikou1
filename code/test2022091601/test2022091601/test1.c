#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c;
	c = a >= b ? b : a;
	/*int i;*/
	/*for (i = c; i >= 1;i--)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			printf("最大公约数为%d\n", i);
			break;
		}

	}*/
	while (c >= 1)
	{
		if ((a % c) == 0 && (b % c) == 0)
		{
			printf("最大公约数为%d\n", c);
			break;
		}
		c--;
	}

	return 0;
}