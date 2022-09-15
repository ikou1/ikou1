#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入你的密码");
	char arr[15];
	scanf("%s", arr);
	while (getchar() != "\n")
	{
		;
	}
	if (getchar() == "\n")
	{
		getchar();

	}
	else
	{
		;
	}
	printf("请输入你的密码（Y/N）");
	if (getchar()== "Y")
	{
		printf("确认成功");

	}
	else
	{
		printf("确认失败");
	}



	return 0;
}