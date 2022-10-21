#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>
void iniboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);

void game()
{
	char board[ROW][COL];  //定义棋盘数组
	char ret;
	iniboard(board, ROW, COL);   //初始化棋盘
	printboard(board, ROW, COL);  //打印棋盘
	while (1)
	{
		
			playermove(board, ROW, COL);
			printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
	
	     if (ret != 'C')
	     {
		break;
	     }
    }
	if (ret == '*')
	{
		printf("你赢啦！\n");
	}
	else if (ret == '#')
	{
		printf("你输咯...\n");
	}
	else
	{
		printf("旗鼓相当的对手！\n");
	}
}

//打印菜单
void menu()
{
	printf("**************************************************************************\n");
	printf("************************        1.PLAY        ****************************\n");
	printf("************************        0.EXIT        ****************************\n");
	printf("**************************************************************************\n");
}


//初始化棋盘
void iniboard(char board[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//打印棋盘
void printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}




//玩家下棋
//void playermove(char board[ROW][COL], int row, int col)
//{
//	int x, y;
//	printf("玩家下棋\n");
//	while (1)
//	{
//		printf("请选择坐标\n");
//		scanf_s("%d%d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("坐标被占，请重新输入\n");
//			}
//			
//		}
//		else
//		{
//			printf("坐标非法，请重新输入\n");
//		}
//
//	}
//}
void playermove( char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("请选择坐标：\n");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*'; break;
			}
			else
				printf("坐标被占，请重新上输入\n");
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

  

//电脑下棋
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x, y;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] ==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}



//胜负判断
char iswin(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[1][1];
	}
	if (board[1][1] == board[0][2] && board[1][1] == board[2][0])
	{
		return board[1][1];
	}
	if (isfull(board, row, col) == 1)
	{
		return 'T';
	}
	return 'C';
}


//判断棋盘是否已满(判断平局)
int isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

