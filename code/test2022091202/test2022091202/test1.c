#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a)(a*a*a)
void clean()
{
	while (getchar() != '\n')
	{
		;
	}
}
void printx(int d)
{
	int a, b, c;
	a = d / 100;
	b = (d - 100 * a) / 10;
	c = (d - 100 * a - 10 * b);
	if (cube(a) + cube(b) + cube(c) == d)
	{
		printf("%d��ˮ�ɻ���\n", d);
	}


}
int main()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		printx(i);
	}
	{
		printf("�������������");
		char arr1[15] = { 0 };
		char arr2[15] = { 0 };
		scanf("%c", arr1);
		clean;
		printf("��ȷ���������\n");
		clean;
		scanf("%c", arr2);
		clean;
		if (arr1 == arr2)
		{
			printf("���óɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}

	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
