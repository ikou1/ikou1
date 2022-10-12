#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void iniboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);

void game()
{
	char board[ROW][COL];     //定义棋盘数组
	iniboard(board, ROW, COL);   //初始化棋盘
	printboard(board, ROW, COL);  //打印棋盘



}


void menu()
{
	printf("**************************************************************************\n");
	printf("************************        1.PLAY        ****************************\n");
	printf("************************        0.EXIT        ****************************\n");
	printf("**************************************************************************\n");
}



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