#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print1(int(*str)[4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			/*printf("%d ", (*(str + i))[j]);*/
			printf("%d ", str[i][j]);
		}
		printf("\n");

	}
}


//void print2(int* p, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", );
//		}
//	}
//}

int print(int**p)
{
	printf("1\n");
}
int main()
{
	/*int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6,} };
	print1(arr, 3, 4);
	printf("\n");*/
	int arr2[5] = { 1,2,3,4,5 };
	int* p1 = arr2;
	int(*p2)[5] = &arr2;
	printf("%p\n", p1);
	printf("%p\n", p1 + 1);
	printf("\n");

	printf("%p\n", p2);
	printf("%p\n", p2 + 1);
	printf("\n");

	printf("%p\n", *(p2));
	printf("%p\n", *(p2)+1);

	int* arr3[2];
	print(p2);
	print(arr3);

}

	