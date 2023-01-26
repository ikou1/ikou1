#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initialize_contact(Contact* p)      //��ʼ��ͨѶ¼
{
	assert(p);
	memset(p->data, 0, sizeof(p->data));
	p->num = 0;
	return;
}



void add_contact(Contact* p)    //������ϵ��
{
	assert(p);
	if (p->num == 100)
	{
		printf("ͨѶ¼�������޷��������\n");
		return;
	}
	system("cls");
	printf("�뿪ʼ�����ϵ�ˣ�\n");
	printf("����������   :>\n");
	scanf("%s", p->data[p->num].name);
	printf("����������   :>\n");
	scanf("%d", &(p->data[p->num].age));
	printf("�������Ա�   :>\n");
	scanf("%s", p->data[p->num].sex);
	printf("�������ַ   :>\n");
	scanf("%s", p->data[p->num].address);
	printf("������绰����   :>\n");
	scanf("%s", p->data[p->num].tele);
	printf("���������ϵ��..........\n");
	Sleep(2000);
	printf("��ӳɹ���\n");
	(p->num)++;
}


void display_contact(const Contact* p)  //��ӡͨѶ¼
{
	assert(p);
	/*printf("����                  \t����  \t�Ա�        \tסַ                  \t�绰          \n");*/
	if (p->num == 0)
	{
		printf("ͨѶ¼�ѿգ��޷���ӡ!\n");
		return;
	}
	system("cls");
	printf("%-20s\t%-4s\t%-10s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "סַ", "�绰");
	for (int i = 0; i < p->num; i++)
	{
		printf("%-20s\t", p->data[i].name);
		printf("%-4d\t", p->data[i].age);
		printf("%-10s\t", p->data[i].sex);
		printf("%-20s\t", p->data[i].address);
		printf("%-12s", p->data[i].tele);
		printf("\n");
	}
}




void display_information(const Contact* p,int n)        //�����±꣬��ӡ������Ϣ
{
	assert(p);
	system("cls");
	printf("%-20s\t%-4s\t%-10s\t%-20s\t%-12s\n", "����", "����", "�Ա�", "סַ", "�绰");
	printf("%-20s\t", p->data[n].name);
	printf("%-4d\t", p->data[n].age);
	printf("%-10s\t", p->data[n].sex);
	printf("%-20s\t", p->data[n].address);
	printf("%-12s", p->data[n].tele);
	printf("\n");
	return;
}



int search_person(const Contact* p, char input_name[20])     //�����������ң��ҵ��򷵻��±꣬�Ҳ�������-1
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->num; i++)
	{
		if (strcmp(input_name, p->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}




void search_contact(const Contact* p, char input_name[20])     //�������������������Ϣ
{
	assert(p);
	if (search_person(p, input_name) == -1)
	{
		printf("��Ǹ,ͨѶ¼�в��޴���!\n");
	}
	else
	{
		display_information(p, search_person(p,input_name));
	}
	return;
}



void sort_contact(Contact*p,information arr[max_con],int size)     //ͨѶ¼����ĸ����
{
	assert(p);
	qsort(arr,p->num,size,information_sort);
	system("cls");
	printf("��������..........\n");
	Sleep(2000);
	printf("����ɹ���\n");
	return;
}



int information_sort(const void* e1,const void* e2)               //qsort�������׼����
{
	assert(e1);
	assert(e2);
	char*p1=((information*)e1)->name;
	char*p2=((information*)e2)->name;
	return (strcmp(p1,p2));
}


void delete_contact(Contact* p, char input_name[20])        //ɾ����ϵ��
{
	assert(p);
	system("cls");
	if (search_person(p, input_name) == -1)
	{
		printf("��Ǹ��ͨѶ¼�в��޴���!\n");
		return;
	}
	int pos = search_person(p, input_name);
	initialize_person(p, pos);
	int i;
	for (i = pos;i <= p->num - 2; i++)
	{
		p->data[i] = p->data[i + 1];
		/*strcpy(p->data[i].name, p->data[i + 1].name);
		p->data[i].age = p->data[i + 1].age;
		strcpy(p->data[i].sex, p->data[i + 1].sex);
		strcpy(p->data[i].address, p->data[i + 1].address);
		strcpy(p->data[i].tele, p->data[i + 1].tele);*/
	}
	p->num--;
	return;
}



void initialize_person(Contact* p, int pos)         //���ø�����Ϣ
{
	assert(p);
	int sz = sizeof(p->data[0]);
	information* tmp = p->data;
	memset(tmp+pos, 0, sz);
	return;
}



void print_delete(int bool)
{
	if (bool == -1)
	{
		return;
	}
	char arr1[10] = { '.' };
	printf("����ɾ��\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%c ",arr1[i]);
		Sleep(200);
	}
	printf("\nɾ���ɹ�!\n");
	return;
}




void modify_contact(Contact* p,int pos)
{
	assert(p);
	if (p->num == 0)
	{
		printf("ͨѶ¼�ѿգ��޷��޸�\n");
		return;
	}
	system("cls");
	printf("*********************       1.����         2.����       *************************************\n");
	printf("*********************       3.�Ա�         4.סַ       *************************************\n");
	printf("*********************       5.�绰         0.�˳�       *************************************\n");
	int input;
	printf("���������ѡ������Ҫ�޸ĵ���Ϣ   :>");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			char input_name[20] = { '\0' };
			printf("��Ҫ�޸�Ϊ��   :>\n");
			scanf("%s", input_name);
			strcpy(p->data[pos].name, input_name);
			printf("�����޸���Ϣ..........\n");
			Sleep(2000);
			printf("�޸ĳɹ�!\n");
		}
			break;
		case 2:
		{
			int input_age = 0;
			printf("��Ҫ�޸�Ϊ��   :>\n");
			scanf("%s", input_age);
			p->data[pos].age = input_age;
			printf("�����޸���Ϣ..........\n");
			Sleep(2000);
			printf("�޸ĳɹ�!\n");
		}
			break;
		case 3:
		{
			char input_sex[5] = { '\0' };
			printf("��Ҫ�޸�Ϊ��   :>\n");
			scanf("%s", input_sex);
			strcpy(p->data[pos].sex, input_sex);
			printf("�����޸���Ϣ..........\n");
			Sleep(2000);
			printf("�޸ĳɹ�!\n");
		}
			break;
		case 4:
		{
			char input_address[20] = { '\0' };
			printf("��Ҫ�޸�Ϊ��   :>\n");
			scanf("%s", input_address);
			strcpy(p->data[pos].address, input_address);
			printf("�����޸���Ϣ..........\n");
			Sleep(2000);
			printf("�޸ĳɹ�!\n");
		}
			break;
		case 5:
		{
			char input_tele[20] = { '\0' };
			printf("��Ҫ�޸�Ϊ��   :>\n");
			scanf("%s", input_tele);
			strcpy(p->data[pos].tele, input_tele);
			printf("�����޸���Ϣ..........\n");
			Sleep(2000);
			printf("�޸ĳɹ�!\n");
		}
			break;
		case 0:
		{
			printf("�����˳�..........\n");
			Sleep(2000);
			printf("�˳��ɹ�!\n");
		}
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return;
}