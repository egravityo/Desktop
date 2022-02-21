//一个偶数总能表示为俩个素数之和 
#include<stdio.h>
int fun(int i)//判断素数
{
	int flag=1;
	int j=2;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
		    flag=0;
		}
	 } 
	if(flag==1)
	{
	   return 1	; 
	 } 
	else
	{
	   return 0;
	}
 } 
int main()
{
	int even=0;
	printf("请输入一个偶数：");
	scanf("%d",&even); 
    int i=2;
	for(i=2;i<even;i++)
	{
		if(fun(i)&&fun(even-i))
		{
			break;
		 } 
	 }
	 printf("%d是%d和%d相加组成\n",even,i,even-i); 
	return 0;
}
