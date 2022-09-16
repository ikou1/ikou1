#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void prime(int k)   //素数判断         （还有一种方法为用2~k-1的数试除k）
//{
//	int  i;
//	int count = 0;
//	for (i = (k-1); i >= 1; i--)
//	{
//		if ((k % i) == 0)
//		{
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	if (count == k - 2)
//	{
//		printf("%d是素数\n", k);
//	}
//}
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		prime(i);
//	}
//	return 0;
//}
void primepro(int k)     //素数判断器优化：若k为合数 则2~sqrt（k）中一定有k的因数
{
	int i;
	for (i = 2; i <= sqrt(k); i++)
	{
		if (k % i == 0)
		{
			break;
		}
		else
		{
			printf("%d是素数\n", k);
		}
	}


}