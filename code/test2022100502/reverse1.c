#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"
void reverse1(char* str)       //×Ö·û´®·´×ª1
{
	int left = 0;
	int right = mystrlen(str) - 1;
	char tmp;
	while (left < right)
	{
		tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}

}
//void reverse(char* str)
//{
//	int left = 0;
//	int right = mystrlen(str) - 1;
//	char tmp;
//	while (left <= right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}