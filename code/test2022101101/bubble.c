#define  _CRT_SECURE_NO_WARNINGS 1
void bubble(int arr[],int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j= 0;
		for (j = 0; j <n - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}


}
