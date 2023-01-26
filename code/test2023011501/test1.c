#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<memory.h>
#include<errno.h>
#include<assert.h>

void* my_memcpy1(void* dest, const void* rec, size_t len)
{
	assert(dest);
	assert(rec);
	char* dest1 = (char*)dest;
	char* rec1 = (char*)rec;
	for (size_t i = 0; i < len; i++)
	{
		*(dest1+i) = *(rec1+i);
	}
	return dest;
}


void* my_memmove(void* dest, const void* rec, size_t len)
{
	assert(dest);
	assert(rec);
	char* dest1 = (char*)dest;
	char* rec1 = (char*)rec;
	if (dest <= rec)
	{
		for (int i = 0; i < (int)len; i++)
		{
			*(dest1 + i) = *(rec1 + i);
		}
	}
	else
	{
		for (int i = len - 1; i >= 0; i--)
		{
			*(dest1 + i) = *(rec1 + i);
		}
	}
	return dest;
}


int main()
{
	char arr1[20] = "xhy is handsome";
	/*int i = 0;
	while (arr1[i])
	{
		if (islower(arr1[i]))
		{
			arr1[i] = toupper(arr1[i]);
		}
		i++;
	}
	printf("%s\n", arr1);*/
	char arr2[20] = "\0";
	/*my_memcpy1(arr2, arr1, 15);
	printf("%s\n", arr2);*/
	int arr3[5] = { 1,2,3,4,5 };
	int arr4[5] = {0};
	/*my_memmove(arr3+2, arr3, 12);*/
	/*memcpy(arr3, arr3+2, 12);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}*/
	printf("%d", sizeof(double));
}

