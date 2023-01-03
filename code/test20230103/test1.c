#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check(char* tmp)
{
	if (*tmp == 0x01)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int a = 1;
	if (check((char*)&a))
	{
		printf("Ð¡¶Ë");
	}
	else if (check((char*)&a)== 0)
	{
		printf("´ó¶Ë");
	}
	else
	{

	}
	printf("\n%d",*(char*)&a);
		return;
}