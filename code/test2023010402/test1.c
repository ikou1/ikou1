#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
typedef struct Date Date;

int leapyear(int year)   //判断闰年
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		return 29;
	}
	return 28;
}


int checkDate(Date date)
{
	if (date.month == 2)
	{
		switch (leapyear(date.year))
		{
		case 28:
			{
			if (date.year < 0 || date.day>28)
			{
				return 0;
			}
			return 1;
			}
		case 29:
		{
			if (date.year < 0 || date.day>29)
			{
				return 0;
			}
			return 1;
		}
		}
	}
	else
	{
		if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)
		{
			if (date.day < 0 || date.day>31)
			{
				return 0;
			}
			return 1;
		}
		else
		{
			if (date.day < 0 || date.day>30)
			{
				return 0;
			}
			return 1;
		}
	}
}

int main()
{
	Date date;
	do
	{
		printf("请输入日期\n");
		scanf("%d%d%d", &date.year, &date.month, &date.day);
		if (checkDate(date))
		{
			printf("日期格式正确\n");
		}
		else
		{
			printf("日期格式错误,请重新输入\n");
		}

	} while (checkDate(date)==0);
	
	

}