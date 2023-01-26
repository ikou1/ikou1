#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("*********************       1.ADD         2.DELETE       *************************************\n");
	printf("*********************       3.SEARCH      4.MODIFY       *************************************\n");
	printf("*********************       5.DISPLAY     6.SORT         *************************************\n");
	printf("*********************       7.CLEAR       0.EXIT         *************************************\n");
	return;
}
int main()
{
	printf("*********************               通讯录               *************************************\n\n");
	int input;
	Contact con;
	initialize_contact(&con);
	do
	{
		menu();
		char input_name[20] = { '\0' };	
		printf("请选择   :>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&con);
			break;
		case 2:
			if (con.num == 0)
			{
				printf("通讯录已空，无法继续删除!\n");
				break;
			}
			printf("请输入需要删除的人的姓名   :>");
			scanf("%s", input_name);
			int pos = search_person(&con, input_name);
			delete_contact(&con, input_name);
			print_delete(pos);
			break;
		case 3:
			if (con.num == 0)
			{
				printf("通讯录已空，无法查询！\n");
				break;
			}
			printf("请输入需要查找人的姓名   :>\n");
			scanf("%s", input_name);
			search_contact(&con, input_name);
			break;
		case 4:
			if (con.num == 0)
			{
				printf("通讯录已空，无法修改！\n");
				break;
			}
			printf("您想要修改谁的信息?   :>\n");
			scanf("%s", input_name);
			modify_contact(&con, search_person(&con, input_name));
			break;
		case 5:
			display_contact(&con);
			break;
		case 6:
		{
			if (con.num == 0)
			{
				printf("通讯录已空,无法排序！\n");
				break;
			}
			int size = sizeof(con.data[0]);
			sort_contact(&con,con.data, size);
			break;
		}
		case 7:
			printf("正在清空屏幕..........\n");
			Sleep(2000);
			printf("清空成功！\n");
			Sleep(1000);
			system("cls");
			printf("*********************               通讯录               *************************************\n\n");
			break;
		case 0:
			printf("正在退出通讯录..........\n");
			Sleep(2000);
			printf("退出成功\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
		printf("\n\n\n");
	
	} while (input);
}