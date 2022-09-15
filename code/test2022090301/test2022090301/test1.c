#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 10
int add(int x,int y)
{
	
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int c = 1;
	while (c<= MAX)
	{
		printf("徐昊昀真帅啊%d\n", c);
		c= c++;
	}
	if (c> MAX)
	{
		printf("徐昊昀已经帅过头了");

	}
	{
		int e = 0;
		int b = 0;
		scanf("%d%d", &e, &b);
		int sum = add(e, b);
		printf("%d\n", sum);
	}
	{
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int i = 0;
		while (i < MAX)
		{
			printf("kirito%d\n", arr[i]);
			i = i++;

		}
		{
			if (i >= MAX)
				printf("stop");
		}
	}
	






	return 0;
}