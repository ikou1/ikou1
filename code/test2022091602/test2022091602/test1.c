#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void prime(int k)   //�����ж�         ������һ�ַ���Ϊ��2~k-1�����Գ�k��
{
	int  i;
	int count = 0;
	for (i = (k-1); i >= 1; i--)
	{
		if ((k % i) == 0)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	if (count == k - 2)
	{
		printf("%d������\n", k);
	}
}
int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		prime(i);
	}
	return 0;
}
