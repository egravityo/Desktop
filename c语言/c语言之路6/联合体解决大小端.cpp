//联合体解决大小端
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
		printf("小端");
	}
	else
	{
		printf("大端"); 
	}
	return 0;
 } 
