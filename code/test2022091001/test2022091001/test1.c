#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("�������������");
	char arr[15];
	scanf("%s", arr);
	while (getchar() != "\n")
	{
		;
	}
	if (getchar() == "\n")
	{
		getchar();

	}
	else
	{
		;
	}
	printf("������������루Y/N��");
	if (getchar()== "Y")
	{
		printf("ȷ�ϳɹ�");

	}
	else
	{
		printf("ȷ��ʧ��");
	}



	return 0;
}