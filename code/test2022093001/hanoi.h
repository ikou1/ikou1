#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int hanoi(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return (2 * hanoi(n - 1) + 1);//˼·Ϊ:1.��ǰn-1�����Ƶ�b���ϣ�������������̣�����hanoi��n-1��������
		                              //       2.��������һ�����Ƶ�c���ϣ�����1����
		                              //       3.����ʱb������a'����a������b'������ʱ����ת��Ϊhanoi��n-1�����Ʒ�������hanoi��n-1������ //�ݹ�
	}
}