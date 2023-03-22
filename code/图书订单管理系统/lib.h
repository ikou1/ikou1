#define  _CRT_SECURE_NO_WARNINGS 1
#define max_capacity 5
#include<stdio.h>
#include<memory.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

enum function
{
	add = 1,
	delete = 2,
	search=3,
	modify=4,
	sort=6,
	display=5,
	clear=7,
};

typedef struct information
{
	char account[10];
	char name[10];
	char date[10];
	char book_num[10];
	char book_name[10];
	int buy_num;
}information;


typedef struct lib
{
	information* arr;
	int num;
	int capacity;
}lib;

void lib_initialize(lib* pf);       //初始化管理系统
void lib_check(lib* pf);     //检查人数是否上限，若上限则扩容
void lib_destroy(lib* pf);    //销毁
void lib_add(lib* pf);    //订单创建
void lib_display(lib* pf);     //打印所有订单


