#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"       
#include"reverse1.h"
#include"reverse2.h"
int main()
{
	char arr1[20];                //创建数组
	scanf("%s", arr1);
	printf("%d\n", mystrlen(arr1));    //测试mystrlen
	reverse1(arr1);                    //用reverse1反转字符串一次
	printf("%s\n", arr1);             //打印第一次反转结果
	reverse2(arr1);                    //用reverse2反转字符串一次
	printf("%s\n", arr1);               //打印第二次反转结果

	return 0;
}