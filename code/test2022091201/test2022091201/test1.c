#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a) (a*a*a)
void printx(int d)
{
	int d = 0;
	int a, b, c;
	a = d / 100;
	b = (d - 100 * a) / 10;
	c = (d - 100 * a - 10 * b);
	if ("d==cube(a)+cube(b)+cube(c)")
	{
		printf("%d/n", d);
	}
	else
	{
		;
	}
}
int main()
{
	printf("请输入密码");
	char arr1[15] = { 0 };
	scanf("%c/n", arr1);
	while (getchar() != '\n')
	{
		;
	}
	printf("请确认密码(Y/N)");
	if (getchar() == 'Y')
	{
		printf("确认成功");
	}
	else
		printf("确认失败");
	{
		int x, a, b, c;
		a = x / 100;
		b = (x - 100 * a) / 10;
		c = (x - 100 * a - 10 * b);
		for (x = 100; x <= 999; x++)
		{
			printx(x);
		}
	}
	return 0;
}