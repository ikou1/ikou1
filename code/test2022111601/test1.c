#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void reverse1(char arr[],int n)
{
	int left = 0;
	int right = n - 1;
	while (right>left)
	{
		char tmp;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		right--;
		left++;
	}
}
void reverse2(char*str)
{
	int n = strlen(str);
		char tmp;
		tmp = *str;
		*str = *(str + n - 1);
		*(str + n - 1) = '\0';
		while (strlen(str) > 2)
		{
			reverse2(str + 1);
		}
		*(str + n - 1) = tmp;
}
void print(char*str)
{
	printf("%d",strlen(str));
}
int main()
{
	char arr[5] = "abcde";
	/*reverse1(arr, sizeof(arr - 1));*/
	printf("%s", arr);
	print(arr);
	/*reverse2(arr);
	printf("%s", arr);
}*/
}