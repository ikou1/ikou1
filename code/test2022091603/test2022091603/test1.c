#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	system("shutdown -s -t 300");
	printf("��ע�⣡��ĵ��Խ���5���Ӻ�ػ���\n");
	printf("�����롰������������ȡ���ػ�\n");
	char input[20] = { 0 };
	again:
	scanf("%s", input);
	if (strcmp(input, "������") ==0)
	{
		system("shutdown -a");
		printf("��ϲ��ȡ���˹ػ���");
	}
	else
	{
		goto again;
	}
	return 0;
}