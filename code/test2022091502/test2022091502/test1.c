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
	printf("������һ����a��ʹ��ϵͳ����һ��0��a֮����������\n");
	scanf("%d", &max);
	int random = rand() % (max + 1);
	printf("����0��%d֮���һ����\n", max);
	int guess;
	int x = 0;
	int y = max;
	do
	{
		scanf("%d", &guess);
		while (guess > y || guess < x)
		{
			printf("����%d��%d֮���һ����\n", x, y);
			scanf("%d", &guess);
		}
		if (guess < random)
		{
			while ((guess > y) ||(guess < x))
			{
				printf("����%d��%d֮���һ����\n", x, y);
				scanf("%d", &guess);
			}
			x = guess + 1;
			printf("��С�ˣ�����%d��%d֮���һ����\n", x, y);
		}
		else if (guess > random)
		{
			while (guess > y || guess < x)
			{
				printf("����%d��%d֮���һ����\n", x, y);
				scanf("%d", &guess);
			}
			y = guess - 1;
			printf("�´��ˣ����� % d�� % d֮���һ����\n", x, y);
		}
		else
		{
			printf("��ϲ�㣬��¶�����\n");
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
		printf("��ѡ��:>");
		Sleep(1000);
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			Sleep(1000);
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
//����һ���޸Ĳ���