//¾²Ì¬Á´±í
#include<stdio.h>
#include<string.h>
struct employee
{
    long no;
	char name[10];
	struct employee *next;	
};
int main()
{
	struct employee a,b,c,*p,*head;
	a.no=123;
    strcpy(a.name,"chen");
    b.no=234;
    strcpy(b.name,"biao");
    c.no=345;
    strcpy(c.name,"ren");
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do
    {
        printf("%ld\t%s\n",p->no,p->name);
        p=p->next;
	}while(p!=NULL);
	return 0;
 } 
