#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void initialize(SL* pf)     //˳����ʼ��
{
	pf->arr = (SL_data*)malloc(Capacity_max * sizeof(SL_data));
	pf->num = 0;
	pf->capacity =Capacity_max;
}


void destroy(SL* pf)     //˳�������
{
	free(pf->arr);
	pf->capacity = 0;
	pf->num = 0;
}



void pushback(SL* pf, SL_data k)     //˳���β��
{
	if (pf->capacity== pf->num)
	{
		SL_data* tmp = (SL_data*)realloc(pf->arr, 2 * pf->capacity * sizeof(SL_data));
		if (tmp == NULL)
		{
			perror("realloc failure");
			return;
		}
		pf->arr= tmp;
		pf->capacity *= 2;
	}
	pf->arr[pf->num] = k;
	pf->num++;
}


void popback(SL* pf)            //˳���βɾ
{
	if (pf->num == 0)
	{
		assert((pf->num)>0);
		return;
	}
	(pf->num)--;
}



void print(SL* pf)                //˳����ӡ
{
	for (int i = 0; i <= pf->num - 1; i++)
	{
		printf("%d ", (pf->arr)[i]);
	}
	printf("\n");
}




void pushfront(SL* pf,SL_data k)     //˳���ͷ��
{
	if (pf->capacity-1== pf->num)
	{
		SL_data* tmp = (SL_data*)realloc(pf->arr, 2 * pf->capacity * sizeof(SL_data));
		if (tmp == NULL)
		{
			perror("realloc failure");
			return;
		}
		pf->arr = tmp;
		pf->capacity *= 2;
	}
	int end = pf->num - 1;
	while (end >= 0)
	{
		pf->arr[end + 1] = pf->arr[end];
		end--;
	}
	pf->arr[0] = k;
	pf->num++;
}




 
void popfront(SL* pf)       //˳���ͷɾ
{
	if (pf->num == 0)
	{
		assert(pf->num > 0);
		return;
	}
	int end = 0;
	while (end < pf->num - 1)
	{
		pf->arr[end] = pf->arr[end+1];
		end++;
	}
	pf->num--;
}





void insert(SL* pf, int pos, SL_data k)           //˳����м����
{
	assert(pf);
	assert(pos >= 0 && pos <= pf->num - 1);
	if (pf->capacity-1== pf->num)
	{
		SL_data* tmp = (SL_data*)realloc(pf->arr, 2 * pf->capacity * sizeof(SL_data));
		if (tmp == NULL)
		{
			perror("realloc failure");
			return;
		}
		pf->arr = tmp;
		pf->capacity *= 2;
	}
	int end =pf->num-1;
	while (end>=pos)
	{
		pf->arr[end + 1] = pf->arr[end];
		end--;
	}
	pf->arr[pos] = k;
	pf->num++;
}



void erase(SL* pf, int pos)         //˳����м�ɾ��
{
	assert(pf);
	assert(pos >= 0 && pos <= pf->num - 1);
	int end = pos;
	while (end <= pf->num - 2)
	{
		pf->arr[end] = pf->arr[end + 1];
		end++;
	}
	pf->num--;
}