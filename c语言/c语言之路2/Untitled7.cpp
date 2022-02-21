//书上例题：将输入的10个整数存放在数组中，其中第10个数赋给第一个数，
//其它的数将依次往后移一位
#include<stdio.h>
int main()
{
	int arr[10]; 
	int t;//用于把第十个数赋给第一个数 
	int i;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数：\n",i+1);
    	scanf("%d",&arr[i]);
	 } //存放10个整数 
	 t=arr[9];
	for(i=9;i>0;i--)
    {
	  arr[i]=arr[i-1];
	}
    arr[0]=t;
    for(i=0;i<10;i++)
    {
    	printf("%d ",arr[i]);
	}
	return 0;
 } 
