#define  _CRT_SECURE_NO_WARNINGS 1
#define max_n 50
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
int bubblesearch(int arr[], int sz,int k)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left<=right)
	{
		mid=(left + right) / 2;
		if (arr[mid] == k)
		{
			return 1;   //�ҵ���
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
		{
			left = mid + 1;
		}
	}
	return 0;  //û�ҵ�
}
void bubblesort(int arr[],int sz)
{
	int i, j;
	for (j = 0; j <= sz - 2; j++)
	{
		for (i = 0; i <= sz - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp;
				tmp = arr[i];
				arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr2[max_n * max_n] = { 0 };
	int i,j;
	int n = 0;
	do
	{
		printf("������ֽƬ��n");
		scanf("%d", &n);
		assert(n >= 4 && n <= max_n);
	} while (n<4 || n>max_n);
	printf("�������Ϊm");
	int m;
	scanf("%d", &m);
	int arr[max_n] = { 0 };
	printf("������ֽƬ�ϵ�����");
	for (int i = 0; i < n; i++)      
	{
		int a;
		scanf("%d", &a);
		arr[i] = a;
	}
	int k = 0;
	for (i = 0; i <= n - 1; i++)      //�˴�ʱ�临�Ӷ�O��N^2��
	{
		for (j = 0; j <= n - 1; j++)
		{
			arr2[k] = arr[i] + arr[j];
			k++;
		}
	}
	bubblesort(arr2, max_n * max_n);
	int sign = 1;
	for (int i = 0; i < n; i++)     //�˴�ʱ�临�Ӷ�O��N^2*logN)
	{
		if (sign == 0)
		{
			break;
		}
		for (int j = 0; i < n; i++)       
		{
			if (bubblesearch(arr2,sizeof(arr2)/sizeof(arr2[0]), m - arr[i] - arr[j]))
			{
				printf("Yes");
				sign = 0;
				break;
			}
		}
	}
	if (sign)
	{
		printf("No");   //��ʱ�临�Ӷ�ΪO��N^2*logN)
	}
	
}