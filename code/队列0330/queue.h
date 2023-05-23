#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int Qdata;


typedef struct QueueNode
{
	struct QueueNode* next;
	Qdata data;
}QNode;


typedef struct Queue
{
    QNode * head;
	QNode* tail;
	int size;
}Queue;


void Init_queue(Queue* pq);
void push_queue(Queue* pq, int k);
void pop_queue(Queue* pq);
int size_queue(Queue* pq);
Qdata front_queue(Queue* pq);
Qdata back_queue(Queue* pq);
bool empty_queue(Queue* pq);
