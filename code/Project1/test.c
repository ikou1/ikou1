#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define time 60
int main()
{
	system("shutdown -s -t 60");
	printf("���ѣ�  ����Խ���%ds��ػ���\n", time);
	printf("�������롰�������˧������ȡ���ػ�!\n");
	char input[100] = { '\0' };
	while(1)
	{
		scanf("%s", input);
		if (strcmp(input, "�������˧") == 0)
		{
			system("shutdown -a");
			printf("��ϲ�㣡����ػ��ɹ�!");
			break;
		}
		else
		{
			printf("������󣡲�ҪˣС����Ŷ��\n");
		}
	}
	return 0;
}
