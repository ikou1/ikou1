#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int hanoi(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return (2 * hanoi(n - 1) + 1);//思路为:1.将前n-1个盘移到b柱上（无视最下面的盘，共需hanoi（n-1）步）；
		                              //       2.将最下面一个盘移到c柱上（仅需1步）
		                              //       3.将此时b柱看成a'柱，a柱看成b'柱，此时问题转化为hanoi（n-1）的移法（共需hanoi（n-1）步） //递归
	}
}