//三子棋
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void menu()
{
	printf("*****************\n");
	printf("**欢迎来到三子棋**\n");
	printf("**1.Play  0.Exit**\n");
	printf("****************\n");

}
void InitBoard(char board[][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
	    }
	}
}
void PrintBoard(char board[ROW][COL],int row,int col)
{
	/*
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
		    printf(" %c ",board[i][j]);
		    if(j<col-1)
		    {
		    	printf("|"); 
            }
		}
	    printf("\n");
	    if(i<row-1)
	    {
	    	for(j=0;j<col;j++)
		    {
		        printf(" %c ",board[i][j]);
		        if(j<col-1)
		        {
		    	    printf("|"); 
                }
            }
            printf("\n");
		}
	} */
	/* 
	    |   |   
     ---|---|---
        |   |  
     ---|---|---
        |   |  
      */
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<row-1)
		{
		    for(j=0;j<col;j++)
			{
				printf("---");
				if(j<col-1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
enum Option
{
    Exit,
	Play,	
};
int Is_Full(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		if(board[i][j]==' ')
    		return 0;
		}
	}
	return 1;
}
char Is_Win(char board[ROW][COL],int row,int col)
{
    //判断三行
	int i=0;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][2]!=' ')
		{
			return board[i][0];
		}
	}
	//判断三列
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[2][i]!=' ')
		{
			return board[0][i];
		}
	}
	//判断对角线
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!=' ')
	{
	    return board[0][0];
	} 
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!=' ')
	{
	    return board[0][2];
	} 
	//判断平局
	//是的话 返回1 不是返回0 
	int ret=Is_Full(board,row,col);
	if(ret==1)
	{
	    return 'Q';	
	} 
	return 'C';
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	printf("玩家先走\n");
	int x,y;
    printf("输入一个坐标：");
    scanf("%d %d",&x,&y);
	//判断坐标的合法性
    while(1)
    {
    	if(x>=1&&x<=ROW&&y>=1&&y<=COL)
        {
	   	//判断该坐标有无位置
		   if(board[x-1][y-1]==' ')
		   {
			   board[x-1][y-1]='*';
		       break;
		   } 
		   else
		   {
		   	  printf("该位置已有元素,请重新输入.\n");
		   	  return;
		   }
		}
		else
		{
			printf("该坐标不合法,请重新输入.\n");
			return;
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	printf("电脑走：\n");
	int x=rand()%3;
    int	y=rand()%3;
	//判断该位置是否被占用
	while(1)
	{
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	} 
}
void game()
{
	//定义棋盘 
	char board[ROW][COL];
	//初始化棋盘 
	InitBoard(board,ROW,COL);
	//打印棋盘
	PrintBoard(board,ROW,COL);
	//游戏实现
	char ret;
	while(1)
	{
		//玩家先走
		PlayerMove(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		//判断是否已经赢了
		char ret=Is_Win(board,ROW,COL); 
        if(ret!='C')
        {
            break;
		}
		//电脑走
		ComputerMove(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		//判断是否已经赢了
		ret=Is_Win(board,ROW,COL); 
        if(ret!='C')
        {
           break;
		}
	}
	if(ret=='*')
    {
    	printf("玩家赢！\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
	PrintBoard(board,ROW,COL);
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
	    menu();
	    printf("请选择：\n");
	    scanf("%d",&input);
	    switch(input)
		{
			case Play:game();
				break;
		    case Exit:printf("离开！\n");
		        break;
		    default :printf("选择错误，请重新输入！\n");
		    	break;
		 }  
	}while(input);
 } 
