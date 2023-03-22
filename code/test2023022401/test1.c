#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
	char name[10];
	int age;
	int grades;
}stu;
int main()
{
	//char arr[10] = { 0 };
	//stu s1 = { 0 };
	//stu s2 = { 0 };
	//fscanf(stdin,"%s%d%d", s1.name, &s1.age, &s1.grades);
	///*fprintf(stdout, "%s %d %d\n", s1.name, s1.age, s1.grades);*/
	//FILE* pf = fopen("text.txt", "wb");
	//fwrite(&s1, sizeof(stu), 1, pf);
	//fclose(pf);
	//pf = NULL;
	// pf = fopen("text.txt", "rb");
	//fread(&s2, sizeof(stu), 1, pf);
	//fprintf(stdout, "%s %d %d", s2.name, s2.age, s2.grades);
	/*struct stu s1 = { 0 };
	struct stu s2 = { 0 };
	char arr[20] = { 0 };
	fscanf(stdin, "%s%d%d", s1.name, &s1.age, &s1.grades);
	fprintf(stdout, "%s %d %d\n", s1.name, s1.age, s1.grades);
	sprintf(arr, "%s %d %d", s1.name, s1.age, s1.grades);
	fprintf(stdout, "%s\n", arr);
	sscanf(arr, "%s%d%d", s2.name, &s2.age, &s2.grades);
	fprintf(stdout, "%s %d %d", s2.name, s2.age, s2.grades);*/




	

}
