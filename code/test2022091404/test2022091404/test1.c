#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr3[20] = { 0 };
	char arr4[] = "suzhi666";
	printf("����������");
	int i;
	for (i = 1; i <= 3; i++)
	{
		scanf("%s", arr3);
		if (strcmp(arr3, "suzhi666") == 0)
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			if (i <= 2)
			{
				printf("�����������������\n");
			}
			else
			{
				break;
			}
		}
	}
		if (i == 3)
		{
			printf("������������󣬰���enter�����˳�����");
		}
		return 0;
}