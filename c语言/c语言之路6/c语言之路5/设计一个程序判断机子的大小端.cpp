//设计一个程序判断当前机器的字节序 
#include<stdio.h>
/*
{
	int a=1;
    //0001
    char* p=(char*)&a;
    if(*p==1)
    {
    	printf("小端");
	}
	else
	{
		printf("大端"); 
	}
    return 0;
}*/
/*
int check_sys()
{
	int a=1;
	char* p=(char*)&a;
	if(*p==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/
int check_sys()
{
	int a=1;
    return 	*(char*)(&a);
}
int main()
{
	int ret=check_sys();
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
