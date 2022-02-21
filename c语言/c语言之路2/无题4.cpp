#include<stdio.h>	
int main()
{
	int a = 1,b = 2, c = 3,d = 4; 
	int i = 0;
	//i = a++ && ++b && d++;
	i = a++ || ++b || d++;
	printf("%d %d %d %d",a,b,c,d); 
	return 0; 
 } 
