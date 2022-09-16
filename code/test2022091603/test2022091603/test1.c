#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	system("shutdown -s -t 300");
	printf("请注意！你的电脑将在5分钟后关机！\n");
	printf("若输入“我是猪”，即可取消关机\n");
	char input[20] = { 0 };
	again:
	scanf("%s", input);
	if (strcmp(input, "我是猪") ==0)
	{
		system("shutdown -a");
		printf("恭喜您取消了关机！");
	}
	else
	{
		goto again;
	}
	return 0;
}