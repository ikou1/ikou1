#define  _CRT_SECURE_NO_WARNINGS 1
#include"menu.h"
#include"stdio.h"
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			/*game();*/
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
