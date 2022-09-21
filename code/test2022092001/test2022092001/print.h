#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

//Àºøº ‰»Î1234£¨ ‰≥ˆ4 3 2 1 

