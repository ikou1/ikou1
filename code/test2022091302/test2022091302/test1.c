#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial(int n)
{
	int i;
	int fac = 1;
	for (i = 1;i <= n; i++)
	{
		fac = i * fac;
	}
	return fac;
}
int factorialsum(int n)
{
	int i;
	int facsum = 0;
	for (i = 0; i <= n; i++)
	{
		facsum = facsum + factorial(i);
	}
	return facsum;
}
//int main()
//{
//	int sum = 0;
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		sum = sum + factorial(i);
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d的阶乘为%d,%d的阶乘和为%d\n", a, factorial(a), a,factorialsum(a));
//	return 0;
//}
//int main()
//{
//	int i, n;
//	int fac = 1;
//	int sum = 1;
//	scanf("%d", &n);
//	if (n != 0)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			fac *= i;
//			sum = sum + fac;
//
//
//		}
//	}
//	else
//	{
//		sum = 1;
//		fac = 1;
//	}
//	printf("%d\n%d\n", sum, fac);
//}
 