#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;
};
struct ListNode* detectCycle(struct ListNode* head)
{
    if (!head)
    {
        return NULL;
    }
    struct ListNode* quick, * slow, * tmp;
    quick = slow = head;
    while (quick && quick->next)
    {
        if (quick == slow)
        {
            tmp = head;
            while (slow != tmp)
            {
                tmp = tmp->next;
                slow = slow->next;
            }
            return slow;
        }
        else
        {
            slow = slow->next;
            quick = quick->next->next;
        }
    }
    return NULL;
}
int main()
{
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 3;
    p2->next = p3;
    p2->val = 2;
    p3->next = p4;
    p3->val = 0;
    p4->next = NULL;
    p4->val = -4;
    head->next = p2;
    detectCycle(head);

}
