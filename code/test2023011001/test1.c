#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	int arr1[5] = { 1,2,3,4,5 };
	char* arr2[3] = { "work","at","alibaba" };
	char arr3[5] = "abcde";
	for (int i = 0; i < 3; i++)
	{
		printf("%p\n", &arr2[i]);
	}
	char** p = arr2;
	printf("p=%p\n", p);
	printf("p=%p\n", p+1);
	printf("p=%p\n", p+2);
	return 0;
}