#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a = 9.0f;
	int* p = (int* )(&a);
	printf("%d\n", a);
	printf("%d\n", *p);
}