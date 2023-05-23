#define  _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"


int judgeyear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;   //ÈòÄê
	}
	else
	{
		return 0;
	}
}


int Date::getdays(int year, int month)
{
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && judgeyear(year))
	{
		return 29;
	}
	else
	{
		return arr[month];
	}
}

Date& Date::operator+=(int days)
{
	if (days >= 0)
	{
		_day += days;
		while (_day > getdays(_year, _month))
		{
			_day -= getdays(_year, _month);
			_month++;
			if (_month == 13)
			{
				_month = 1;
				_year++;
			}
		}
		return *this;
	}
	else
	{
		*this -= (-days);
		return *this;
	}
}


Date Date:: operator+(int days)
{
	Date tmp(*this);
	tmp += days;
	return tmp;
}


Date& Date::operator-=(int days)
{
	if (days >= 0)
	{
		_day -= days;
		while (_day <= 0)
		{
			if (_month == 1)
			{
				_month = 12;
				_year -= 1;
				_day += getdays(_year, _month);
			}
			else
			{
				_month--;
				_day += getdays(_year, _month);
			}
		}
		return *this;
	}
	else
	{
		*this += (-days);
		return *this;
	}
}


Date Date::operator-(int days)
{
	Date tmp(*this);
	tmp -= days;
	return tmp;
}
