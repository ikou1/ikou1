#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest);
	assert(src);
	char* dest1 = (char*)dest;
	char* src1 = (char*)src;
	if (dest1 <= src1)
	{
		for (int i = 0; i < count; i++)
		{
			dest1[i] = src1[i];
		}
		return;
	}
	else
	{
		for (int i = count - 1; i >= 0; i--)
		{
			dest1[i] = src1[i];
		}
		return;
	}
	return;
}
void psum(char* str)
{
	str++;
}
int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memmove(arr, arr+2,20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*int a = 2;
	while (a--)
	{
		printf("1");
	}*/
	/*int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		perror("sorry");
	}
	free(p);*/
	char* str = (char*)malloc(100);
	
	psum(str);

}