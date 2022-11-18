#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void print(char a,int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", a);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int sum = n;
	while (n >= 2)
	{
		sum+=n / 2;
		n = n / 2 + n % 2;

	}
	printf("%d", sum);
}