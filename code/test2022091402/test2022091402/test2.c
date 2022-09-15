#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>;
int main()
{
	int k;
	scanf("%d", &k);
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (right + left) / 2;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");
		}
	}
	return 0;
}