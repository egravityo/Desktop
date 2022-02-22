//建立一个空双向链表
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
	if(P==NULL)//申请不成功
	{
		return NULL; 
	}
	P->prior=P->next=NULL;
	return P; 
} 
