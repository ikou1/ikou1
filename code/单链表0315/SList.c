#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SL_print(Node* head)     
{
	Node* cur = head;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

Node* createnode(SLdata x)
{
	Node* new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		perror("malloc failure");
		return;
	}
	new->data = x;
	new->next = NULL;
	return new;
}



void SL_pushback(Node**phead, SLdata x)
{
	assert(phead);
	Node* new = createnode(x);
	if (*phead == NULL)
	{
		*phead = new;
	}
	else
	{
		Node* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return;
}



void SL_pushfront(Node** phead, SLdata x)
{
	assert(phead);
	Node* new = createnode(x);
	Node* tmp = *phead;
	*phead = new;
	new->next = tmp;
}



void SL_popback(Node** phead)
{
	assert(phead);
	//空表
	assert(*phead != NULL);
	//单节点
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}

	//多节点
	else
	{
		Node* tail = *phead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}




void SL_popfront(Node** phead)
{
	assert(phead);
	assert(*phead != NULL);
	Node* tmp = *phead;
	*phead = (*phead)->next;
	free(tmp);
	tmp = NULL;
}



Node* SL_findnode(Node* head, SLdata k)
{
	Node* cur = head;
	while (cur->data != k)
	{
		cur = cur->next;
	}
	return cur;
}


Node* SL_insertfront(Node* head, Node* pos, SLdata x)
{
	assert(pos);
	Node* new = createnode(x);
	Node* cur = head;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	cur->next = new;
	new->next = pos;
	return;
}


Node* SL_insertafter(Node* pos, SLdata x)
{
	assert(pos);
	Node* new = createnode(x);
	Node* tmp = pos->next;
	//pos->next = new;
	//new->next = tmp;
	new->next = pos->next;
	pos->next = new;
	return;
}



Node* SL_erase(Node*head,Node* pos)
{
	assert(head);
	assert(pos);
	Node* cur = head;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	cur->next = pos->next;
	free(pos);
}



Node* removeElements(Node**phead, int val)
{
	Node* guard = (Node*)malloc(sizeof(Node));
	guard->next = *phead;
	Node* cur = *phead;
	Node* pre = guard;
	while (((*phead)->data)== val)
	{
		if (((*phead)->next) == NULL)
		{
			return NULL;
		}
		*phead = (*phead)->next;
		guard->next =*phead;
		cur =*phead;
	}
	while (cur!= NULL)
	{
		if (cur->data == val)
		{
			pre->next = cur->next;
			cur = cur->next;
		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
	}
	return phead;
}