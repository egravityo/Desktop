/*作业1:写一个判别素数的函数，在主函数中输入一个整数，
输出是否为素数的信息*/
#include<stdio.h>
int SS(int x)//SS为素数的意思 
{
	int flag=1;
	int k;
    if(x<0)
	{
		printf("我怀疑你在无中生有"); 
	 } 
	for(k=2;k<x;k++)
	{
		if(x%k==0) 
		{
			printf("该数不是素数");
			break; 
	    } 
		else
		{
			printf("该数是素数"); 
		 } 
		 return x ; 
	 } 
	/* 
	for(;x<10000;i+=2) 
	{
		flag=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				flag=0; 
				printf("该数不为素数");
				break; 
			 } 
		 } 
		 if(flag!=0)
		 {
		 	printf("该数为素数",i);
		  } 
		return i; 
	}
	 */
 } 
int main()
{
	int s,z;
	printf("请输入一个大于0的整数：");
    scanf("%d",&z);
	s=SS(z);
	printf("",s);
    return 0; 
 } 
