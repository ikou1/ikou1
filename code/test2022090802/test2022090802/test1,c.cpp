#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void MAX(int x, int y,int z)
{
	int max = x >= y ? x : y;
	max = max >= z ? max : z;
	printf("���ֵΪ%d\n", z);
}
int main()
{
	{
		int a = 10;
		printf("%p\n", &a);
		int* pa = &a;
		*pa = 30;
		printf("%d\n", a);
	}	
	{
		printf("�������������ֵ");
		int a, b, c;
		scanf("%d%d%d", &a,&b,&c);
		 MAX(a, b, c);
	}
	{
		printf("���������Ľϴ�ֵ");
		int a, b;
		scanf("%d%d", &a, &b);
		if (a >= b)
			printf("�ϴ�ֵΪ%d\n",a);
		else
			printf("�ϴ�ֵΪ%d\n",b);



	}






	return 0;
}
