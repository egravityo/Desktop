#include<stdio.h> 
//输入一个大于0的数字，求其阶层
int main()
{ /*
	int i ,k;
	int sum = 0; 
	printf("请输入一个整数：");
	scanf("%d",&i);
    //5*4*3*2*1
	for(k=1;k<=10;k++)
    {
    	k = k* i ;
    	sum += k;
	}
    printf("%d",k); 
	return 0; */
	int i,k=1;
	for(i=1;i<=5;i++)
	{
		k=k*i;
	}
	printf("%d",k);
 } 
