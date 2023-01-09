#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define row 3
#define col 4
int search(int arr[row][col], int k)
{
	int x = 0;
	int y = col-1;
	while (x <= row - 1 && y >=0)
	{
		if (arr[x][y] <k)
		{
			x++;
		}
		else if (arr[x][y] >k)
		{
			y--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	while (1)
	{
		int k;
		scanf("%d", &k);
		if (search(arr, k))
		{
			printf("找到%d了\n", k);
		}
		else
		{
			printf("找不到%d\n", k);
		}

	}
}