#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max 10
int mult(int x,int y)
{
	int z = 0;
	z = x*y;
	return z;
}
#define div(x,y) ((x)/(y))
int main()
{
	int a = 1;
		while (a<=max)
		{
			printf("xhy��˧%d\n", a);
			a=a++;
		}
		if (a>max)
		{
			printf("xhy˧�Ĳ�Ҫ��Ҫ��\n");
		}
		{
			int b = 0;
			int c = 0;
			printf("�������˻�\n");
			scanf("%d%d", &b,&c);
			int d = mult(b, c);
			printf("�����˻�Ϊ%d\n", d);
		}
		{
			printf("�������������ֵ");
			int e, f, g;
			scanf("%d%d%d", &e, &f,&g);
			int MAX = e>=f?e:f;
			MAX = MAX >= g ? MAX : g;
			printf("�������������ֵΪ%d\n", MAX);
		}
		{
			printf("����������");
			float h, i;
			scanf("%d%d", &h, &i);
			float j;
			j = div(h, i);
			printf("��������Ϊ%f\n", j);
		}
		{
			int m = 10;
			int* pm = &m;
			printf("%p\n,pm");
			*pm= 20;
			printf("%d\n", m);
		}
		
		
		
		
		
		
		
		
		
		return 0;
}
