#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void max(int x, int y, int z)
{
	int a;
	a = x >= y ? x : y;
	a = a >= z ? a : z;
	printf("最大值为%d\n", a);
}
#define add(x,y) ((x)+(y))
struct person
{
	char name[10];
	int age;
	float score;
};





	int main()
{
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		max(a, b, c);
	}
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if (a >= b)
		{
			printf("最大值为%d\n", a);
		}
		else
		{
			printf("最大值为%d\n", b);
		}
	}
	{
		struct person xhy = { "徐昊昀",18,100 };
		printf("%s\n%d\n%3f\n", xhy.name, xhy.age, xhy.score);
		struct person* pperson = &xhy;

	}
	





	return 0;
}