#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include"bubble.h"
int main()
{
	int arr1[] = { 1,2,5,4,9,7,8,6,3 };
	int i;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble(arr1,sz);

	for (i = 0; i <= sz-1 ;i++)
	{
		printf("%d\n", arr1[i]);
	}
	return 0;
}