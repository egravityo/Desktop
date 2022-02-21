//线性表
#include<stdio.h>
#include<stdlib.h>
#define Elem_Type int
#define MAX_SIZE 8
typedef struct Seqlist
{
    Elem_Type* data;
	int  capacity;
	int  sz;
}Seqlist;
void Init_List(Seqlist* my_list)
{
	my_list=(Seqlist*)malloc(sizeof(Seqlist)*MAX_SIZE);
	my_list->sz=0;
	my_list->capacity=MAX_SIZE; 
}
void menu()
{
	printf("******************\n");
	printf("* 1.添加   2.删除*\n");
	printf("* 3.打印   0.退出*\n");
	printf("******************\n");
}
enum Option
{
    Exit,
	Add,
	Del,
	Print,	
};
void Add_List(Seqlist* my_list,int x)
{
	if(my_list->sz>=my_list->capacity)
	{
		printf("线性表已满！\n");
		return; 
	}
    //插入
	my_list->data[my_list->sz]=x;
	my_list->sz++; 
}
void Print_List(Seqlist* my_list)
{
	Elem_Type i=0;
	for(i=0;i<my_list->sz;i++)
	{
	   printf("%d ",my_list->data[i]);	
	}
}
void Del_List(Seqlist* my_list,int pos)
{
	if(pos>my_list->capacity||pos>my_list->sz)
	{
		printf("该位置无法删除！\n");
		return; 
	} 
	//删除位置
	for(int i=pos;i<my_list->sz;i++)
	{
		my_list->data[i]=my_list->data[i+1];
	}
	 
}
//尾删法
void pop_rear_list(Seqlist* my_list)
{
	if(my_list->sz==0)
	{
		printf("该线性表已无数据,无法删除\n");
		return;
	}
	my_list->sz--;
}
void pop_head_list(Seqlist* my_list)
{
	if(my_list->sz==0)
	{
		printf("该线性表已无数据,无法删除\n");
		return;
	}
	//
	for(int i=0;i<my_list->sz-1;i++)
	{
		my_list->data[i]=my_list->data[i+1];
	}
	my_list->sz--;
 } 
int main()
{
	Elem_Type input=0;
	Seqlist my_list;
	//初始化线性表
	Init_List(&my_list);
	int x=0;
    do
	{
		menu();
		printf("你的选择是：>");
	    scanf("%d",&input);
	    switch(input)
	    {
	    	case Add:printf("请输入数据：");
	    	         scanf("%d",&x);
	    	         Add_List(&my_list,x);
				     break;
	    	case Del:
			//Del_List(&my_list,int pos);
	    		break;
	    	case Print:Print_List(&my_list);
	    		break;
	    	case Exit:printf("离开！\n");
	    		break;
	    	default:printf("输入错误,请重新输入\n");
	    		break;
		}
	}while(input); 
	return 0;
} 
