#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
//private:
public:
	int _a;
public:
	/*A(int a=0)
	{
		_a = a;
		cout << "A()" << endl;
	}*/
	~A()
	{
		cout << "~A()" << endl;
	}
};




template<typename T>
void Swap(T& x1, T& x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}


class Date
{
public:
	int _year;
	int _month;
	int _day;
	Date(int y,int m,int d)
	{
		_year = y;
		_month = m;
		_day = d;
	}
};
int main()
{
	/*A* ptr = new A[3];
	cout << ptr[0]._a << endl;
	cout << ptr[1]._a << endl;
	cout << ptr[2]._a << endl;
	delete[] ptr;*/
	/*int a = 1;
	int b = 2;
	Swap(a, b);
	cout << a << "   " << b;*/
	Date d1(1, 1, 1);
	Date d2(2, 2, 2);
	Swap(d1, d2);
	cout << d1._year;


}