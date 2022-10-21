#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h> 
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
