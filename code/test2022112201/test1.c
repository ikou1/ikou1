#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int leapyear(int n)
{
	if (n % 4 == 0 && n % 100 != 0)
	{
		return 29;
	}
	if (n % 400 == 0)
	{
		return 29;
	}
	return 28;
}
int main()
{
	int year;
	scanf("%d", &year);
	printf("days of the FEB.: %d\n", leapyear(year));
}