#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c;
	/*c = a >= b ? b : a;*/
	/*int i;*/              //1.
	/*for (i = c; i >= 1;i--)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			printf("���Լ��Ϊ%d\n", i);
			break;
		}

	}*/
	/*while (c >= 1)              //2.
	{
		if ((a % c) == 0 && (b % c) == 0)
		{
			printf("���Լ��Ϊ%d\n", c);
			break;
		}
		c--;
	}*/
	//while (1)            //3.շת���
	//{
	//	if ((a % b )== 0)
	//	{
	//		printf("���Լ��Ϊ%d\n", b);
	//		break;
	//	}
	//	else
	//	{
	//		c = a % b;
	//		a = b;
	//		b = c;
	//	}
	//}
	  


	while (a % b)    //3.1շת����Ż�
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("���Լ��Ϊ%d\n", b);
	return 0;
}