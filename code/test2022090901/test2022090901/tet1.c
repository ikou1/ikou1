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
			printf("xhy真帅%d\n", a);
			a=a++;
		}
		if (a>max)
		{
			printf("xhy帅的不要不要的\n");
		}
		{
			int b = 0;
			int c = 0;
			printf("求两数乘积\n");
			scanf("%d%d", &b,&c);
			int d = mult(b, c);
			printf("两数乘积为%d\n", d);
		}
		{
			printf("求三个数的最大值");
			int e, f, g;
			scanf("%d%d%d", &e, &f,&g);
			int MAX = e>=f?e:f;
			MAX = MAX >= g ? MAX : g;
			printf("这三个数的最大值为%d\n", MAX);
		}
		{
			printf("求两数的商");
			float h, i;
			scanf("%d%d", &h, &i);
			float j;
			j = div(h, i);
			printf("两数的商为%f\n", j);
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
