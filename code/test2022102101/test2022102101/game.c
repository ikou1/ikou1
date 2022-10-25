#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char mine[ROWs][COLs];   //��Ų��úõ��׵���Ϣ
	char show[ROWs][COLs];   //����Ų�����׵���Ϣ
	Initboard(mine, ROWs, COLs, '0');  //��ʼ������
	Initboard(show, ROWs, COLs, '*');
	printf("*******************************     ɨ����Ϸ    *****************************************\n");
	Displayboard(show, ROW, COL);    //��ӡ����
	SetMine(mine, ROW, COL);                  //������;
	/*Displayboard(mine, ROW, COL);*/
	FindMine(mine, show, ROW, COL);        //������
}



void Initboard( char board[ROWs][COLs],int rows,int cols, char set)      //��ʼ������
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


void Displayboard(char board[ROWs][COLs], int row, int col)      //��ӡ����
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



void SetMine(char board[ROWs][COLs], int row,  int col)   //������
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




void FindMine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col) //�Ų���
{
	while (1)
	{
		int x, y;
		printf("����������:\n");
		printf("��ȷ�����ʽ��row+Space+col+Enter\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			int count = get_mine_count(mine, x, y);
			if (mine[x][y] == '1')
			{
				Displayboard(mine, ROW, COL);
				printf("���ź����㱻ը����o(�i�n�i)o\n");
				printf("ps:��1����ʾ��\n\n\n\n\n");
				break;
			}
			else
			{
				Open(show, mine, x, y);
				Displayboard(show, ROW, COL);
				/*Displayboard(mine, ROW, COL);*/
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
		int win = 0;
		int i, j;
		for (i = 0; i <= ROW; i++)
		{
			for (j = 0; j <= COL; j++)
			{
				if (show[i][j] != '*')
				{
					win++;
				}
			}
		}
		if (win == ROW * COL - number)
		{
			printf("YOU ARE WINNER��������������������\n\n\n\n\n\n\n");
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




void Open(char show[ROWs][COLs], char mine[ROWs][COLs], int x, int  y)  //xΪ��,yΪ��
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

