#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat1(char*dest,const char*rec)
{
	assert(dest);
	assert(rec);
	char* start = dest;
	int len = strlen(dest);
	while (*rec)
	{
		*(dest + len)= *(rec);
		dest++;
		rec++;
	}
	*(dest + len-1) = '\0';
	return start;

}

char* my_strcat2(char* dest, const char* rec)
{
	assert(dest);
	assert(rec);
	char* start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *rec++)
	{
		;
	}
	*(dest-1) = '\0';
	return start;
}

int my_strcmp1(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);
	int len = len1 < len2 ? len1 : len2;
	for (int i = 0; i <= len; i++)
	{
		if (str1[i] == str2[i])
		{
			;
		}
		else if(str1[i]>str2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}



int my_strcmp2(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 =='\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


char* my_strstr1(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	if (strlen(str1) < strlen(str2))
	{
		return NULL;
	}
	if (strcmp(str1, str2) == 0)
	{
		return str1;
	}
	while (*str1)
	{
			if (strncmp(str1, str2, strlen(str2)) == 0)
			{
				return str1;
			}
			else
			{
				str1++;
			}
	}
	return NULL;
}




char* my_strstr2(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	if (strlen(str1) < strlen(str2))
	{
		return NULL;
	}
	if (strcmp(str1, str2) == 0)
	{
		return str1;
	}
	while (strlen(str1)>=strlen(str2))
	{
		if (*str1 == *str2)
		{
			const char* cp1 = str1;
			const char* cp2 = str2;
			while (*cp1)
			{
				if (*cp1 == *cp2)
				{
					cp1++;
					cp2++;
				}
				else
				{
					str1++;
					break;
				}
				if (*cp2=='\0')
				{
					return str1;
				}
			}
		}
		else
		{
			str1++;
		}
	}
	return NULL;
}


int main()
{
	//char arr1[20] = "xhy ";
 //   char arr2[20]= "handsome";
	///*printf("%s\n",strcat(arr1, arr2));*/
	//printf("%s\n",my_strcat1(arr1, arr2));
	char arr1[20] = "bbbccbcc";
	char arr2[20] = "bbc";
	/*printf("%s\n", my_strcat1(arr1, arr2));*/
	/*printf("%s\n", my_strcat2(arr1, arr2));*/
	/*printf("%d\n", my_strcmp2(arr1, arr2));*/
	printf("%s\n",my_strstr2(arr1,arr2));
}
