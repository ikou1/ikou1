#define  _CRT_SECURE_NO_WARNINGS 1
#define max_con 100
#include<stdio.h>
#include<memory.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>



typedef struct information
{
	char name[20];
	int age;
	char sex[5];
	char address[20];
	char tele[12];
}information;



typedef struct Contact
{
	information data[max_con];
	int num;
}Contact;
 
void initialize_contact(Contact* p);
void add_contact(Contact* p);
void display_contact(const Contact* p);
void display_information(const Contact* p, int n);
int search_person(const Contact* p, char input_name[20]);
void search_contact(const Contact* p, char input_name[20]);
void sort_contact(Contact* p, information arr[max_con], int size);
int information_sort(const void* e1, const void* e2);
void delete_contact(Contact* p, char input_name[20]);
void initialize_person(Contact* p, int pos);
void print_delete(int bool);
void modify_contact(Contact* p, int pos);
void modify_contact(Contact* p, int pos);