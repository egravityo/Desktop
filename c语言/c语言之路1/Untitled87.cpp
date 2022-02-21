/*功能：冰雹猜想
  作者：陈镖任
  日期：2021.11.11 
*/ 
#include<stdio.h>
int main() 
{
    int k,count=0;
	printf("请输入一个整数：",k);
	scanf("%d",&k);
	float max=k; 
	do
	{
		if(k%2==1)
		{
			k=k*3+1;
		}
		else
		    k=k/2;
		count+=1;
		if(max<k)
		{
			max=k;
		}
	 }while(k!=1);
	printf("共计%d步\n",count);
	printf("最大值为%.0f\n",max);
	return 0; 
} 
