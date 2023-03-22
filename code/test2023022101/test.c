#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int total(int k)
{
	static int step;
	if (!k)
		return step;
	step++;
	return ((k % 2 == 0) ? total(k / 2) : total(k - 1));
}


typedef struct stu
{
	char name[20];
	int age;
	int grades;
}stu;
int main()
{
	stu p1 = {0};
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	/*fprintf(pf,"%s %d %d\n",p1.name,p1.age,p1.grades);*/
	fscanf(pf,"%s%d%d\n",p1.name,&p1.age,&p1.grades);
	printf("%s %d %d", p1.name, p1.age, p1.grades);

	
	fclose(pf);
	pf = NULL;
	return 0;
}
