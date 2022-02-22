/*写一个函数可以判断一个数是否为素数*/
#include<stdio.h>
int prime(int x)
{
	int flag=1;
	int i;
	if((x<=0)||('a' <= x&&x<='z')|| ('A' <= x&&x<='Z'))
  	{
		printf("同学，仔细看题");
	 } 
	else
	{ 
        for(i=2;i<x;i++)
	    {
	     	if(x%i==0)
	    	{
			    flag=0;
			    printf("%d不是一个素数\n",x); 
			    break; 
		    }
	    } 
      	if(flag==1)
     	{
		printf("%d为素数\n",x); 
	    }
    } 
}
int main()
 {
	int i;
	printf("请输入一个大于0的整数：");
	scanf("%d",&i);
	int H = prime(i); 
	return 0; 
 } 
