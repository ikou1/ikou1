#define  _CRT_SECURE_NO_WARNINGS 1
#include"lib.h"
void menu()
{
	cout << "*********************                    ͼ�鶩������ϵͳ          *************************************\n\n";
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
				cout << "ϵͳ�ж���Ϊ�գ��޷�����\n";
				Sleep(2000);
				system("cls");
				break;
			}
			cout << "���ڰ��˿��˺��ֽ�������......\n";
			qsort(lib.arr, lib.num, sizeof(information), book_sort);
			Sleep(2000);
			cout << "����ɹ���\n";
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
			cout<<"���������Ļ..........\n";
			Sleep(2000);
			cout<<"��ճɹ���\n";
			Sleep(1000);
			system("cls");
			break;
		}
		case 0:
		{
			lib_destroy(&lib);
			cout<<"ϵͳ�˳��ɹ�!\n";
			break;
		}
		default:
		{
			system("cls");
			cout<<"ѡ�����������ѡ��!\n\n\n";
		}
		}
	} while (input);
	return 0;
}
