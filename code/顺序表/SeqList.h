#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define Capacity_max 4
typedef int SL_data;

typedef struct SeqList
{
	SL_data* arr;
	int num;
	int capacity;
}SL;



void initialize(SL* pf);						 //顺序表初始化
void destroy(SL* pf);							 //顺序表销毁
void pushback(SL* pf, SL_data k);		         //顺序表尾插
void popback(SL* pf);					         //顺序表尾删
void print(SL* pf);						         //顺序表打印
void pushfront(SL* pf, SL_data k);		         //顺序表头插
void popfront(SL* pf);					         //顺序表头删
void insert(SL* pf, int pos, SL_data k);         //顺序表中间插入
void erase(SL* pf, int pos);                     //顺序表中间删除