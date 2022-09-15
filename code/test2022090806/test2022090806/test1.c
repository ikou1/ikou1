#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a) a*a*a
void jishu(int x)
{
	if (x % 2)
	{
		printf("%d是奇数\n", x);
	}
}
void select(int x)
{
	int a = x / 100;
	int b = (x - 100 * a) / 10;
	int c = x - 100 * a - 10 * b;
	if (x ==cube(a) + cube(b) + cube(c))
		printf("%d是水仙花数\n", x);
}
int main()
{
	{
		int i;
		for (i = 100; i < 1000; i++)
		{
			select(i);
		}
	}
	{
		int i;
		for (i = 0; i < 10; i++)
		{
			jishu(i);
		}
	}
	{
		int i;
		scanf("%d", &i);
		switch (i)
		{
			{
		case 1:
			printf("我");
			break;
			}
			{
		case 2:
			printf("真");
			break;
			}
		default:
		{
			printf("帅");
			break;
		}
		}
	}
	return 0;
}