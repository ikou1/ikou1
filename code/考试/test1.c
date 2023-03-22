#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<memory.h>
int int_compare(void* e1, void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}


int prime_judge(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i))
		{
			return 0;
		}
	}
	return 1;
}
int fac(int n)
{
	int num = 1;
	for (int i = 1; i <= n; i++)
	{
		num *= i;
	}
	return num;
}


double temp(double m, int k)
{
	double num = 0;
	num = pow(m, k)/fac(k);
	return num;
}


int flower_number(int n)
{
	int a = n / 100;
	int b = (n - 100 * a) / 10;
	int c = n % 10;
	if (pow(a, 3) + pow(b, 3) + pow(c, 3) == n)
	{
		return 1;
	}
	return 0;

}


void print(char c,int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", c);
	}
}
void reverse_triangle(int n)
{
	for (int i = n; i >= 1; i--)
	{
		print(' ', n-i);
		print('*', 2*i - 1);
		print(' ', n - i);
		printf("\n");
	}
}


void triangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		print(' ', n - i);
		print('*', 2 * i - 1);
		print(' ', n - i);
		printf("\n");
	}
}


int fib1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	for (int i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int max_con1(int a, int b)
{
	return (a % b == 0) ? (b) : max_con1(b, a % b);
}

int max_con2(int a, int b)
{
	while (b>1)
	{
		int tmp = a % b;
		if (a % b == 0)
		{
			return b;
		}
		else
		{
			a = b;
			b = tmp;
		}
	}
	return 1;
}


void bubble_sort(int arr[], int n)
{
	for(int j=0;j<=n-2;j++)
	{ 
		for (int i = 0; i <= n - 2 - j; i++)
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



int dic_search(int arr[], int n, int k)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == k)
		{
			return mid;
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
	return -1;
}

void reverse_matrix(int arr[3][3])
{
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (i < j)
			{
				int tmp;
				tmp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = tmp;
			}
		}
	}
}

void print_matrix(int arr[3][3])
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


//void insert_sort(int arr[], int n)
//{
//	for (int i = 1; i <= n - 1; i++)
//	{
//		if (arr[i] >= arr[i - 1])
//		{
//			continue;
//		}
//		int k = i;
//		while (arr[k] < arr[k - 1]&&k)
//		{
//			int tmp = arr[k];
//			arr[k] = arr[k - 1];
//			arr[k - 1] = tmp;
//			k--;
//		}
//	}
//}

void insert_sort(int arr[], int n)
{
	for (int i = 1; i <= n - 1; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			continue;
		}
		else
		{
			int k = i;
			while (arr[k] < arr[k - 1] && k)
			{
				int tmp = arr[k];
				arr[k] = arr[k-1];
				arr[k - 1] = tmp;
				k--;
			}
		}
	}
}

void initialize(int arr[], int n)
{
	memset(arr, 0,n*sizeof(int));
	srand((unsigned int)time(NULL));
	for (int i = 0; i <= n-1; i++)
	{
		arr[i] = rand()%(INT_MAX);
	}
}
void check(int arr[], int n,int times,void(*sort)(int arr[],int n))     
{
	int ret = 1;
	for (int j = 1; j <= times; j++)
	{
		initialize(arr, n);
		sort(arr, n);
		for (int i = 0; i <= n - 2; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				ret = 0;
				printf("第%d/%d组样例没有通过\n",j,times);
				printf("失败样例为:");
				for (int i = 0; i <= n; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				return;
			}
		}
	}
	if (ret)
	{
		printf("%d组样例全部通过\n", times);
	}
	return;
}




void Bubblesort(int a[], int n)
{
	int i, j;
	int temp;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > 1; j--)
		{
			if (a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}


int main()
{
	/*double m;
	scanf("%lf", &m);
	int flag = 1;
	int k = 1;
	float sum = 0;
	while (temp(m,k)>=1e-4)
	{
		sum += flag*temp(m, k);
		flag = -flag;
		k++;
	}
	printf("%.2f\n", sum);*/
	//reverse_triangle(50);
	/*triangle(50);*/
	/*int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	bubblesort(arr, 10);*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("下标为%d\n", dic_search(arr, 10, 2));*/
	/*int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
	print_matrix(arr);
	reverse_matrix(arr);
	print_matrix(arr);*/
	/*int arr[10] = {1,2,3,5,7,4,2,8,9,0};
	insert_sort(arr, 10);*/
	
	/*check(arr, 20, 10000,insert_sort);         
	check(arr, 20, 10000,bubble_sort);  */       
	//第一个调用数组，第二个参数为数组大小，第三个参数是你想测试的组数，第四个参数是你自己写的排序函数(bubblesort/insertsort等都可以),但是函数形式
	//必须为void sort(int arr[],int n),n是函数大小
	int arr[10] = {0};
	check(arr, 10, 10000000, bubble_sort);
	check(arr, 10, 10000000, insert_sort);
}

