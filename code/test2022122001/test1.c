#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	char arr[20] = "\0";
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		scanf("%c", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
}