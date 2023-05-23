#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct List
{
    char arr[10010];
    int top;
}List;



bool isValid(char* s)
{
    if (strlen(s) % 2)
    {
        return false;
    }
    List tmp = { {'\0'},0 };
    tmp.top = 0;
    char* p = s;
    if ((*p == ')') || (*p == '}') || (*p == ']'))
    {
        return false;
    }
    while (*p != '\0')
    {
        if ((*p == '(') || (*p == '{') || (*p == '['))
        {
            tmp.arr[tmp.top] = *p;
            p++;
            (tmp.top)++;
        }
        else
        {   
            if (!tmp.top)
            {
                return false;
            }
            char a = tmp.arr[tmp.top - 1];
            if ((*p == ')') && (a != '('))
            {
                return false;
            }
            if ((*p == '}') && (a != '{'))
            {
                return false;
            }
            if ((*p == ']') && (a != '['))
            {
                return false;
            }
            p++;
            tmp.arr[tmp.top - 1] = '\0';
            tmp.top--;
        }
    }
    if (tmp.top != 0)
    {
        return false;
    }
    return true;
}


int main()
{
    char str[20] = "(){}}{";
    printf("%d",isValid(str));
}