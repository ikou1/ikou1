#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int* a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("交换前：a = % d, b = % d\n", a, b);
	change(&a,&b);
	printf("交换后：a = % d, b = % d\n", a, b);
}