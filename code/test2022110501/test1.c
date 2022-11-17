#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int m, n;
	scanf("%d%d", &m, &n);
	int i = 0;
	int a = 1;
 int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((a &(m >> i)) !=( a &(n >> i)))
		{
			count++;
		}
	}
	printf("%d",count);*/
	
		double C, F;
		scanf("%lf",& F);
		C = 5 * (F - 32) / 9;
		printf("%lf", C);
		return 0;
	
}