#define  _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void Stack::print()
{
	for (int i = 0; i <= _num - 1; i++)
	{
		cout << _arr[i];
		if (i < _num - 1)
		{
			cout << "->";
		}
	}
	cout << endl;
}

void Stack::push(int data)
{
	enlarge();
	_arr[_num++] = data;
}

void Stack::enlarge()
{
	if (_capacity == _num)
	{
		int* tmp = (int*)realloc(_arr, sizeof(int) * _capacity * 2);
		if (tmp != nullptr)
		{
			_arr = tmp;
			_capacity *= 2;
		}
	}
}


void Stack::pop()
{
	assert(_num != 0);
	_num--;
}

Stack& Stack::operator=(const Stack& st)
{
	if (this != &st)
	{
		this->_arr = (int*)malloc(sizeof(int) * st._capacity);
		memcpy(this->_arr, st._arr, sizeof(int) * st._num);
		this->_num = st._num;
		this->_capacity = st._capacity;
		return *this;
	}
}




