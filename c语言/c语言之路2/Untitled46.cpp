/*定义一个函数,如果数字d在整形n的某位出现,则返回1,否则返回0*/
#include<stdio.h>
int Found(int x,int y)
{
    int flag=1;
    for(;x>0;x=x/10)
	{
		x=x%10;
		if(x==y)
		{
	        flag=1; 
		    return 1;
	    } 
	    else
	    {
	    	flag==0; 
		}
	}	
	if(flag==0) 
    {
    	return 0; 
	}
 }
int main()
{
	int i,k;
	printf("请输入一个整数(i>0)：");
	scanf("%d",&i);
	printf("请输入一个数字(0~9)：");
	scanf("%d",&k); 
  	int ret = Found(i,k);
	if(ret==1)
	{
		printf("找到了！"); 
	 } 
	else
	{
		printf("没找到！"); 
	 } 
	return 0;
 } 
