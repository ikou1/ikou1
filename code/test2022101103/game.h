#define  _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

void menu();
void iniboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col); 
void computermove(char board[ROW][COL], int row, int col); 
char iswin(char board[ROW][COL], int row, int col);
int isfull(char board[ROW][COL], int row, int col);
void game();

