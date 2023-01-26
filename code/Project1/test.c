#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define time 60
int main()
{
	system("shutdown -s -t 60");
	printf("提醒！  你电脑将在%ds后关机！\n", time);
	printf("键盘输入“徐昊昀真帅”即可取消关机!\n");
	char input[100] = { '\0' };
	while(1)
	{
		scanf("%s", input);
		if (strcmp(input, "徐昊昀真帅") == 0)
		{
			system("shutdown -a");
			printf("恭喜你！解除关机成功!");
			break;
		}
		else
		{
			printf("输入错误！不要耍小聪明哦！\n");
		}
	}
	return 0;
}
