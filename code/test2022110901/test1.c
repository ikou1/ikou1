#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<assert.h>
int primejudge(int n)
{
	if (n ==1)
	{
		return 0;   //0表示不为质数
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return  0;    //0表示不为质数
		}
	}
	return 1;          //表示为质数
}
int maxcom(int m, int n)
{
	return (m % n == 0) ? n : maxcom(n, m % n);
}

int main()
{
	/*int mark = 0;
	for(int k=4;k<=2000;k+=2)
	{
		mark = 0;
		for (int i = 1; i <= 2000; i ++)
		{
			if (mark)
			{
				break;
			}

			for (int j = 1; j <= 2000; j ++)
			{
				if (mark)
			 {
					break;
			 }
				if (i == 1)
				{
					break;
				}
				if (i + j == k&& primejudge(i) && primejudge(j))
				{
					printf("%d=%d+%d\n", k, i, j);
					mark = 1;
				}

			}
		}
		}
	return 0;*/
	int n, m;
	while (1)
	{
		scanf("%d%d", &m, &n);
		printf("%d", maxcom(m,n));
	}
}
	