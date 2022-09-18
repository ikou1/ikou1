#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int leap(int k)//1
{
	if (k % 400 == 0)
	{
		return 1;
	}
	else if (k % 100 != 0 && k % 4 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (leap(i) == 1)
		{
			printf("%dÄêÊÇÈòÄê\n", i);
			count++;
		}
		else
		{
			;
		}
	}
	printf("%d\n", count);
	return 0;
}