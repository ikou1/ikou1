#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	int id;
	char name[20];
	int math_score;
	int phy_score;
	int eng_score;
};
int main()
{
	int num;
	scanf("%d", &num);
	struct stu arr[10];
	for (int i = 0; i < num; i++)
	{
		scanf("%d %s %d %d %d", &(arr[i].id), &(arr[i].name), &(arr[i].math_score), &(arr[i].phy_score), &(arr[i].eng_score));
	}
	int average[10];
	for (int i = 0; i < num; i++)
	{
		average[i] = (arr[i].math_score + arr[i].eng_score + arr[i].phy_score) / 3;
	}
	for (int i = 0; i < num; i++)
	{
		printf("The average score of the %dth student is %d.\n", i + 1, average[i]);
	}
}