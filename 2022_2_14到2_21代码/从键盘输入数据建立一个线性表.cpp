//从键盘输入数据建立一个线性表 
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define MAX_SIZE 1000
typedef struct 
{
	int data;
	int sz;
}data;
typedef struct 
{ 
    char data[MAX_SIZE];
	int sz;	
}L,*List;
void menu()
{
	printf("*******************\n");
	printf("***1.插入 2.删除***\n");
	printf("****** 0.退出 *****\n");
	printf("*******************\n");
}
enum Option
{
    Exit,
	Inset,
	Del,	
};
void InitList(List pc)
{
	pc->sz=0;
	memset(pc->data,0,sizeof(pc->data));
}
void CreateList(List pc)
{
	int i,n;
	char temp;
    printf("请输入数据的个数：\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("data[%d]:",i);
    	getchar();
    	scanf("%c",&temp);
    	pc->data[i]=temp;
	}
	pc->sz=n;
	printf("\n");
}
void PrintList(List pc)
{
    if(pc->sz==0)
    {
    	printf("无数据打印！\n");
        return;
	}
	int i=0;
    for(i=0;i<pc->sz;i++)
    {
    	printf("data[%d]:%c\n",i,pc->data[i]);
	}
}
int main()
{
	int input=0;
	List L=(List)malloc(sizeof(L));
	//初始化线性表
//	InitList(L); 
	//添加线性表
	CreateList(L);
	//打印线性表
	PrintList(L); 
    do
    {
    	menu();
    	printf("说出你的选择：>");
    	scanf("%d",&input);
    	switch(input)
    	{
    	    case Inset://InsetList(); 
    	   	break;
    	    case Del:
    	   	break;
    	    case Exit:printf("离开！\n");
    	    break;
    	    default:printf("选择错误！\n");
    	    break;
		}
	}while(input);
	return 0;
}
