#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr3[20] = { 0 };
	char arr4[] = "suzhi666";
	printf("请输入密码");
	int i;
	for (i = 1; i <= 3; i++)
	{
		scanf("%s", arr3);
		if (strcmp(arr3, "suzhi666") == 0)
		{
			printf("登陆成功");
			break;
		}
		else
		{
			if (i <= 2)
			{
				printf("密码错误，请重新输入\n");
			}
			else
			{
				break;
			}
		}
	}
		if (i == 3)
		{
			printf("三次密码均错误，按“enter”键退出程序");
		}
		return 0;
}