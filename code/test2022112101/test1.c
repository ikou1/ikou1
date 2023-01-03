#define  _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int primejudge(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int count =0;
	int sign = 0;
	for (int i = 4; i <= 2000;i+=2)
	{
		for (int j = 2; j <=2000; j++)
		{
			
			for (int k = 2; k <=2000; k++)
			{
				if (j + k > i)
				{
					break;
				}
				if (j + k == i && primejudge(j) + primejudge(k) == 2)
				{
					sign = 1;
					if (count <= 2)
					{
						printf("%4d=%4d+%4d", i, j, k);
						printf(" ");
						count++;
					}
					else
					{
						printf("%4d=%4d+%4d", i, j, k);
						printf("\n");
						count = 0;
					}
					break;
				}
			}
			if (sign)
			{
				sign = 0;
				break;
			}
		}
	}
}