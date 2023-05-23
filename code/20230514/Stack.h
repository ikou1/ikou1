#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
#include<math.h>
using namespace std;
class Stack
{
public:
	Stack(int capacity = 4)
	{
		_arr = (int*)malloc(sizeof(int) * capacity);
		if (_arr == nullptr)
		{
			perror("malloc failure");
		}
		_capacity = capacity;
		_num = 0;
		cout << "Stack(int capacity=4)" << endl;
	}

	~ Stack()
	{
		if (_arr)
		{
			free(_arr);
			_arr = nullptr;
			_capacity = _num = 0;
		}
		cout << "~Stack()" << endl;
	}


	Stack(const Stack& st1)
	{
		_arr = (int*)malloc(sizeof(int) * st1._capacity);
		if (_arr!= nullptr)
		{
			memcpy(_arr, st1._arr, sizeof(int) * st1._num);
			_num = st1._num;
			_capacity = st1._capacity;
		}
		cout << "Stack(Stack& st1)" << endl;
	}

	void print();
	void push(int data);
	void enlarge();
	void pop();
	Stack& operator=(const Stack& st);
	




private:
	int* _arr;
	int _capacity;
	int _num;
};