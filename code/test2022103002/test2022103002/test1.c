#define  _CRT_SECURE_NO_WARNINGS 1
#define MAX_N 50
#include<stdio.h>
void bubble( int arr[],int n)
{
	int i, j, tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - j - 1; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
}
int binary_search()
{

}
int main()
{
	int m;
	int n;
	int arr[MAX_N];
	scanf("%d%d", &m, & n);
	for (int i = 0; i < n; i++)               //ÅÆ¶Ñ³õÊ¼»¯
	{
		scanf("%d", arr[i]);
	}
	int a, b, c;
	int judge = 0;
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (binary_search(m - arr[a] - arr[b])
			{
				judege=1;
			}
		}
	}
	if (judge)
	{
		printf("NO");
	}
	else
	{
		printf("YES")£»
	}

}