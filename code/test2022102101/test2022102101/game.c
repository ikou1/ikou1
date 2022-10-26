#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char mine[ROWs][COLs];   //存放布置好的雷的信息
	char show[ROWs][COLs];   //存放排查出的雷的信息
	Initboard(mine, ROWs, COLs, '0');  //初始化棋盘
	Initboard(show, ROWs, COLs, '*');
	printf("*******************************     扫雷游戏    *****************************************\n");
	Displayboard(show, ROW, COL);    //打印棋盘
	SetMine(mine, ROW, COL);                  //布置雷;
	//Displayboard(mine, ROW, COL);        //sd
	FindMine(mine, show, ROW, COL);        //查找雷
}



void Initboard( char board[ROWs][COLs],int rows,int cols, char set)      //初始化棋盘
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void Displayboard(char board[ROWs][COLs], int row, int col)      //打印棋盘
{
	int i, j;
	for (i = 0; i <= col;i++)
	{
	/*	printf("\033[35m%d \033[0m", i);*/
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		/*printf("\033[35m%d \033[0m", i);*/
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}



void SetMine(char board[ROWs][COLs], int row,  int col)   //布置雷
{
	int x, y;
	int count = number;
	while (count)
	{
		x = rand() % row+ 1;
		y = rand() % col+ 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}	
	}
}




void FindMine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col) //排查雷
{
	if (0)
	{
		loop:
		return;
	}
	int win = 0;
	while (win != ROW * COL - number)
	{
		int input;
		printf("请选择你的下一步\n");
		printf("1.排查雷               2.标记雷               3.取消标记\n");
		scanf("%d", &input);
		while (input != 1 &&input != 2 &&input != 3)
		{
			printf("选择错误，请重新选择\n");
			scanf("%d", &input);
		}
		int x, y;
		against:
		printf("请输入坐标:\n");
		printf("坐标正确输入格式：row+Space+col+Enter\n");
		while (1)
		{
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
			{
				break;
			}
			printf("坐标非法，请重新输入\n");
			goto against;
		}
		
		switch (input)
		{
		case 1:
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				int count = get_mine_count(mine, x, y);
				if (mine[x][y] == '1')
				{
					Displayboard(mine, ROW, COL);
					printf("很遗憾，你被炸死了o(╥﹏╥)o\n");
					printf("ps:“1”表示雷\n\n\n\n\n");
					goto loop;
				}
				else
				{
					Open(show, mine, x, y);
					Displayboard(show, ROW, COL);
					//Displayboard(mine, ROW, COL);        //sd
				}
			}
			else
			{
				printf("坐标非法，请重新输入\n");
			}
			int i, j;
			win = 0;
			for (i = 1; i <= ROW; i++)
			{
				for (j = 1; j <= COL; j++)
				{
					if (show[i][j] != '*')
					{
						win++;
					}
				}
			}
			//printf("win=%d\n", win);     //测试用
			if (win == ROW * COL - number)
			{
				printf("YOU ARE WINNER！！！！！！！！！！\n\n\n\n\n\n\n");
			}
			break;
		case 2:
			Markmine(show, x, y);
			Displayboard(show, ROW, COL);
			/*Displayboard(mine, ROW, COL);*/  //sd
			break;
		case 3:
			Cancel_Markmine(show, x, y);
			Displayboard(show, ROW, COL);
			/*Displayboard(mine, ROW, COL);*/  //sd
			break;
		}
	}
	
}


int get_mine_count(char mine[ROWs][COLs], int x, int y)
	{
		int i, j;
		int count = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '1')
					count++;
			}
		}
		return count;
	}




void Open(char show[ROWs][COLs], char mine[ROWs][COLs], int x, int  y)  //x为行,y为列
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int count = get_mine_count(mine, x, y);	
		if (count != 0)
		{
			show[x][y] = '0' + count;
		}
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					Open(show, mine, i, j);
				}
			}
		}
		else
		{
			return;
		}
	}
}

     



void Markmine(char show[ROWs][COLs], int x, int  y)
{
	show[x][y] = '@';
}

void Cancel_Markmine(char show[ROWs][COLs], int x, int y)
{
	show[x][y] = '*';
}




