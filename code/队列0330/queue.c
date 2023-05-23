#define  _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"


void Init_queue(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
	pq->size = 0;
}


void push_queue(Queue* pq, int k)
{
	assert(pq);
	QNode* new = (QNode*)malloc(sizeof(QNode));
	if (new == NULL)
	{
		perror("malloc failure");
		return;
	}
	new->next = NULL;
	new->data = k;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = new;
	}
	else
	{
		pq->tail->next = new;
		pq->tail = new;
	}
	pq->size++;
}


void pop_queue(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = NULL;
		pq->tail = NULL;
	}
	else
	{
		QNode* newhead = pq->head->next;
		free(pq->head);
		pq->head = newhead;
	}
	pq->size--;
}



int size_queue(Queue* pq)
{
	assert(pq);
	return pq->size;
}


Qdata front_queue(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}



Qdata back_queue(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}


bool empty_queue(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}
