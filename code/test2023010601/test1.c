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
struct student
{
	char name[5];
	int grades;
};
typedef student student;
int main()
{
	student stu1 = { "xhy",100};
	stu1.name = "abc";
	printf("%s", stu1.name);
}