#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLdata;
typedef struct SListnode
{
	SLdata data;
	struct SListnode* next;
}Node;

void SL_print(Node* head);
void SL_pushback(Node** phead, SLdata x);
void SL_pushfront(Node** phead, SLdata x);
void SL_popback(Node** phead);
void SL_popfront(Node** phead);
Node* createnode(SLdata x);
Node* SL_findnode(Node* head, SLdata k);
Node* SL_insertfront(Node* head, Node* pos, SLdata x);
Node* SL_insertafter(Node* pos, SLdata x);
Node* SL_erase(Node* head, Node* pos);
Node* removeElements(Node* head, int val);
