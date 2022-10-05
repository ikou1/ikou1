#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     //模拟strlen函数的实现
int mystrlen(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}