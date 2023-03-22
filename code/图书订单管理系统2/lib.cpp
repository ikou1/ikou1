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
			cout<<"���ݳɹ�!\n";
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
	cout<<"������˿��˺ţ�\n";
	cin >> pf->arr[pf->num].account;
	
	cout<<"������˿�������\n";
	cin >> pf->arr[pf->num].name;

	cout << "���������������Ŀ��\n";
	cin >> pf->arr[pf->num].kinds;

	for (int i = 0; i <= pf->arr[pf->num].kinds - 1; i++)
	{
		cout << "--------------------------------------------------book" << i + 1 << "--------------------------------------------------\n";

		cout << "������ͼ�����"<<"(book"<<i+1<<")"<<"��\n";
		cin >> pf->arr[pf->num].book_arr[i].book_name;
		
		cout << "����������" << "(book" << i + 1 << ")" << "��\n";
		cin >> pf->arr[pf->num].book_arr[i].book_num;
		
		cout<<"�����붩������" << "(book" << i + 1 << ")" << "��\n";
		cin >> pf->arr[pf->num].book_arr[i].date;
		
		cout << "�����빺������" << "(book" << i + 1 << ")" << "��\n";;
		cin >> pf->arr[pf->num].book_arr[i].buy_num;
		
		cout << "--------------------------------------------------book" << i + 1 << "--------------------------------------------------\n\n";
	}
	(pf->num)++;
}



void lib_display(lib* pf)     //��ӡ���ж���
{
	assert(pf);
	if (pf->num == 0)
	{
		cout << "ͼ�鶩��Ϊ�գ��޷���ӡ��\n";
	}
	system("cls");
	cout << setw(10) << left << "�˿��˺�" << "\t";
	cout << setw(10) << left << "�˿�����" << "\t";
	cout << setw(10) << left << "ͼ�����" << "\t";
	cout << setw(10) << left << "����" << "\t";
	cout << setw(10) << left << "��������" << "\t";
	cout << setw(10) << left << "��������" << "\n";
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



void lib_search(lib* pf)     //��ѯ����ӡ
{
	assert(pf);
	if (pf->num == 0)
	{
		cout << "ͼ�鶩��Ϊ�գ��޷����ң�\n";
	}
	system("cls");
	flag1:
	char str[10];
	cout << "��������Ҫ���ҵĹ˿��˺ţ�\n";
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
		cout << "ϵͳ�в��޴��ˣ����������˺��Ƿ�����\n";
		char choice[5];
		flag2:
		cout << "�Ƿ�������ң���YES/NO��\n";
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
			cout << "ѡ�����������ѡ��\n";
			goto flag2;
		}
	}




	cout << "\n\n\n��ѯ������£�\n";
	cout << setw(10) << left << "�˿��˺�" << "\t";
	cout << setw(10) << left << "�˿�����" << "\t";
	cout << setw(10) << left << "ͼ�����" << "\t";
	cout << setw(10) << left << "����" << "\t";
	cout << setw(10) << left << "��������" << "\t";
	cout << setw(10) << left << "��������" << "\n";
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
		cout << "ͼ�鶩��Ϊ�գ��޷��޸ģ�\n";
	}
	system("cls");
	char str[10];
	cout << "��������Ҫ�޸���Ϣ�Ĺ˿��˺ţ�\n";
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
	cout << setw(10) << left << "�˿��˺�" << "\t";
	cout << setw(10) << left << "�˿�����" << "\t";
	cout << setw(10) << left << "ͼ�����" << "\t";
	cout << setw(10) << left << "����" << "\t";
	cout << setw(10) << left << "��������" << "\t";
	cout << setw(10) << left << "��������" << "\n";
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
		cout << "\n\n\n��ѡ����Ҫ�޸���Ϣ��ͼ����ţ�\n";
	
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
			cout << "���޴���Ϣ������ͼ�����Ƿ�����\n";
			char choice[5];
		flag2:
			cout << "�Ƿ�������ң���YES/NO��\n";
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
				cout << "ѡ�����������ѡ��\n";
				goto flag2;
			}
		}
		int input;
		do
		{
			cout << "*********************             1.ͼ����         2.����               *************************************\n";
			cout << "*********************             3.��������         4.��������           *************************************\n";
			cout << "*********************             0.�˳�                                  *************************************\n";


			cout << setw(10) << left << "\n\n�˿��˺�" << "\t";
			cout << setw(10) << left << "�˿�����" << "\t";
			cout << setw(10) << left << "ͼ�����" << "\t";
			cout << setw(10) << left << "����" << "\t";
			cout << setw(10) << left << "��������" << "\t";
			cout << setw(10) << left << "��������" << "\n";
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
				cout << "�˳��ɹ���\n";
				Sleep(1000);
				return;
				break;
			}
			default:
			{
				cout << "ѡ�����������ѡ��\n";
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
			cout << "�뿪ʼ�޸�ͼ���ţ�\n";
			cin >> pf->arr[tmp].book_arr[flag].book_num;
			cout << "�޸ĳɹ���\n\n\n";
			break;
		}
		case 2:
		{
			cout << "�뿪ʼ�޸�������\n";
			cin >> pf->arr[tmp].book_arr[flag].book_name;
			cout << "�޸ĳɹ���\n\n\n";
			break;
		}
		case 3:
		{
			cout << "�뿪ʼ�޸Ķ������ڣ�\n";
			cin >> pf->arr[tmp].book_arr[flag].date;
			cout << "�޸ĳɹ���\n\n\n";
			break;
		}
		case 4:
		{
			cout << "�뿪ʼ�޸Ĺ���������\n";
			cin >> pf->arr[tmp].book_arr[flag].buy_num;
			cout << "�޸ĳɹ���\n\n\n";;
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
		cout << "��������Ҫɾ��������Ϣ�Ĺ˿��˺ţ�\n";
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
		cout << setw(10) << left << "�˿��˺�" << "\t";
		cout << setw(10) << left << "�˿�����" << "\t";
		cout << setw(10) << left << "ͼ�����" << "\t";
		cout << setw(10) << left << "����" << "\t";
		cout << setw(10) << left << "��������" << "\t";
		cout << setw(10) << left << "��������" << "\n";
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
		cout << "\n\n\n��ѡ����Ҫɾ��������ͼ����ţ�\n";

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
			cout << "�޴�ͼ�������Ϣ������ͼ�����Ƿ�����\n";
			char choice[5];
		flag2:
			cout << "�Ƿ����ɾ������YES/NO��\n";
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
				cout << "ѡ�����������ѡ��\n";
				goto flag2;
			}
		}
		for (int i = flag; i <= pf->arr[tmp].kinds - 2; i++)
		{
			memmove((pf->arr[tmp].book_arr)+i,(pf->arr[tmp].book_arr)+i+1, sizeof(book));
		}
		pf->arr[tmp].kinds--;
		cout << "ɾ���ɹ���\n";
		Sleep(2000);
	}