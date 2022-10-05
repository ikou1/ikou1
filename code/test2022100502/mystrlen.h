#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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