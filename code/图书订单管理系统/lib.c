#define  _CRT_SECURE_NO_WARNINGS 1
#include"lib.h"
void lib_initialize(lib* pf)     //初始化管理系统
{
	assert(pf);
	pf->arr = (information*)malloc(max_capacity * sizeof(information));   
	memset(pf->arr, 0, max_capacity * sizeof(information));
	pf->num = 0;
	pf->capacity = max_capacity;
	return;
}


void lib_check(lib* pf)       //检查人数是否上限，若上限则扩容
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
			printf("扩容成功!\n");
		}
	}
}



void lib_destroy(lib* pf)    //销毁
{
	assert(pf);
	free(pf->arr);
	pf->num = 0;
}


void lib_add(lib* pf)    //订单创建
{
	assert(pf);
	lib_check(pf);
	printf("请输入顾客账号：\n");
	scanf("%s", pf->arr[pf->num].account);
	printf("请输入顾客姓名：\n");
	scanf("%s", pf->arr[pf->num].name);
	printf("请输入订数日期（eg：2021/6/15）：\n");
	scanf("%s", pf->arr[pf->num].date);
	printf("请输入图书书号：\n");
	scanf("%s", pf->arr[pf->num].book_name);
	printf("请输入购买数量：\n");
	scanf("%d", &pf->arr[pf->num].buy_num);
	printf("添加成功！\n");
	(pf->num)++;
}




void lib_display(lib* pf)     //打印所有订单
{
	assert(pf);
	if (pf->num == 0)
	{
		printf("图书订单为空，无法打印！\n");
	}
	system("cls");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-4s\n", "顾客账号", "顾客姓名", "订书日期", "图书书号", "书名","购买数量");
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
		printf("图书订单为空，无法修改！\n");
	}
	printf("请输入顾客账号：\n");
}