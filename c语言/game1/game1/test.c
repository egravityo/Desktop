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
		//1.��ӡ����
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.��ӡ---
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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);
	//����
	printf("������£�>");
	while (1)
	{
		printf("��ѡ���µ����꣺");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		//�жϸ������Ƿ�Ϸ�
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��,����������\n");
			}
		}
		else
		{
			printf("�Ƿ����꣬����������!\n");
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("������\n");
			game();
			break;
		case 0:printf("�뿪��\n");
			break;
		default:printf("ѡ�����,������ѡ��.\n");
			break;
		}
	} while (input);
	return 0;
}