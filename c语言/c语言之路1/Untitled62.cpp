#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=10000;i++)
	   for(j=0;j<=100;j++)
	       for(k=0;k<=100;k++)
	           if(i+100==j*j&&i+168==k*k)
	           printf("¸ÃÊýÊÇ£º%d\n",i);
	return 0; 
}
