#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
void menu()
{
	printf("********************\n");
	printf("***1.Play  0.Exit***\n");
	printf("********************\n");
}
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0;i < row;i++)
	{
		//1.打印数据
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.打印---
		if (i < row - 1)
		{
            for (j = 0;j < col;j++)
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
void PlayMove(char board[ROW][COL], int row, int col)
{
	
}
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);
	//下棋
	printf("玩家先下：>");
	while (1)
	{
		printf("请选择下的坐标：");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		//判断该坐标是否合法
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用,请重新输入\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入!\n");
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("三子棋\n");
			game();
			break;
		case 0:printf("离开！\n");
			break;
		default:printf("选择错误,请重新选择.\n");
			break;
		}
	} while (input);
	return 0;
}