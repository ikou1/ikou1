#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define cube(a) (a*a*a)
int main()
{
	printf("�жϸ���λ���ǲ���ˮ�ɻ���");
	int x, a, b, c;
	scanf("%d/n", &x);
	a = x / 100;
	b = (x - 100 * a) / 10;
	c = x - 100 * a - 10 * b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	if (cube(a) + cube(b) + cube(c) == x)
	{
		printf("%d��ˮ�ɻ���", x);
	}
	else
	{
		printf("%d����ˮ�ɻ���", x);
	}
	return 0;
}