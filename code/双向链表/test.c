#define  _CRT_SECURE_NO_WARNINGS 1
#include"LT.h"

void test1()
{
	Node* guard = Init_Node();
	pushback(guard, 1);
	pushback(guard, 2);
	pushback(guard, 3);
	pushback(guard, 4);
	pushfront(guard, 0);
	Node* p1 = find(guard, 3);
	erase(p1);
	print(guard);

}



int main()
{
	char arr[20] = { '\0' };
}
