#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a) a*a*a
void jishu(int x)
{
	if (x % 2)
	{
		printf("%d������\n", x);
	}
}
void select(int x)
{
	int a = x / 100;
	int b = (x - 100 * a) / 10;
	int c = x - 100 * a - 10 * b;
	if (x ==cube(a) + cube(b) + cube(c))
		printf("%d��ˮ�ɻ���\n", x);
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
			printf("��");
			break;
			}
			{
		case 2:
			printf("��");
			break;
			}
		default:
		{
			printf("˧");
			break;
		}
		}
	}
	return 0;
}