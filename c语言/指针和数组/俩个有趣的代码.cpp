//俩个有趣的代码 
#include<stdio.h>
int main()
{
	//代码一 
	void (*signal(int,void(*)(int)))(int);
	//代码二
	(*void (*)())0();
	return 0;
 } 
