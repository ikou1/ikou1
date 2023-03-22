#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std; 
class Clock
{
public:void setTime(int newH, int newM, int newS);
	  void showTime();
  private:
	  int hour, minute, second;
protected:
	void reSet();
};


