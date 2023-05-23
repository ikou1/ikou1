#define  _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

int leapyear(int year)
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



int Date::Getmonthdays(int year, int month) const
{
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && leapyear(year))
	{
		return 29;
	}
	else
	{
		return arr[month];
	}
}



bool Date::operator>(const Date& d) const
{
	if (this->_year > d._year)
	{
		return true;
	}
	else if (this->_year == d._year && this->_month > d._month)
	{
		return true;
	}
	else if (this->_year == d._year && this->_month == d._month && this->_day > d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Date::operator==(const Date& d)  const
{
	if (this->_year == d._year && this->_month == d._month && this->_day == d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Date::operator>=(const Date& d)  const
{
	if ((*this == d) || (*this > d))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Date::operator<(const Date& d) const
{
	if (*this >= d)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Date::operator<=(const Date& d)  const
{
	if ((*this == d) || (*this <d))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Date:: operator!=(const Date& d)  const
{
	if (*this == d)
	{
		return false;
	}
	else
	{
		return true;
	}
}


Date& Date::operator+=(int days) 
{
	if (days >= 0)
	{
		_day += days;
		while (_day > Getmonthdays(_year, _month))
		{
			_day -= Getmonthdays(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	else
	{
		days = -days;
		*this -= days;
		return *this;
	}
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
				_year--;
				_day += Getmonthdays(_year, _month);
			}
			else
			{
				_month--;
				_day += Getmonthdays(_year, _month);
			}
		}
		return *this;
	}
	else
	{
		days = -days;
		*this += days;
		return *this;
	}
	
}


Date Date::operator+(int days) const
{
	Date tmp(*this);
	tmp += days;
	return tmp;
}

Date Date::operator-(int days)  const
{
	Date tmp(*this);
	tmp -= days;
	return tmp;
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}


Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

Date Date::operator++(int) 
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

  
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}



Date::Date(int year, int month, int day)
{
	if ((month >= 1) && (month <= 12) && (day >= 1) && (day <= Getmonthdays(year, month)))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		assert(false);
	}
}


int Date::difference(Date& d)  const
{
	Date max;
	Date min;
	int diff = 0;
	if (*this >= d)
	{
		max = *this;
		min = d;
		while (max !=min)
		{
			min++;
			diff++;
		}

	}
	else
	{
		max = d;
		min = *this;
		while(max!=min)
		{
			min++;
			diff--;
		}
	}
	return diff;
}