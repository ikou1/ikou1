#define  _CRT_SECURE_NO_WARNINGS 1
#include"clock.h"
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime()
{
	cout<< hour << ":" << minute << ":" << second << endl;
}

void Clock::reSet()
{
	hour = 0;
	minute = 0;
	second = 0;
}
