#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a)(a*a*a)
void clean()
{
	while (getchar() != '\n')
	{
		;
	}
}
void printx(int d)
{
	int a, b, c;
	a = d / 100;
	b = (d - 100 * a) / 10;
	c = (d - 100 * a - 10 * b);
	if (cube(a) + cube(b) + cube(c) == d)
	{
		printf("%d是水仙花数\n", d);
	}


}
int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		printx(i);
	}
	{
		printf("请重置你的密码");
		char arr1[15] = { 0 };
		char arr2[15] = { 0 };
		scanf("%c", arr1);
		clean;
		printf("请确认你的密码\n");
		clean;
		scanf("%c", arr2);
		clean;
		if (arr1 == arr2)
		{
			printf("重置成功\n");
		}
		else
		{
			printf("重置失败\n");
		}

	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
