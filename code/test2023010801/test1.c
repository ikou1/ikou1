#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct student
{
	char name[5];
	int grades;
};
typedef struct student student;
int main()
{
	student stu= { "xhy",100 };
	stu.grades = 100;
	printf("%d", stu.grades);
}
