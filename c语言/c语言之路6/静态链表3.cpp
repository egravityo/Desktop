//¾²Ì¬Á´±í3 
#include<stdio.h>
#include<string.h>
struct person 
{
    char name[10];
    int wage;
    struct person *next;	
};
int main()
{
    struct person a,b,c,*head,*p;
	a.wage=100;
	b.wage=200;
	c.wage=300;
	strcpy(a.name,"wang");
	strcpy(b.name,"chen");
	strcpy(c.name,"zhao");
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
    p=head;
    int i=0;
    for(i=0;i<2;i++)
    {
    	printf("%d\t%s\n",p->wage,p->name);
		p=p->next; 
	}	
    return 0;
} 
