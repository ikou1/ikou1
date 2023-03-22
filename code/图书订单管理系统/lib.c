#define  _CRT_SECURE_NO_WARNINGS 1
#include"lib.h"
void lib_initialize(lib* pf)     //��ʼ������ϵͳ
{
	assert(pf);
	pf->arr = (information*)malloc(max_capacity * sizeof(information));   
	memset(pf->arr, 0, max_capacity * sizeof(information));
	pf->num = 0;
	pf->capacity = max_capacity;
	return;
}


void lib_check(lib* pf)       //��������Ƿ����ޣ�������������
{
	assert(pf);
	if (pf->num == pf->capacity - 1)
	{
		information* new = realloc(pf->arr, 2 * (pf->capacity));
		if (new == NULL)
		{
			perror("realloc failure!");
			return;
		}
		else
		{
			pf->arr = new;
			pf->capacity = 2 * (pf->capacity);
			printf("���ݳɹ�!\n");
		}
	}
}



void lib_destroy(lib* pf)    //����
{
	assert(pf);
	free(pf->arr);
	pf->num = 0;
}


void lib_add(lib* pf)    //��������
{
	assert(pf);
	lib_check(pf);
	printf("������˿��˺ţ�\n");
	scanf("%s", pf->arr[pf->num].account);
	printf("������˿�������\n");
	scanf("%s", pf->arr[pf->num].name);
	printf("�����붩�����ڣ�eg��2021/6/15����\n");
	scanf("%s", pf->arr[pf->num].date);
	printf("������ͼ����ţ�\n");
	scanf("%s", pf->arr[pf->num].book_name);
	printf("�����빺��������\n");
	scanf("%d", &pf->arr[pf->num].buy_num);
	printf("��ӳɹ���\n");
	(pf->num)++;
}




void lib_display(lib* pf)     //��ӡ���ж���
{
	assert(pf);
	if (pf->num == 0)
	{
		printf("ͼ�鶩��Ϊ�գ��޷���ӡ��\n");
	}
	system("cls");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-4s\n", "�˿��˺�", "�˿�����", "��������", "ͼ�����", "����","��������");
	for (int i = 0; i <= (pf->num) - 1; i++)
	{
		printf("%-10s\t", pf->arr[i].account);
		printf("%-10s\t", pf->arr[i].name);
		printf("%-10s\t", pf->arr[i].date);
		printf("%-10s\t", pf->arr[i].book_num);
		printf("%-10s\t", pf->arr[i].book_name);
		printf("%-4d\n", pf->arr[i].buy_num);
	}
	return;
}



void lib_modify(lib* pf)
{
	assert(pf);
	if (pf->num == 0)
	{
		printf("ͼ�鶩��Ϊ�գ��޷��޸ģ�\n");
	}
	printf("������˿��˺ţ�\n");
}