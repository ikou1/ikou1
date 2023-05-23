#define  _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Date.h"
class pos
{
public:
	pos(int x = 0, int y = 0, int z = 0)
	{
		cout << "pos(int x = 0, int y = 0, int z = 0)" << endl;
		_x = x;
		_y = y;
		_z = z;
	}
	void reset(int x, int y, int z)
	{
		_x = x;
		_y = y;
		_z = z;
	}
	void print()
	{
		cout << "x=" << _x << "  y=" << _y << "  z="<<_z<<endl;
	}

	pos& operator=(const pos& p)
	{
		if (&p != this)
		{
			this->_x = p._x;
			this->_y = p._y;
			this->_z = p._z;
		}
		return *this;
	}


private:
	int _x;
	int _y;
	int _z;
};


ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "Äê" << d._month << "ÔÂ" << d._day << "ÈÕ" << endl;
	return out;
}


istream& operator>>(istream& in, Date& d)
{
	in >> d._year>>d._month >>d._day;
	return in;
}



//void operator>(pos& p1, pos& p2)
//{
//	int d1 = pow(double(p1._x), 2) + pow(double(p1._y), 2)+pow(double(p1._z),2);
//	int d2 = pow(double(p2._x), 2) + pow(double(p2._y), 2)+pow(double(p2._z), 2);
//	if (d1>d2)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//
//void operator<(pos& p1, pos& p2)
//{
//	int d1 = pow(double(p1._x), 2) + pow(double(p1._y), 2) + pow(double(p1._z), 2);
//	int d2 = pow(double(p2._x), 2) + pow(double(p2._y), 2) + pow(double(p2._z), 2);
//	if (d1< d2)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//}
//


int main()
{
	/*pos p1(1, 2, 3);
	pos p2(p1);
	p1.reset(2, 2, 2);
	p1 > p2;
	operator>(p1, p2);
	p1 < p2;
	operator<(p1, p2);*/
	/*s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	s1.push(7);
	Stack s2(s1);
	s2.pop();
	s2.print();*/
	/*Stack s1(5);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	s1.push(7);
	Stack s2, s3;
	s3=s2 = s1;
	s2.pop();
	s2.print();
	s3.print();*/
	//Stack s1(4);
	//Stack s2 = s1;
	Date d1(2023, 1, 1);
	Date d2(d1 - 10000);
	cout << d2;
	return 0;
}