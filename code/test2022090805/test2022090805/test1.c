#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define cube(a) a*a*a
void select(int x)
{
	int a = x / 100;
	int b = (x - 100 * a) / 10;
	int c = x - 100 * a - 10 * b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	if (x = cube(a) + cube(b) + cube(c))
	{
		printf("%d是水仙花数", x);
	}
	else
	{
		return 0;
	}
	}
int main()
{
	select(100);


}