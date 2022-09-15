#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void menu()
{
	printf("*******************************************************************************\n");
	printf("********************************     1.PLAY     *******************************\n");
	printf("********************************     0.EXIT     *******************************\n");
	printf("*******************************************************************************\n");
}
void game()
{
	int max;
	printf("请输入一个数a，使得系统生成一个0～a之间的随机整数\n");
	scanf("%d", &max);
	int random = rand() % (max + 1);
	printf("请在0～%d之间猜一个数\n", max);
	int guess;
	int x = 0;
	int y = max;
	do
	{
		scanf("%d", &guess);
		while (guess > y || guess < x)
		{
			printf("请在%d～%d之间猜一个数\n", x, y);
			scanf("%d", &guess);
		}
		if (guess < random)
		{
			while ((guess > y) ||(guess < x))
			{
				printf("请在%d～%d之间猜一个数\n", x, y);
				scanf("%d", &guess);
			}
			x = guess + 1;
			printf("猜小了，请在%d～%d之间猜一个数\n", x, y);
		}
		else if (guess > random)
		{
			while (guess > y || guess < x)
			{
				printf("请在%d～%d之间猜一个数\n", x, y);
				scanf("%d", &guess);
			}
			y = guess - 1;
			printf("猜大了，请在 % d～ % d之间猜一个数\n", x, y);
		}
		else
		{
			printf("恭喜你，你猜对啦！\n");
		}
	} while (guess != random);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择:>");
		Sleep(1000);
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			Sleep(1000);
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
//这是一个修改测试