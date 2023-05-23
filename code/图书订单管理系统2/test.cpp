#define  _CRT_SECURE_NO_WARNINGS 1
#include"lib.h"
void menu()
{
	cout << "*********************                    图书订单管理系统          *************************************\n\n";
	cout << "*********************                 1.ADD         2.DELETE       *************************************\n";
	cout << "*********************                 3.SEARCH      4.MODIFY       *************************************\n";
	cout << "*********************                 5.DISPLAY     6.SORT         *************************************\n";
	cout << "*********************                 7.CLEAR       0.EXIT         *************************************\n";
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
		cin >> input;
		switch (input)
		{
		case add_lib:
		{
			lib_add(&lib);
			Sleep(2000);
			system("cls");
			break;
		}
		case delete_lib:
		{
			lib_delete(&lib);
			break;
		}
		case search_lib:
		{
			lib_search(&lib);


			break;
		}
		case modify_lib:
		{
			lib_modify(&lib);
			break;
		}
		case sort_lib:
		{
			if (lib.num == 0)
			{
				cout << "系统中订单为空，无法排序！\n";
				Sleep(2000);
				system("cls");
				break;
			}
			cout << "正在按顾客账号字节序排序......\n";
			qsort(lib.arr, lib.num, sizeof(information), book_sort);
			Sleep(2000);
			cout << "排序成功！\n";
			Sleep(2000);
			system("cls");
			break;
		}
		case display_lib:
		{
			lib_display(&lib);
			cout << "\n\n\n";
			break;
		}
		case clear_lib:
		{
			cout<<"正在清空屏幕..........\n";
			Sleep(2000);
			cout<<"清空成功！\n";
			Sleep(1000);
			system("cls");
			break;
		}
		case 0:
		{
			lib_destroy(&lib);
			cout<<"系统退出成功!\n";
			break;
		}
		default:
		{
			system("cls");
			cout<<"选择错误，请重新选择!\n\n\n";
		}
		}
	} while (input);
	return 0;
}
