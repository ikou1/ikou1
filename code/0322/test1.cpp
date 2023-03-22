#define  _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
typedef struct ListNode
{
    int val;
    struct ListNode* next;
}ListNode;


 ListNode* middle(ListNode* head)
{
    ListNode* quick = head;
    ListNode* slow = head;
    while (quick!=NULL&&quick->next!=NULL)
    {
        quick = quick->next->next;
        slow = slow->next;
    }
    return slow;
}

ListNode* List_reverse(ListNode* head)
{
    ListNode* cur, * pre, * next;
    cur = head->next;
    next = cur->next;
    pre = head;
    while (cur)
    {
        cur->next = pre;
        pre = cur;
        cur = next;
        if (next)
        {
            next = next->next;
        }
    }
    head->next = NULL;
    return pre;
}




    int  chkPalindrome(ListNode* head)
    {
        ListNode* tail = head;
        while (tail->next)
        {
            tail = tail->next;
        }
        ListNode* middle_node = middle(head);
        List_reverse(middle_node);
        ListNode* tmp = head;

        while (tmp != middle_node)
        {
            if (tail->val != tmp->val)
            {
                return 0;
            }
            else
            {
                tmp = tmp->next;
                tail = tail->next;
            }
        }
        return 1;
    }

    int main()
    {
        printf("1");
    }

