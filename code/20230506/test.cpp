#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<assert.h>
using namespace std;
class Stack
{
public:
	Stack(int capacity=4)
	{
		_arr = (int*)malloc(capacity * sizeof(int));
		if (_arr == nullptr)
		{
			perror("malloc failure");
			return;
		}
		_capacity = capacity;
		_num = 0;
		cout << "Stack(int capacity)" << endl;
	}

	void Push(int data=1)
	{
		if (_num == _capacity)
		{
			int* tmp = (int*)realloc(_arr, 2 * _capacity*sizeof(int));
			if (tmp != nullptr)
			{
				_arr = tmp;
				_capacity *= 2;
			}
		}
		_arr[_num++] = data;
	}

	void Pop()
	{
		assert(_num != 0);
		_num--;
	}


	void Top()
	{
		assert(_num != 0);
		cout << _arr[_num - 1] << endl;
	}


	void Print()
	{
		assert(_num != 0);
		for (int i = 0; i <= _num - 1; i++)
		{
			cout << _arr[i] << " ";
		}
		cout << endl;
	}

	~Stack()
	{
		if (_arr)
		{
			free(_arr);
			_arr = nullptr;
			_num = _capacity=0;
		}
		cout << "~Stack" << endl;
	}



   private:
	int* _arr;
	int _capacity;
	int _num;

};



class _time
{
public:
	_time(int date = 0, int hour =0, int second =0)
	{
		_date = date;
		_hour = hour;
		_second = second;
	}


public:
	int _date;
	int _hour;
	int _second;
};

class pos
{
public:
	pos(int date = 0, int hour = 0, int second = 0,int x = 0, int y = 0, int z = 0)
	{
		_x = x;
		_y = y;
		_z = z;
		st._date = date;
		st._hour = hour;
		st._second = second;
	}

	pos(const pos &p)
	{
		this->_x = p._x;
		this->_y = p._y;
		this->_z = p._z;
		st._date = p.st._date;
		st._hour = p.st._hour;
		st._second = p.st._second;
	}

	void print()
	{
		cout << "x=" << _x << " ";
		cout << "y=" << _y << " ";
		cout << "z=" << _z << " ";
		cout << endl;
		cout << st._date << " " << st._hour << " " << st._second << endl;
	}


private:
	int _x;
	int _y;
	int _z;
	_time st;
};







int main()
{
	/*Stack s1(3);
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Push(4);
	s1.Push(5);
	s1.Push(6);
	s1.Push(7);
	s1.Push(8);
	s1.Push(9);
	s1.Print();
	s1.Pop();
	s1.Pop();
	s1.Pop();
	s1.Pop();
	s1.Pop();
	s1.Print();*/
	pos p1(5, 12, 30);
	p1.print();
	pos p2(p1);
	p2.print();


}