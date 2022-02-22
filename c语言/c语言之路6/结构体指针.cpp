//结构体指针 
#include<stdio.h>
struct person
{
    char name[10];
	int wage;	
}worker[2]={"chen",2,"biao",3};
int main()
{
	struct person *man,worker;
	man=&worker;
	printf("%c\t%d\n",worker[1].name,worker[1].wage);
	printf("%c\t%d\n",man->name,man->wage);
	printf("%c\t%d\n",(*man+1).name,(*man+1).wage);
	return 0;
 } 
