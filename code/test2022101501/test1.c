
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	long long x = 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19 * 19;
	long long y = x % 6905159;
	printf("%lld", y);

}
