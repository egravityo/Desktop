//�Ӽ����������ݽ���һ�����Ա� 
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
	printf("***1.���� 2.ɾ��***\n");
	printf("****** 0.�˳� *****\n");
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
    printf("���������ݵĸ�����\n");
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
    	printf("�����ݴ�ӡ��\n");
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
	//��ʼ�����Ա�
//	InitList(L); 
	//������Ա�
	CreateList(L);
	//��ӡ���Ա�
	PrintList(L); 
    do
    {
    	menu();
    	printf("˵�����ѡ��>");
    	scanf("%d",&input);
    	switch(input)
    	{
    	    case Inset://InsetList(); 
    	   	break;
    	    case Del:
    	   	break;
    	    case Exit:printf("�뿪��\n");
    	    break;
    	    default:printf("ѡ�����\n");
    	    break;
		}
	}while(input);
	return 0;
}
