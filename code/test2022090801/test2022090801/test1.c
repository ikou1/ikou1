#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define mult(x,y) ((x)*(y))
int main()
{
	{
		int a, b;
		scanf("%d%d",&a,&b);
		int c = mult(a,b);
		printf("%d\n", c);
	}
	{
		int m = 10;
		int* pm =&m;
		printf("%p\n,pm");
		*pm = 30;
		printf("%d\n", m);
	}
	return 0;
}