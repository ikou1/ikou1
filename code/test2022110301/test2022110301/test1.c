#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<string.h>
size_t mystrlen( const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr1[20] = "abcdef";
	
	//char arr2 = NULL;
	/*printf("%d\n", mystrlen(arr1));*/
	//printf("%d\n", mystrlen(NULL));
	printf("%d\n", mystrlen(arr1));
	printf("%d\n", strlen(arr1));
}