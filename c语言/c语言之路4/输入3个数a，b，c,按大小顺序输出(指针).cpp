//输入3个数a，b，c,按大小顺序输出(指针)
#include<stdio.h>
int main()
{
	int a,b,c;
	int temp=0;
	scanf("%d%d%d",&a,&b,&c);
	int *pa,*pb,*pc;
	pa = &a;
	pb = &b;
	pc = &c;
	if(*pa<*pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp; 
	} 
	if(*pa<*pc)
	{
		temp = *pa;
		*pa = *pc;
		*pc = temp;
	} 
	if(*pb<*pc)
	{
		temp = *pb;
		*pb = *pc;
		*pc = temp;
	} 
	printf("%d %d %d",*pa,*pb,*pc);
	 
	
	return 0;
 } 
