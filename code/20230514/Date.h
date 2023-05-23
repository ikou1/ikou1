#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	Date(int year=0, int month=0, int day=0)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void reset(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date& operator+=(int days);
	Date  operator+(int days);
	Date& operator-=(int days);
	Date operator-(int days);
	int getdays(int year, int month);


	Date& operator++()
	{
		*this += 1;
		return *this;
	}

	Date operator++(int)
	{
		Date tmp = *this;
		*this += 1;
		return tmp;
	}

	



	void print()
	{
		cout << "year:" << _year << "  month:" << _month << "  day:" << _day << endl;
	}



private:
	int _year;
	int _month;
	int _day;
};
