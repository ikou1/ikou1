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
	printf("����ǰ��a = % d, b = % d\n", a, b);
	change(&a,&b);
	printf("������a = % d, b = % d\n", a, b);
}