#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	{
		char arr1[] = "12345678";
		char arr2[] = "********";
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		int left = 0;
		int right = strlen(arr2) - 1;
		while (left <= right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			system("cls");
			printf("%s\n", arr2);
			left++;
			right--;
			Sleep(500);
		}
	}
	{
		char arr3[20] = { 0 };
		char arr4[] = "suzhi666";
		printf("ÇëÊäÈëÃÜÂë");
		int i;
		for (i = 1; i <= 3;i++)
		{
			scanf("%s\n", arr3);
			if (strcmp(arr3, "suzhi666") == 0)
			{
				printf("µÇÂ½³É¹¦");
				break;
			}
			else
			{
				if (i <= 2)
				{
					printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
				}
				else
				{
					break;
				}
			}
			if (i == 3)
			{
				printf("Èý´ÎÃÜÂë¾ù´íÎó£¬ÍË³ö³ÌÐò");
			}
		}







	}
	return 0;
}