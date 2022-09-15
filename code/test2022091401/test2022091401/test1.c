#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 7;
	/*scanf("%d", &k);*/
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) - 1;
	while (left<=right)
	{
		int mid = (right - left) / 2;
		if (arr[mid]> k)
		{
			right = mid-1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			printf("找到了");
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
	return 0;
}