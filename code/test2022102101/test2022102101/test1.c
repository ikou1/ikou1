#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()    //打印菜单
{
	printf("*****************************************************************************************\n");
	printf("*******************************     1.PLAY      *****************************************\n");
    printf("*******************************     0.EXIT      *****************************************\n");
    printf("*****************************************************************************************\n");
}
int main()
{
	int input;
	/*system("color f5");*/
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>>>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}