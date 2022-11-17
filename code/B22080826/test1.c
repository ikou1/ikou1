#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int primejudge(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
	
		if (n % i == 0)
		{
			return 0;   
		}
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	if (primejudge(n))
	{
		printf("%d为质数", n);

	}
	else
	{
		printf("%d不是质数", n);
	}
}