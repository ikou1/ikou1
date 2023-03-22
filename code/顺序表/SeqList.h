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



void initialize(SL* pf);						 //˳����ʼ��
void destroy(SL* pf);							 //˳�������
void pushback(SL* pf, SL_data k);		         //˳���β��
void popback(SL* pf);					         //˳���βɾ
void print(SL* pf);						         //˳����ӡ
void pushfront(SL* pf, SL_data k);		         //˳���ͷ��
void popfront(SL* pf);					         //˳���ͷɾ
void insert(SL* pf, int pos, SL_data k);         //˳����м����
void erase(SL* pf, int pos);                     //˳����м�ɾ��