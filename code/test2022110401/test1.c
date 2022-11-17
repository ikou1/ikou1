#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Numberof1(int n)
{
	int count = 0;
	if (n >= 0)
	{
		while (n)
		{
			if (n % 2)
			{
				count++;
			}
			n /= 2;
		}
	}
	if (n < 0)
	{
		int i = 0;
		for (i = 0; i < 32; i++)
		{
			if ((n >> i) & 1)
			{
				count++;
			}
		}
	}
	return count;
}


int numberof1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;

}
int main()
{
	printf("%d %d\n", Numberof1(10),numberof1(10));
	printf("%d %d\n", Numberof1(14),numberof1(14));
	printf("%d %d\n", Numberof1(15), numberof1(15));
}