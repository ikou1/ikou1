#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>



typedef struct ListNode
{
	int data;
	struct ListNode* pre;
	struct ListNode* next;
}Node;



Node* Buy_Node(int x);
Node* Init_Node();
void pushback(Node* guard, int x);
void pushfront(Node* guard, int x);
void print(Node* guard);
void popback(Node* guard);
void popfront(Node* guard);
Node* find(Node* guard, int x);
void insert(Node* pos, int x);
void erase(Node* pos);
