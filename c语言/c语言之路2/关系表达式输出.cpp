#include<stdio.h>
int main()
{
	int a = 10;
	int c = 3;
	int d = -3; 
    if(a > 5)
    {
    	printf("b = %d",c);
	}
	else 
	{
		printf("b = %d",d); 
	 } 
	//用一句关系表达式输出
	int a,b,c;
	a = 10;
    b =	(a > 5? 3 : -3); 
	return 0;
}
