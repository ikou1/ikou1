#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search(int k1, char arr[], int n1)
{
	int left = 0;
	int right = n1 - 1;
	int mid;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (arr[mid] > k1)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k1)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k, n;
	n = sizeof(arr1) / sizeof(arr1[1]);
	scanf("%d", &k);
	if (search(k, arr1, n))
	{
		printf("找到了，下标是%d\n", search(k, arr1, n));
	}
	else
	{
		printf("找不到了");
	}

}