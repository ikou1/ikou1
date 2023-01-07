#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef int(*intpointer)(int, int);
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Calculate(intpointer p,int x,int y)
//{
//	return ((*p)(x, y));
//}
//int main()
//{
//	int input = 0;
//	printf("INPUT input!\n");
//	scanf("%d", &input);
//	intpointer arr[3] = { NULL,&Add,&Sub };
//	int ret = 0;
//	int x, y;
//	printf("INPUT x y!\n");
//	scanf("%d %d", &x, &y);
//	if (input > 0 && input <= 3)
//	{
//		ret = Calculate(arr[input], x, y);
//		printf("结果是%d\n", ret);
//	}
//	else if (input == 0)
//	{
//		printf("退出\n");
//	}
//	else
//	{
//		printf("ERROR!\n");
//	}
//}
#include<stdlib.h>
int intcmp(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
struct student
{
	char name[10];
	int grade;
};
typedef struct student student;


void printintarr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void printstugrades(student arr2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("The ranking of %s is %d\n", arr2[i].name, i + 1);
	}
}

int stugradescmp(const void* e1, const void* e2)
{
	return (*((student*)e1)).grade - (*((student*)e2)).grade;
}
int main()
{
	//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	//qsort(arr, 10, 4, intcmp);
	//printarr(arr, 10);
	student arr2[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d", &arr2[i].name, &arr2[i].grade);
	}
	qsort(arr2, 5, 5, stugradescmp);
	printstugrades(arr2, 5);
}