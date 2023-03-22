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
		information* newp = (information*)realloc(pf->arr, 2 * (pf->capacity));
		if (newp== NULL)
		{
			perror("realloc failure!");
			return;
		}
		else
		{
			pf->arr = newp;
			pf->capacity = 2 * (pf->capacity);
			cout<<"扩容成功!\n";
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
	cout<<"请输入顾客账号：\n";
	cin >> pf->arr[pf->num].account;
	
	cout<<"请输入顾客姓名：\n";
	cin >> pf->arr[pf->num].name;

	cout << "请输入借书种类数目：\n";
	cin >> pf->arr[pf->num].kinds;

	for (int i = 0; i <= pf->arr[pf->num].kinds - 1; i++)
	{
		cout << "--------------------------------------------------book" << i + 1 << "--------------------------------------------------\n";

		cout << "请输入图书书号"<<"(book"<<i+1<<")"<<"：\n";
		cin >> pf->arr[pf->num].book_arr[i].book_name;
		
		cout << "请输入书名" << "(book" << i + 1 << ")" << "：\n";
		cin >> pf->arr[pf->num].book_arr[i].book_num;
		
		cout<<"请输入订书日期" << "(book" << i + 1 << ")" << "：\n";
		cin >> pf->arr[pf->num].book_arr[i].date;
		
		cout << "请输入购买数量" << "(book" << i + 1 << ")" << "：\n";;
		cin >> pf->arr[pf->num].book_arr[i].buy_num;
		
		cout << "--------------------------------------------------book" << i + 1 << "--------------------------------------------------\n\n";
	}
	(pf->num)++;
}



void lib_display(lib* pf)     //打印所有订单
{
	assert(pf);
	if (pf->num == 0)
	{
		cout << "图书订单为空，无法打印！\n";
	}
	system("cls");
	cout << setw(10) << left << "顾客账号" << "\t";
	cout << setw(10) << left << "顾客姓名" << "\t";
	cout << setw(10) << left << "图书书号" << "\t";
	cout << setw(10) << left << "书名" << "\t";
	cout << setw(10) << left << "订书日期" << "\t";
	cout << setw(10) << left << "购买数量" << "\n";
	for (int i = 0; i <= (pf->num) - 1; i++)
	{
		cout << setw(10) << left << pf->arr[i].account << "\t";
		cout << setw(10) << left << pf->arr[i].name << "\t";
		int tmp = pf->arr[i].kinds;
		for (int j = 0; j <= tmp - 1; j++)
		{
			if (j)
			{
				cout << setw(20) << left << " ";
				cout << "\t\t";
			}
			cout << setw(10) << left << pf->arr[i].book_arr[j].book_num << "\t";
			cout << setw(10) << left << pf->arr[i].book_arr[j].book_name << "\t";
			cout << setw(10) << left << pf->arr[i].book_arr[j].date << "\t";
			cout << setw(4) << left << pf->arr[i].book_arr[j].buy_num << "\n";
		}
		cout << "\n";

	}
	return;
}



void lib_search(lib* pf)     //查询并打印
{
	assert(pf);
	if (pf->num == 0)
	{
		cout << "图书订单为空，无法查找！\n";
	}
	system("cls");
	flag1:
	char str[10];
	cout << "请输入需要查找的顾客账号：\n";
	cin >> str;
	int tmp =-1;
	for (int i = 0; i <= pf->num - 1; i++)
	{
		if (!strcmp(str, pf->arr[i].account))
		{
			tmp = i;
			break;
		}
	}
	if (tmp == -1)
	{
		cout << "系统中查无此人，请检查输入账号是否有误！\n";
		char choice[5];
		flag2:
		cout << "是否继续查找？（YES/NO）\n";
		cin >> choice;
		if (!strcmp(choice, "YES"))
		{
			goto flag1;
		}
		else if (!strcmp(choice, "NO"))
		{
			cout << "\n";
			return;
		}
		else
		{
			cout << "选择错误，请重新选择！\n";
			goto flag2;
		}
	}




	cout << "\n\n\n查询结果如下：\n";
	cout << setw(10) << left << "顾客账号" << "\t";
	cout << setw(10) << left << "顾客姓名" << "\t";
	cout << setw(10) << left << "图书书号" << "\t";
	cout << setw(10) << left << "书名" << "\t";
	cout << setw(10) << left << "订书日期" << "\t";
	cout << setw(10) << left << "购买数量" << "\n";
	cout << setw(10) << left << pf->arr[tmp].account << "\t";
	cout << setw(10) << left << pf->arr[tmp].name << "\t";
	for (int j = 0; j <= pf->arr[tmp].kinds - 1; j++)
	{
		if (j)
		{
			cout << setw(20) << left << " ";
			cout << "\t\t";
		}
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_num << "\t";
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_name << "\t";
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].date << "\t";
		cout << setw(4) << left << pf->arr[tmp].book_arr[j].buy_num << "\n";
	}
	cout << "\n\n\n";
}





