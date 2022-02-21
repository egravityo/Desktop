//������
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void menu()
{
	printf("*****************\n");
	printf("**��ӭ����������**\n");
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
    //�ж�����
	int i=0;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][2]!=' ')
		{
			return board[i][0];
		}
	}
	//�ж�����
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[2][i]!=' ')
		{
			return board[0][i];
		}
	}
	//�ж϶Խ���
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!=' ')
	{
	    return board[0][0];
	} 
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!=' ')
	{
	    return board[0][2];
	} 
	//�ж�ƽ��
	//�ǵĻ� ����1 ���Ƿ���0 
	int ret=Is_Full(board,row,col);
	if(ret==1)
	{
	    return 'Q';	
	} 
	return 'C';
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	printf("�������\n");
	int x,y;
    printf("����һ�����꣺");
    scanf("%d %d",&x,&y);
	//�ж�����ĺϷ���
    while(1)
    {
    	if(x>=1&&x<=ROW&&y>=1&&y<=COL)
        {
	   	//�жϸ���������λ��
		   if(board[x-1][y-1]==' ')
		   {
			   board[x-1][y-1]='*';
		       break;
		   } 
		   else
		   {
		   	  printf("��λ������Ԫ��,����������.\n");
		   	  return;
		   }
		}
		else
		{
			printf("�����겻�Ϸ�,����������.\n");
			return;
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	printf("�����ߣ�\n");
	int x=rand()%3;
    int	y=rand()%3;
	//�жϸ�λ���Ƿ�ռ��
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
	//�������� 
	char board[ROW][COL];
	//��ʼ������ 
	InitBoard(board,ROW,COL);
	//��ӡ����
	PrintBoard(board,ROW,COL);
	//��Ϸʵ��
	char ret;
	while(1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		//�ж��Ƿ��Ѿ�Ӯ��
		char ret=Is_Win(board,ROW,COL); 
        if(ret!='C')
        {
            break;
		}
		//������
		ComputerMove(board,ROW,COL);
		PrintBoard(board,ROW,COL);
		//�ж��Ƿ��Ѿ�Ӯ��
		ret=Is_Win(board,ROW,COL); 
        if(ret!='C')
        {
           break;
		}
	}
	if(ret=='*')
    {
    	printf("���Ӯ��\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
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
	    printf("��ѡ��\n");
	    scanf("%d",&input);
	    switch(input)
		{
			case Play:game();
				break;
		    case Exit:printf("�뿪��\n");
		        break;
		    default :printf("ѡ��������������룡\n");
		    	break;
		 }  
	}while(input);
 } 
