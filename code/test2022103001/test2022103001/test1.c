#define  _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//void mystrcpy(arr2, arr1)
//{
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//
//}
int main()
{
	float x = 2.5;
	float y = 4.7;
	int a = 7;
	printf("%f", x + a % 3 * (int)(x + y) % 2 / 4);


}