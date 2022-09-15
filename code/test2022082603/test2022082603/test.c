#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	{

		int a = 0;
		int b = 0;
		int c = 0;
		scanf("%d%d%d", &a, &b, &c);
		int sum = 0;
		sum = a + b + c;
		printf("sum=%d", sum);
	}
	{
		double e = 0;
		double d = 0;
		scanf("%lf%lf", &e, &d);
		double sum1 = 0;
		sum1 = e + d;
		printf("sum1=%lf ", sum1);
	}
	return 0;

}





