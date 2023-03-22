#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int* single_number(int* arr, int size)
//{
//	int* p = (int*)calloc(2, sizeof(int));
//	int x;
//	for (int i = 0; i < size; i++)
//	{
//		x ^= arr[i];
//	}
//	return p;
//}
int compare(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	qsort(arr, 10, 4,compare);
	for (int i = 0; i <=9; i++)
	{
		printf("%d ", arr[i]);
	}
}
