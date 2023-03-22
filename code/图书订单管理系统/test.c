#define  _CRT_SECURE_NO_WARNINGS 1
#include"lib.h"
void menu()
{
	printf("*********************                    图书订单管理系统          *************************************\n\n");
	printf("*********************                 1.ADD         2.DELETE       *************************************\n");
	printf("*********************                 3.SEARCH      4.MODIFY       *************************************\n");
	printf("*********************                 5.DISPLAY     6.SORT         *************************************\n");
	printf("*********************                 7.CLEAR       0.EXIT         *************************************\n");
	return;
}

int main()
{
	int input;
	lib lib;
	lib_initialize(&lib);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case add:
		{
			lib_add(&lib);
			Sleep(2000);
			system("cls");
			break;
		}
		case delete:
		{
			system("cls");
			break;
		}
		case search:
		{


			break;
		}
		case modify:
		{


			break;
		}
		case sort:
		{


			break;
		}
		case display:
		{
			lib_display(&lib);
			printf("\n\n\n");
			break;
		}
		case clear:
		{
			printf("正在清空屏幕..........\n");
			Sleep(2000);
			printf("清空成功！\n");
			Sleep(1000);
			system("cls");
			break;
		}
		case 0:
		{
			lib_destroy(&lib);
			printf("系统退出成功!\n");
			break;
		}
		default:
		{
			printf("选择错误，请重新选择!\n");
		}
		}
	} while (input);
}
