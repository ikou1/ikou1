#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"mystrlen.h"       
#include"reverse1.h"
#include"reverse2.h"
int main()
{
	char arr1[20];                //��������
	scanf("%s", arr1);
	printf("%d\n", mystrlen(arr1));    //����mystrlen
	reverse1(arr1);                    //��reverse1��ת�ַ���һ��
	printf("%s\n", arr1);             //��ӡ��һ�η�ת���
	reverse2(arr1);                    //��reverse2��ת�ַ���һ��
	printf("%s\n", arr1);               //��ӡ�ڶ��η�ת���

	return 0;
}