#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
char* LeftRotateString(char* str, int n)
{
	int len = strlen(str);
	for (int i = 0; i <= n - 1; i++)
	{
		str[len + i] = str[i];
	}
	for (int i = 0; i < len; i++)
	{
		str[i] = str[i + n];
	}
	str[len] = '\0';
	return str;
}

int judge_LeftRotateString(char* str1, char* str2)
{
	char arr3[100];
	strcpy(arr3, str1);
	for (int i = 0; i < 100; i++)
	{
		if (strcmp(str1, str2) == 0)
		{
			return 0;
		}
		if (strcmp(str2, LeftRotateString(arr3, 1)) == 0)
		{
			return i+1;
		}
	}
	return -1;
}

int main()
{
	while (1)
	{
		char arr[100] = { '\0' };
		char arr2[100] = { '\0' };
		scanf("%s", arr);
		scanf("%s", arr2);
		if (judge_LeftRotateString(arr, arr2) == -1)
		{
			printf("%s无法由%s旋转得到\n", arr2, arr);
		}
		else
		{
			if (judge_LeftRotateString(arr, arr2) <= strlen(arr) - judge_LeftRotateString(arr, arr2))
			{
				printf("%s可由%s左旋%d个字符得到\n", arr2, arr, judge_LeftRotateString(arr, arr2));
			}
			else
			{
				printf("%s可由%s右旋%d个字符得到\n", arr2, arr, strlen(arr)-judge_LeftRotateString(arr, arr2));
			}
		}
	}
	return 0;
}