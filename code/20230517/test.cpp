#define  _CRT_SECURE_NO_WARNINGS 1
//static int n = 1;
//using namespace std;
//class B
//{
//private:
//	int _b;
//public:
//	B(int b)
//	{
//		_b = b;
//	}
//};
//
//
//
//class A
//{
//private:
//	int _a;
//	B _b;
//	const int _c;
//	int& _d;
//public:
//	A(int a, int b, int c, int& d)
//		:_a(a)
//		, _b(b)
//		, _c(c)
//		, _d(d)
//	{
//		cout << "A(int a,int b)" << endl;
//	}
//
//};
//
//
//
//class C
//{
//private:
//	int _c;
//	static int times;
//public:
//	C(int c = 0)
//	{
//		cout << "C(int c = 0)" << endl;
//		_c = c;
//		times++;
//	}
//
//	C(const C& c1)
//	{
//		cout << "C(const C& c1)" << endl;
//		_c = c1._c;
//		times++;
//	}
//
//	static int gets()
//	{
//		return times;
//	}
//};
//
//int C::times = 0;
//
//
//C func(C c1)
//{
//	return c1;
//}
//
//
//
//
//class D
//{
//public:
//	static const int a;
//	void print()
//	{
//		cout << n;
//	}
//};
//const int D::a = 1;
//int main()
//{
//	
//	//int C:: times = 0;
//	/*C c1(5);
//	cout << __LINE__ << ":" << C::gets() << endl;
//	C c2 = func(c1);
//	cout << __LINE__ << ":" << C::gets() << endl;*/
//	D d;
//	d.print();
//}


#include <climits>
#include <iostream>
using namespace std;
int leapy(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
    else {
        return 0;
    }
}


int getmd(int year, int month)
{
    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((month == 2) && (leapy(year)))
    {
        return 29;
    }
    else {
        return arr[month];
    }
}



class Date
{
private:
    int _year;
    int _month;
    int _day;
public:
    Date(int year, int month, int day)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    bool operator !=(Date& d1)
    {
        if ((_year == d1._year) && (_month == d1._month) && (_day == d1._day))
        {
            return false;
        }
        else {
            return true;
        }
    }


    Date& operator+=(int days)
    {
        if (days >= 0)
        {
            _day += days;
            while (_day > getmd(_year, _month))
            {
                _day -= getmd(_year, _month);
                _month++;
                if (_month == 13)
                {
                    _year++;
                    _month = 1;
                }
            }
            return *this;
        }
    }




    Date& operator++()
    {
        /* if (_day == getmd(_year, _month))
         {
             _month += 1;
             _day = 1;
         }
         else
         {
             _day++;
         }
         return *this;*/
        * this += 1;
        return *this;
    }

};







int difference(Date& d1,Date& d2)
{
    int count = 1;
    while (d2 != d1)
    {
        count++;
        ++d1;
    }
    return count;
}
int main()
{
    int year, month, day;
    cin >> year >> month >> day;
    Date d1(year, 1, 1);
    Date d2(year, month, day);
    cout << difference(d1, d2) << endl;

}