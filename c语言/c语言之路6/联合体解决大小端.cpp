//����������С��
#include<stdio.h>
int is_bs()
{
	union U
	{
	    int a;
		char c;	
	}u;
	u.a=1;
	return u.c;
}
int main()
{
	int ret=is_bs();
	if(ret==1)
	{
		printf("С��");
	}
	else
	{
		printf("���"); 
	}
	return 0;
 } 
