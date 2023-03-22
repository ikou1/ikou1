#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SLtest1()
{
	Node* head = NULL;
	SL_pushback(&head, 1);
	SL_pushback(&head, 2);
	SL_pushback(&head, 3);
	SL_pushback(&head, 4);
	SL_pushback(&head, 5);
	SL_pushfront(&head, 0);
	SL_pushback(&head, 6);
	SL_popfront(&head);
	SL_popfront(&head);
	SL_popfront(&head);
	SL_popback(&head);

	SL_print(head);
}


void SLtest2()
{
	Node* head = NULL;
	SL_pushback(&head, 1);
	//SL_pushback(&head, 2);
	SL_pushback(&head, 3);
	SL_pushback(&head, 4);
	//SL_pushback(&head, 5);
	SL_insertfront(head, SL_findnode(head, 3), 2);
	SL_insertafter(SL_findnode(head, 4), 5);
	SL_pushback(&head, 6);
	SL_erase(head, SL_findnode(head, 6));
	SL_print(head);
}


void SLtest3()
{
	Node* head = NULL;
	SL_pushback(&head, 1);
	SL_pushback(&head, 1);
	SL_pushback(&head, 1);
	SL_pushback(&head, 1);
	SL_pushback(&head, 1);
	SL_pushback(&head, 1);
	
	removeElements(head, 1);
	SL_print(head);



}


int main()
{
	//SLtest1();
	SLtest3();

}
