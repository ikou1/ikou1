#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
 typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
 

 int  hasCycle(struct ListNode* head)
 {
     if (!head)
     {
         return 0;
     }
     struct ListNode* tail = head;
     if (head->next == head)
     {
         return 1;
     }
     head->val = 0;
     while (tail)
     {
         if (tail->val)
         {
             return 1;
         }
         tail->val = 1;
         tail = tail->next;
     }
     return 0;
 }

int main()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
	head->next = p2;
	p2->next = NULL;
	head->val = 1;
	p2->val = 2;
    hasCycle(head);
   
}