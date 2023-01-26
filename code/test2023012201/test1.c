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
	printf("*********************               ͨѶ¼               *************************************\n\n");
	int input;
	Contact con;
	initialize_contact(&con);
	do
	{
		menu();
		char input_name[20] = { '\0' };	
		printf("��ѡ��   :>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&con);
			break;
		case 2:
			if (con.num == 0)
			{
				printf("ͨѶ¼�ѿգ��޷�����ɾ��!\n");
				break;
			}
			printf("��������Ҫɾ�����˵�����   :>");
			scanf("%s", input_name);
			int pos = search_person(&con, input_name);
			delete_contact(&con, input_name);
			print_delete(pos);
			break;
		case 3:
			if (con.num == 0)
			{
				printf("ͨѶ¼�ѿգ��޷���ѯ��\n");
				break;
			}
			printf("��������Ҫ�����˵�����   :>\n");
			scanf("%s", input_name);
			search_contact(&con, input_name);
			break;
		case 4:
			if (con.num == 0)
			{
				printf("ͨѶ¼�ѿգ��޷��޸ģ�\n");
				break;
			}
			printf("����Ҫ�޸�˭����Ϣ?   :>\n");
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
				printf("ͨѶ¼�ѿ�,�޷�����\n");
				break;
			}
			int size = sizeof(con.data[0]);
			sort_contact(&con,con.data, size);
			break;
		}
		case 7:
			printf("���������Ļ..........\n");
			Sleep(2000);
			printf("��ճɹ���\n");
			Sleep(1000);
			system("cls");
			printf("*********************               ͨѶ¼               *************************************\n\n");
			break;
		case 0:
			printf("�����˳�ͨѶ¼..........\n");
			Sleep(2000);
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
		printf("\n\n\n");
	
	} while (input);
}