#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
typedef struct ListNode
{
    int data;
    struct ListNode* next;
}Node;


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



Node* reverseList(Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    if (head->next->next == NULL)
    {
        Node* tmp = head->next;
        tmp->next = head;
        head->next = NULL;
        return tmp;
    }
    Node* ppre, * pre, * cur;
    ppre = head;
    pre = ppre->next;
    cur = pre->next;
    ppre->next = NULL;
    while (1)
    {
        pre->next = ppre;
        ppre = pre;
        pre = cur;
        if (pre->next == NULL)
        {
            pre->next = ppre;
            return pre;
        }
        cur = cur->next;
    }
}

int main()
{
	Node* p1 = (Node*)malloc(sizeof(Node));
	Node* p2 = (Node*)malloc(sizeof(Node));
	Node* p3 = (Node*)malloc(sizeof(Node));
	Node* p4 = (Node*)malloc(sizeof(Node));
	Node* p5 = (Node*)malloc(sizeof(Node));
	p1->data = 1;
	p2->data = 2;
	p3->data = 3;
	p4->data = 4;
	p5->data = 5;
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = NULL;
    SL_print(reverseList(p1));

}
