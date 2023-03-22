#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 25
//typedef struct mobile
//{
//	char type[20];
//	int price;
//	int sale;
//	int income;
//}mobile;
//
//
//void input(mobile* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%d%d", a[i].type, &a[i].price, &a[i].sale);
//		a[i].income = a[i].price * a[i].sale;
//	}
//	printf("\n");
//}
//
//void sort(mobile* a, int n)
//{
//	for (int j = 0; j <= n - 2; j++)
//	{
//		for (int i = 0; i <= n - 2 - j; i++)
//		{
//			if (a[i].income > a[i + 1].income)
//			{
//				mobile tmp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = tmp;
//			}
//		}
//	}
//}
//
//void output(mobile* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s      %d", a[i].type, a[i].income);
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	mobile arr[N] = { 0 };
//	input(arr, 5);
//	sort(arr, 5);
//	output(arr, 5);
//
//
//}
int main()
{
	/*FILE* src = fopen("text.txt", "w");
	FILE* dest = fopen("text.txt", "w");
	char arr[20] = "abcdef12345";
	fprintf(src, "%s", arr);
	fclose(src);
	fclose(dest);
	src = fopen("text.txt", "r");
	dest = fopen("test.txt", "w");
	char ch = fgetc(src);
	while (feof(src) == 0)
	{
		if (ch >= '0' && ch <= '9')
		{
			fputc(ch, dest);
		}
		else
		{
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			{
				putchar(ch);
				putchar(' ');
			}
		}
		ch = fgetc(src);

	}
	fclose(src);
	fclose(dest);*/
	printf("%c", '\x44');
}