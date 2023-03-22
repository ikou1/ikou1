#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int x = 24;
void fun()
{
	static int y = 6;
	y += 6;
	printf("%d ", x);
}
int main()
{
	int y = 0;
	fun();
	fun();
	/*FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		exit(1);
	}
	char ch;
	scanf("%c", &ch);
	while (ch != '#')
	{
		fputc(ch, pf);
		scanf("%c", &ch);
	}
	fclose(pf);
	
	pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		exit(1);
	}
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(pf);
	return 0;*/

	/*char str[100] = { '\0' };
	FILE* pf = fopen("text.txt", "w");
	fclose(pf);
	pf = fopen("text.txt", "a+");
	if (pf == NULL)
	{
		perror("fopen");
		exit(1);
	}
	scanf("%s", str);
	while (strcmp(str,"#") != 0)
	{
		fputs(str, pf);
		fputc('\n', pf);
		scanf("%s", str);
	}
	int line = 0;
	rewind(pf);
	while (fgets(str, 100, pf) != NULL)
	{
		printf("%s", str);
		line++;
	}
	fclose(pf);
	printf("这个文件有%d行", line);*/


	/*char str[100];
	scanf("%s", str);
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		exit(1);
	}
	fprintf(pf, "%s", str);
	fclose(pf);
	pf = fopen("text.txt", "r");
	fscanf(pf, "%s", str);
	fclose(pf);
	printf("%s", str);
	return 0;*/


	//char* s;
	//s = "book";
	//printf("%c", *s);
}
