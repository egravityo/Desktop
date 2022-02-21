//ÁªºÏÌå
#include<stdio.h>
union U
{
    int i;
	char a;
	char b;	
};
int main()
{
	union U u;
	printf("%d\n",sizeof(u));
	printf("%p\n",&u);
    printf("%p\n",&(u.i));
    printf("%p\n",&(u.b));
	return 0;
 } 
