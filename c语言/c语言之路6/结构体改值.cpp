//结构体改值 
#include<stdio.h>
struct S 
{
    char a;
	int b;
	double c;	
};
void Initi(struct S* ps)
{
	ps->a='s';
	ps->b=4432; 
}
int main()
{
	struct S s1;
	s1.a='c';
	Initi(&s1);
	printf("%c\n",s1.a);
    return 0;
}
