#define  _CRT_SECURE_NO_WARNINGS 1
#include"mystrlen.h"
void reserve1(char* str)
{
	int left = 0;
	int right = mystrlen(str)-1;
	char tmp;
	while (left <= right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
			left++;
			right--;
	}
}
