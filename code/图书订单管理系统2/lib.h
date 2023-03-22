#define  _CRT_SECURE_NO_WARNINGS 1
#define max_capacity 5
#include<iostream>
#include<cassert>
#include<Windows.h>
#include<cstdlib>
#include<memory.h>
#include<cstring>
#include<iomanip>
using namespace std;
enum function
{
	add_lib= 1,
	delete_lib = 2,
	search_lib= 3,
	modify_lib= 4,
	display_lib= 5,
	sort_lib=6,
	clear_lib= 7,
};
class book
{
public:
	char book_num[10];
	char book_name[10];
	char date[10];
	int buy_num;
};

class information
{
public:
	char account[10];    //顾客账号
	char name[10];       //顾客姓名
	int kinds;             //借书种类
	book book_arr[10];
};


class lib
{
public:
	information* arr;
	int num;
	int capacity;
};



void lib_initialize(lib* pf);     //初始化管理系统
void lib_check(lib* pf);       //检查人数是否上限，若上限则扩容
void lib_destroy(lib* pf);    //销毁
void lib_add(lib* pf);    //订单创建
void lib_display(lib* pf);  //打印所有订单
void lib_search(lib* pf);    //查找并打印
void modify(lib* pf, int choice, int tmp, int flag);
void lib_modify(lib* pf);
int book_sort(const void* e1,const void* e2);
void lib_delete(lib* pf);