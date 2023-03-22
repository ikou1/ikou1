#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* creat()
{
	Node* head, * tail, * p;
	int num;
	head = tail = NULL;
	printf("请输入一批数据,以-1结尾");
	scanf("%d", &num);
	while (num != -1)
	{
		p = (Node*)malloc(sizeof(Node));
		p->data = num;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;
		}
		tail = p;
		scanf("%d", &num);
	}
	return head;
}




void release(Node* head)
{
	Node* p1, * p2;
	p1 = head;
	while (p1 != NULL)
	{
		p2 = p1;
		p1 = p1->next;
		free(p2);
	}
	printf("链表内存释放成功");
}

void print(Node* head)
{
	Node* p = head;
	if (NULL == head)
	{
		printf("链表为空\n");
	}
	else
	{
		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
	}
	printf("\n");
}

void delete(Node* head, int num)
{
	Node* p1,*p2;
	if (NULL == head)
	{
		printf("链表为空!\n");
		return head;
	}
	p1 = head;
	p2 = head;
	while (p1->next && p1->data !=num)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->data == num)
	{
		if (head == p1)
		{
			head = head->next;
		}
		else
		{
			p2->next = p1->next;
		}
		free(p1);
		printf("删除成功!\n");
	}
	else
	{
		printf("链表中无此数据!\n");
		return head;
	}
}




int main()
{
	Node* head = creat();
	print(head);
    release(head);
}
