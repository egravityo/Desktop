#include<stdio.h>
int main()
{
	int x,i; 
	printf("������һ������2��������\n");
	scanf("%d",&x);
	for(i=2;i<x-1;i++)
	{
		if(x%i==0) break;
	 } 
	if(i==x-1)
	printf("������������\n",x);
	else
	printf("��������������\n",x);
	return 0; 
 } 
