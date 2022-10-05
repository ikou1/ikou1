#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>                  //×Ö·û´®·´×ª2
#include"mystrlen.h"
void reverse2(char* str)
{
	char tmp;
	tmp = *str;
	if (mystrlen(str) >= 2)
	{
		*str = *(str + mystrlen(str) - 1);
		*(str + mystrlen(str) - 1) = '\0';
		reverse2(str + 1);
		*(str + mystrlen(str) - 1) = tmp;
	}
}
