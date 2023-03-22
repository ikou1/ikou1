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
	char account[10];    //�˿��˺�
	char name[10];       //�˿�����
	int kinds;             //��������
	book book_arr[10];
};


class lib
{
public:
	information* arr;
	int num;
	int capacity;
};



void lib_initialize(lib* pf);     //��ʼ������ϵͳ
void lib_check(lib* pf);       //��������Ƿ����ޣ�������������
void lib_destroy(lib* pf);    //����
void lib_add(lib* pf);    //��������
void lib_display(lib* pf);  //��ӡ���ж���
void lib_search(lib* pf);    //���Ҳ���ӡ
void modify(lib* pf, int choice, int tmp, int flag);
void lib_modify(lib* pf);
int book_sort(const void* e1,const void* e2);
void lib_delete(lib* pf);