#define  _CRT_SECURE_NO_WARNINGS 1
#include"clock.h"
#include<iostream>
using namespace std;

int main()
{
	Clock ck;
	cout << "First time show time:";
	ck.showTime();
	cout << "Second time show time:";
	ck.setTime(12,0,0);
	ck.showTime();
	return 0;
}