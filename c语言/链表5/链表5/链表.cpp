#include<stdio.h>
#include<string.h>
struct person
{
	int wage;
	char name[10];
	struct person* next;
};
int main()
{
	struct person a, b, c, * head, * p;
	a.wage = 100;
	b.wage = 200;	
	c.wage = 300;
	strcpy(a.name, "��");
	strcpy(b.name, "��");
	strcpy(c.name, "��");
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	while (*p != NULL)
	{
		printf("%d\t%s\n", p->wage, p->name);
		p = p->next;
	}
	return 0;
}