void lib_modify(lib* pf)
{
	assert(pf);
	if (pf->num == 0)
	{
		cout << "图书订单为空，无法修改！\n";
	}
	system("cls");
	char str[10];
	cout << "请输入需要修改信息的顾客账号：\n";
	cin >> str;
	int tmp = -1;
	for (int i = 0; i <= pf->num - 1; i++)
	{
		if (!strcmp(str, pf->arr[i].account))
		{
			tmp = i;
			break;
		}
	}
	cout << setw(10) << left << "顾客账号" << "\t";
	cout << setw(10) << left << "顾客姓名" << "\t";
	cout << setw(10) << left << "图书书号" << "\t";
	cout << setw(10) << left << "书名" << "\t";
	cout << setw(10) << left << "订书日期" << "\t";
	cout << setw(10) << left << "购买数量" << "\n";
	cout << setw(10) << left << pf->arr[tmp].account << "\t";
	cout << setw(10) << left << pf->arr[tmp].name << "\t";
	for (int j = 0; j <= pf->arr[tmp].kinds - 1; j++)
	{
		if (j)
		{
			cout << setw(20) << left << " ";
			cout << "\t\t";
		}
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_num << "\t";
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_name << "\t";
		cout << setw(10) << left << pf->arr[tmp].book_arr[j].date << "\t";
		cout << setw(4) << left << pf->arr[tmp].book_arr[j].buy_num << "\n";
	}
flag1:
		cout << "\n\n\n请选择需要修改信息的图书书号：\n";
	
		char num[10];
		cin >> num;
		int flag = -1;
		for (int i = 0; i <= pf->arr[tmp].kinds - 1; i++)
		{
			if (!strcmp(num, pf->arr[tmp].book_arr[i].book_num))
			{
				flag = i;
				break;
			}
		}

		if (flag == -1)
		{
			cout << "查无此信息，请检查图书编号是否有误！\n";
			char choice[5];
		flag2:
			cout << "是否继续查找？（YES/NO）\n";
			cin >> choice;
			if (!strcmp(choice, "YES"))
			{
				goto flag1;
			}
			else if (!strcmp(choice, "NO"))
			{
				cout << "\n";
				return;
			}
			else
			{
				cout << "选择错误，请重新选择！\n";
				goto flag2;
			}
		}
		int input;
		do
		{
			cout << "*********************             1.图书编号         2.书名               *************************************\n";
			cout << "*********************             3.订书日期         4.购买数量           *************************************\n";
			cout << "*********************             0.退出                                  *************************************\n";


			cout << setw(10) << left << "\n\n顾客账号" << "\t";
			cout << setw(10) << left << "顾客姓名" << "\t";
			cout << setw(10) << left << "图书书号" << "\t";
			cout << setw(10) << left << "书名" << "\t";
			cout << setw(10) << left << "订书日期" << "\t";
			cout << setw(10) << left << "购买数量" << "\n";
			cout << setw(10) << left << pf->arr[tmp].account << "\t";
			cout << setw(10) << left << pf->arr[tmp].name << "\t";
			cout << setw(10) << left << pf->arr[tmp].book_arr[flag].book_num << "\t";
			cout << setw(10) << left << pf->arr[tmp].book_arr[flag].book_name << "\t";
			cout << setw(10) << left << pf->arr[tmp].book_arr[flag].date << "\t";
			cout << setw(4) << left << pf->arr[tmp].book_arr[flag].buy_num << "\n\n\n";


			cin >> input;
			switch (input)
			{
			case 1:
			{
				modify(pf, 1, tmp, flag);
				break;
			}
			case 2:
			{
				modify(pf, 2, tmp, flag);
				break;
			}
			case 3:
			{
				modify(pf, 3, tmp, flag);
				break;
			}
			case 4:
			{
				modify(pf, 4, tmp, flag);
				break;
			}
			case 0:
			{
				cout << "退出成功！\n";
				Sleep(1000);
				return;
				break;
			}
			default:
			{
				cout << "选择错误，请重新选择！\n";
				break;
			}
			}
		} while (input);
}



	void modify(lib * pf, int choice, int tmp, int flag)
	{
		switch (choice)
		{
		case 1:
		{
			cout << "请开始修改图书编号：\n";
			cin >> pf->arr[tmp].book_arr[flag].book_num;
			cout << "修改成功！\n\n\n";
			break;
		}
		case 2:
		{
			cout << "请开始修改书名：\n";
			cin >> pf->arr[tmp].book_arr[flag].book_name;
			cout << "修改成功！\n\n\n";
			break;
		}
		case 3:
		{
			cout << "请开始修改订书日期：\n";
			cin >> pf->arr[tmp].book_arr[flag].date;
			cout << "修改成功！\n\n\n";
			break;
		}
		case 4:
		{
			cout << "请开始修改购买数量：\n";
			cin >> pf->arr[tmp].book_arr[flag].buy_num;
			cout << "修改成功！\n\n\n";;
			break;
		}
		}
	}



	int book_sort(const void* e1, const void* e2)
	{
		information* p1 = (information*)e1;
		information* p2 = (information*)e2;
		return strcmp(p1->account, p2->account);
	}



	void lib_delete(lib* pf)
	{
		char str[10];
		cout << "请输入需要删除订单信息的顾客账号：\n";
		cin >> str;
		int tmp = -1;
		for (int i = 0; i <= pf->num - 1; i++)
		{
			if (!strcmp(str, pf->arr[i].account))
			{
				tmp = i;
				break;
			}
		}
		assert(pf->arr[tmp].kinds > 1);
		cout << setw(10) << left << "顾客账号" << "\t";
		cout << setw(10) << left << "顾客姓名" << "\t";
		cout << setw(10) << left << "图书书号" << "\t";
		cout << setw(10) << left << "书名" << "\t";
		cout << setw(10) << left << "订书日期" << "\t";
		cout << setw(10) << left << "购买数量" << "\n";
		cout << setw(10) << left << pf->arr[tmp].account << "\t";
		cout << setw(10) << left << pf->arr[tmp].name << "\t";
		for (int j = 0; j <= pf->arr[tmp].kinds - 1; j++)
		{
			if (j)
			{
				cout << setw(20) << left << " ";
				cout << "\t\t";
			}
			cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_num << "\t";
			cout << setw(10) << left << pf->arr[tmp].book_arr[j].book_name << "\t";
			cout << setw(10) << left << pf->arr[tmp].book_arr[j].date << "\t";
			cout << setw(4) << left << pf->arr[tmp].book_arr[j].buy_num << "\n";
		}
	flag1:
		cout << "\n\n\n请选择需要删除订单的图书书号：\n";

		char num[10];
		cin >> num;
		int flag = -1;
		for (int i = 0; i <= pf->arr[tmp].kinds - 1; i++)
		{
			if (!strcmp(num, pf->arr[tmp].book_arr[i].book_num))
			{
				flag = i;
				break;
			}
		}

		if (flag == -1)
		{
			cout << "无此图书书号信息，请检查图书编号是否有误！\n";
			char choice[5];
		flag2:
			cout << "是否继续删除？（YES/NO）\n";
			cin >> choice;
			if (!strcmp(choice, "YES"))
			{
				goto flag1;
			}
			else if (!strcmp(choice, "NO"))
			{
				cout << "\n";
				return;
			}
			else
			{
				cout << "选择错误，请重新选择！\n";
				goto flag2;
			}
		}
		for (int i = flag; i <= pf->arr[tmp].kinds - 2; i++)
		{
			memmove((pf->arr[tmp].book_arr)+i,(pf->arr[tmp].book_arr)+i+1, sizeof(book));
		}
		pf->arr[tmp].kinds--;
		cout << "删除成功！\n";
		Sleep(2000);
	}