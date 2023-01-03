#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int* p, int n)
{
	for (int j = 0; j <= n - 2; j++)
	{
		for (int i = 0; i <= n - 2 - j; i++)
		{
			if (p[i] < p[i + 1])
			{
				int tmp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
