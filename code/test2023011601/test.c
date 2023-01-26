#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stddef.h>
typedef struct stu
{
	int grades;
	char name[20];
}stu;
int main()
{
	stu s1 = { 100,"xhy" };
	printf("%d\n", offsetof(stu, grades));
}
