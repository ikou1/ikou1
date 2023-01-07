#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	int arr[50] = { 0 };
	int grade = 0;
	for (int i = 0; i < n; i++)
	{
		grade++;
		if (i >0)
		{
			if (arr2[i].grade == arr2[i-1].grade)
			{
				arr[i] = arr[i - 1];
				printf("The ranking of %s is %d\n", arr2[i].name,arr[i]);
			}
			else
			{
				arr[i] = grade;
				printf("The ranking of %s is %d\n", arr2[i].name, arr[i]);
			}
		}
		else
		{
			printf("The ranking of %s is %d\n", arr2[i].name, 1);
			arr[0] = 1;
		}
	}
}

int stugradescmp(const void* e1, const void* e2)
{
	return (*((student*)e2)).grade - (*((student*)e1)).grade;
}
int main()
{
	//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	//qsort(arr, 10, 4, intcmp);
	//printarr(arr, 10);
	student arr2[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d",&arr2[i].name,&arr2[i].grade);
	}
	qsort(arr2, 5, sizeof(arr2[0]), stugradescmp);
	printstugrades(arr2, 5);
}