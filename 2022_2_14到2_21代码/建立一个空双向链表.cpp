//����һ����˫������
#include<stdio.h>
#include<stdlib.h>
typedef struct Dnodelist
{
    struct Dnodelist* prior;
	int data;
    struct Dnodelist* next;
}Dlist;
Dlist* CreateDList()
{
	Dlist* P;
	P=(Dlist*)malloc(sizeof(Dlist));
	if(P==NULL)//���벻�ɹ�
	{
		return NULL; 
	}
	P->prior=P->next=NULL;
	return P; 
} 
