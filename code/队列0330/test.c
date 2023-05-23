#define  _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"


int main()
{
	Queue q1;
	Init_queue(&q1);
	push_queue(&q1, 1);
	push_queue(&q1, 2);
	push_queue(&q1, 3);
	push_queue(&q1, 4);
	push_queue(&q1, 5);
	pop_queue(&q1);
	pop_queue(&q1);
	pop_queue(&q1);
	pop_queue(&q1);
	while (!empty_queue(&q1))
	{
		printf("%d ", front_queue(&q1));
		pop_queue(&q1);
	}
}
