#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
int main()
{
	SL list1;
	SL* pf = &list1;
	initialize(pf);
	pushback(pf, 2);
	pushback(pf, 3);
	pushback(pf, 4);
	pushback(pf, 5);
	pushback(pf, 6);
	pushback(pf, 7);
	pushback(pf, 8);
	pushback(pf, 9);
	pushback(pf, 10);
	pushfront(pf, 1);
	pushfront(pf, 1);
	popfront(pf);
	insert(pf, 0, 0);
	erase(pf, 0);
	erase(pf, 9);
	print(pf);
	destroy(pf);
}