#define  _CRT_SECURE_NO_WARNINGS 1
#include"LT.h"



Node* Buy_Node(int x)
{
	Node* new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		perror("malloc failure");
		return NULL;
	}
	new->next = NULL;
	new->pre = NULL;
	new->data = x;
	return new;
}


Node* Init_Node()
{
	Node* guard = Buy_Node(-1);
	guard->next = guard;
	guard->pre = guard;
	return guard;
}



void pushback(Node* guard,int x)
{
	assert(guard);
	Node* new = Buy_Node(x);
	Node* tail = guard->pre;
	tail->next = new;
	new->pre = tail;
	guard->pre = new;
	new->next = guard;
	return;
}


void pushfront(Node* guard, int x)
{
	assert(guard);
	Node* new = Buy_Node(x);
	
	new->next = guard->next;
	guard->next->pre = new;
	guard->next = new;
	new->pre = guard;
	return;
}


void print(Node* guard)
{
	assert(guard);
	Node* tail = guard->next;
	while (tail != guard)
	{
		if (tail->next != guard)
		{
			printf("%d<--->", tail->data);
		}
		else
		{
			printf("%d", tail->data);
		}
		tail = tail->next;
	}
	printf("\n");
	return;
}



void popback(Node* guard)
{
	assert(guard);
	assert(guard->next != guard);
	Node* tail = guard->pre;
	guard->pre = tail->pre;
	tail->pre->next = guard;
	free(tail);
	return;
}


void popfront(Node* guard)
{
	assert(guard);
	assert(guard->next != guard);
	Node* tmp = guard->next;
	guard->next = tmp->next;
	tmp->next->pre = guard;
	free(tmp);
	return;
}




Node* find(Node* guard, int x)
{
	assert(guard);
	assert(guard->next != guard);
	Node* tail = guard->next;
	while (tail != guard)
	{
		if (tail->data == x)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}


void insert(Node* pos, int x)
{
	assert(pos);
	Node* tmp = pos->pre;
	Node* new = Buy_Node(x);
	tmp->next = new;
	new->pre = tmp;
	new->next = pos;
	pos->pre = new;
	return;
}


void erase(Node* pos)
{
	assert(pos);
	Node* tmp_next = pos->next;
	Node* tmp_pre = pos->pre;
	tmp_pre->next = tmp_next;
	tmp_next->pre = tmp_pre;
	free(pos);
	return;
}
