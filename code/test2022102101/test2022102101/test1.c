#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()    //��ӡ�˵�
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
		printf("��ѡ��>>>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}