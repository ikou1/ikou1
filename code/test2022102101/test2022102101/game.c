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
	/*Displayboard(mine, ROW, COL);*/
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
		/*printf("\033[35m%d \033[0m", i);*/
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
	printf("请输入坐标:\n");
	printf("正确输入格式：row+Space+col+Enter\n");
	int x, y;
	int win = 0;
	while (win<row*col-number)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)   //判断坐标合法性
		{
			if (mine[x][y] == '1')                      //踩中雷
			{
				printf("很遗憾，你被炸死了\n");
				break;
			}
			else                                       
			{
				int count = get_mine_count(mine, x, y); //告知周围雷个数
				show[x][y] = count + '0';
				win++;
				Displayboard(show, row, col);       //显示排查雷的信息
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");       //判断坐标合法性
		}
	}
	if (win == row * col - number)
	{
		printf("恭喜你！排雷成功！\n");
		Displayboard(mine, row, col);
		printf("ps:“1”表示雷\n");
	}
}


 static int get_mine_count(char mine[ROWs][COLs], int x, int y)
{
	int i, j;
	int count = 0;
	for(i=x-1;i<=x+1;i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count;
}