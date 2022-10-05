#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"
#include<stdio.h>
void reserve2(char* str)
{
	char tmp;
	tmp = *str;
	if (mystrlen(str) >= 2)
	{
		*str = *(str + mystrlen(str) - 1);
		*(str + mystrlen(str) - 1) = '\0';
		reserve2(str + 1);
		*(str + mystrlen(str) - 1) = tmp;
	}
}
