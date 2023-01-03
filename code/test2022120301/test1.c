#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int primejudge(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i <=sqrt(n); i++)
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
	int sign = 0;
	int count = 0;
	
	for (int i = 4; i <= 100; i += 2)
	{
	loop:
		if (sign)
		{
			sign = 0;
			continue;
		}
		
		for (int a = 2; a <= 100; a++)
		{
			for (int b = 2; b <= 100; b++)
			{

				if (i == a + b && primejudge(a) == 1 && primejudge(b) == 1)
				{
					printf("%4d=%4d+%4d", i, a, b);
					count++;
					sign = 1;
				}
				if (count == 4)
				{
					printf("\n");
					count = 0;
				}
				if (sign)
				{
					goto loop;
				}

			}
		}
	}
}