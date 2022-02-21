//���Ա�
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
	printf("* 1.���   2.ɾ��*\n");
	printf("* 3.��ӡ   0.�˳�*\n");
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
		printf("���Ա�������\n");
		return; 
	}
    //����
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
		printf("��λ���޷�ɾ����\n");
		return; 
	} 
	//ɾ��λ��
	for(int i=pos;i<my_list->sz;i++)
	{
		my_list->data[i]=my_list->data[i+1];
	}
	 
}
//βɾ��
void pop_rear_list(Seqlist* my_list)
{
	if(my_list->sz==0)
	{
		printf("�����Ա���������,�޷�ɾ��\n");
		return;
	}
	my_list->sz--;
}
void pop_head_list(Seqlist* my_list)
{
	if(my_list->sz==0)
	{
		printf("�����Ա���������,�޷�ɾ��\n");
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
	//��ʼ�����Ա�
	Init_List(&my_list);
	int x=0;
    do
	{
		menu();
		printf("���ѡ���ǣ�>");
	    scanf("%d",&input);
	    switch(input)
	    {
	    	case Add:printf("���������ݣ�");
	    	         scanf("%d",&x);
	    	         Add_List(&my_list,x);
				     break;
	    	case Del:
			//Del_List(&my_list,int pos);
	    		break;
	    	case Print:Print_List(&my_list);
	    		break;
	    	case Exit:printf("�뿪��\n");
	    		break;
	    	default:printf("�������,����������\n");
	    		break;
		}
	}while(input); 
	return 0;
} 
