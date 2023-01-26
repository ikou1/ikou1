#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void initialize_contact(Contact* p)      //初始化通讯录
{
	assert(p);
	memset(p->data, 0, sizeof(p->data));
	p->num = 0;
	return;
}



void add_contact(Contact* p)    //增加联系人
{
	assert(p);
	if (p->num == 100)
	{
		printf("通讯录已满，无法继续添加\n");
		return;
	}
	system("cls");
	printf("请开始添加联系人！\n");
	printf("请输入名字   :>\n");
	scanf("%s", p->data[p->num].name);
	printf("请输入年龄   :>\n");
	scanf("%d", &(p->data[p->num].age));
	printf("请输入性别   :>\n");
	scanf("%s", p->data[p->num].sex);
	printf("请输入地址   :>\n");
	scanf("%s", p->data[p->num].address);
	printf("请输入电话号码   :>\n");
	scanf("%s", p->data[p->num].tele);
	printf("正在添加联系人..........\n");
	Sleep(2000);
	printf("添加成功！\n");
	(p->num)++;
}


void display_contact(const Contact* p)  //打印通讯录
{
	assert(p);
	/*printf("姓名                  \t年龄  \t性别        \t住址                  \t电话          \n");*/
	if (p->num == 0)
	{
		printf("通讯录已空，无法打印!\n");
		return;
	}
	system("cls");
	printf("%-20s\t%-4s\t%-10s\t%-20s\t%-12s\n", "姓名", "年龄", "性别", "住址", "电话");
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




void display_information(const Contact* p,int n)        //根据下标，打印个人信息
{
	assert(p);
	system("cls");
	printf("%-20s\t%-4s\t%-10s\t%-20s\t%-12s\n", "姓名", "年龄", "性别", "住址", "电话");
	printf("%-20s\t", p->data[n].name);
	printf("%-4d\t", p->data[n].age);
	printf("%-10s\t", p->data[n].sex);
	printf("%-20s\t", p->data[n].address);
	printf("%-12s", p->data[n].tele);
	printf("\n");
	return;
}



int search_person(const Contact* p, char input_name[20])     //根据姓名查找，找到则返回下标，找不到返回-1
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




void search_contact(const Contact* p, char input_name[20])     //传入姓名，输出个人信息
{
	assert(p);
	if (search_person(p, input_name) == -1)
	{
		printf("抱歉,通讯录中查无此人!\n");
	}
	else
	{
		display_information(p, search_person(p,input_name));
	}
	return;
}



void sort_contact(Contact*p,information arr[max_con],int size)     //通讯录首字母排序
{
	assert(p);
	qsort(arr,p->num,size,information_sort);
	system("cls");
	printf("正在排序..........\n");
	Sleep(2000);
	printf("排序成功！\n");
	return;
}



int information_sort(const void* e1,const void* e2)               //qsort的排序基准函数
{
	assert(e1);
	assert(e2);
	char*p1=((information*)e1)->name;
	char*p2=((information*)e2)->name;
	return (strcmp(p1,p2));
}


void delete_contact(Contact* p, char input_name[20])        //删除联系人
{
	assert(p);
	system("cls");
	if (search_person(p, input_name) == -1)
	{
		printf("抱歉，通讯录中查无此人!\n");
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



void initialize_person(Contact* p, int pos)         //重置个人信息
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
	printf("正在删除\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%c ",arr1[i]);
		Sleep(200);
	}
	printf("\n删除成功!\n");
	return;
}




void modify_contact(Contact* p,int pos)
{
	assert(p);
	if (p->num == 0)
	{
		printf("通讯录已空，无法修改\n");
		return;
	}
	system("cls");
	printf("*********************       1.姓名         2.年龄       *************************************\n");
	printf("*********************       3.性别         4.住址       *************************************\n");
	printf("*********************       5.电话         0.退出       *************************************\n");
	int input;
	printf("请根据数字选择您想要修改的信息   :>");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			char input_name[20] = { '\0' };
			printf("需要修改为？   :>\n");
			scanf("%s", input_name);
			strcpy(p->data[pos].name, input_name);
			printf("正在修改信息..........\n");
			Sleep(2000);
			printf("修改成功!\n");
		}
			break;
		case 2:
		{
			int input_age = 0;
			printf("需要修改为？   :>\n");
			scanf("%s", input_age);
			p->data[pos].age = input_age;
			printf("正在修改信息..........\n");
			Sleep(2000);
			printf("修改成功!\n");
		}
			break;
		case 3:
		{
			char input_sex[5] = { '\0' };
			printf("需要修改为？   :>\n");
			scanf("%s", input_sex);
			strcpy(p->data[pos].sex, input_sex);
			printf("正在修改信息..........\n");
			Sleep(2000);
			printf("修改成功!\n");
		}
			break;
		case 4:
		{
			char input_address[20] = { '\0' };
			printf("需要修改为？   :>\n");
			scanf("%s", input_address);
			strcpy(p->data[pos].address, input_address);
			printf("正在修改信息..........\n");
			Sleep(2000);
			printf("修改成功!\n");
		}
			break;
		case 5:
		{
			char input_tele[20] = { '\0' };
			printf("需要修改为？   :>\n");
			scanf("%s", input_tele);
			strcpy(p->data[pos].tele, input_tele);
			printf("正在修改信息..........\n");
			Sleep(2000);
			printf("修改成功!\n");
		}
			break;
		case 0:
		{
			printf("正在退出..........\n");
			Sleep(2000);
			printf("退出成功!\n");
		}
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
	return;
}