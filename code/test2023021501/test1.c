#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
typedef struct stu
{
	char name[20];
	int grades;
	int years;
}stu;
int main()
{
	stu s1 = { 0 };
	/*memset(&s1, 0, sizeof(s1));*/
	FILE* pf = fopen("text.txt", "r");
	if (NULL == pf)
	{
		perror(pf);
		return 1;
	}
	/*fprintf(pf, "%s %d %d\n", s1.name, s1.grades, s1.years);
	fclose(pf);*/
	fscanf(pf, "%s%d%d", s1.name, &s1.grades, &s1.years);
	printf("%s %d %d", s1.name, s1.grades, s1.years);

	pf = NULL;
	
	
	return 0;
}
