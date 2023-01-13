#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define row 3
//#define col 4
//int search(int arr[row][col], int k)
//{
//	int x = 0;
//	int y = col-1;
//	while (x <= row - 1 && y >=0)
//	{
//		if (arr[x][y] <k)
//		{
//			x++;
//		}
//		else if (arr[x][y] >k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	while (1)
//	{
//		int k;
//		scanf("%d", &k);
//		if (search(arr, k))
//		{
//			printf("找到%d了\n", k);
//		}
//		else
//		{
//			printf("找不到%d\n", k);
//		}
//
//	}
//}


void bubblesort(void* base, int n, int width, int(*cmp)(const void*, const void*))
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (cmp((char*)base+width*j,(char*)base+(j+1)*width)>0)
			{
				char* e1 = (char*)base + width * j;
				char* e2 = (char*)base + width * (j+1);
				for (int k = 0; k < width; k++)
				{
					char tmp;
					tmp = *(e1+k);
					*(e1+k) = *(e2+k);
					*(e2+k) = tmp;
				}

			}
		}
	}
}

int int_cmp(const void* e1, const void* e2)
{

	return (*(int*)e1) - (*(int*)e2);
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	/*bubblesort(arr, 10, 4, int_cmp);*/
	qsort(arr, 10, 4, int_cmp);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}