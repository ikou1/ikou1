#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* username(char* str)
{
	int len = strlen(str);
	int i = 0;
	int j = 0;
	while (i <= strlen(str) - 1)
	{
		if ((str[i]) >= 'A' && (str[i] <= 'Z') || (str[i] >= 'a' && str[j] <= 'z'))   //为字母则赋值
		{
			str[j++] = str[i++];
		}
		else
		{
			i++;
		}
	}
	int k = 0;
	int m = j - 1;
	for (j = 0; j <= m; j += 2)
	{
		str[k] = str[j];
		k++;
	}
	str[k] = '\0';
	return str;
}


char* password(char* str)
{
	int len = strlen(str);
	int i = 0; int j = 0;
	while (i <= strlen(str) - 1)
	{
		if (str[i] >= '0' && str[i] <= '9')      //为数字则赋值
		{
			str[j++] = str[i++];
		}
		else
		{
			i++;
		}
	}
	int k = 0;
	int m = j - 1;
	for (j = 1; j <= m; j += 2)
	{
		str[k] = str[j];
		k++;
	}
	str[k] = '\0';
	return str;
}
int main()
{
	char arr1[20] = { '\0' };
	char arr2[20] = { '\0' };
	printf("请输入字符串1\n");
	scanf("%s", arr1);
	printf("请输入字符串2\n");
	scanf("%s", arr2);
	printf("用户名为%s\n", username(arr1));
	printf("密码为%s\n", password(arr2));
}
