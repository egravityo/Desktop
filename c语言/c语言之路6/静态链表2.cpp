//¾²Ì¬Á´±í2
#include<stdio.h>
#include<string.h>
struct person 
{
	long no;
	char name[10];
	struct person *next;
};
int main()
{
	struct person a,b,c,*head,*p;
    a.no=123;
    strcpy(a.name,"CHEN");
    b.no=234;
    strcpy(b.name,"BIAO");
    c.no=345;
    strcpy(c.name,"REN");
    head=&a;
    a.next=&b;
    b.next=&c;
	c.next=NULL;
	p=head;
	do
	{
		printf("%d\t%s\n",p->no,p->name);
	    p=p->next;
	}while(p!=NULL);
	return 0;
 } 
