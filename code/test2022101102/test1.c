#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"transk1k2.h"
int main()
{
	int n, k1, k2;
	printf("�밴����������n,�����ڵĽ���k1��������Ҫת��Ϊ�Ľ���k2");
	scanf("%d%%d%d", &n, &k1, &k2);
	printf("%d\n",transk1k2(n, k1, k2));
}