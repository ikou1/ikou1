#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;



class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
private:
	int _year;
	int _month;
	int _day;
public:

	Date(int year = 2000, int month = 1, int day = 1);
	int Getmonthdays(int year, int month)const;
	int difference(Date& d)const;
	Date& operator+=(int days);
	Date operator+(int days)const;
	Date& operator-=(int days);
	Date operator-(int days)const;
	Date& operator++();
	Date& operator--();
	Date operator++(int);
	Date operator--(int);

	bool operator>(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator!=(const Date& d)const;
	void print()
	{
		printf("%d-%02d-%02d", _year, _month, _day);
	}

};