//判断在100~999中有多少个水花仙数，它们分别是多少，并求出它们的和
#include<stdio.h>
#include<math.h>
int main() 
{
	int a,b,c,x,num,sum;
	scanf("%d%d%d",&x,&num,&sum);
	a=x/100;
	b=x/10%10;
	c=x/10; 
	for (x=100;x<=999;x++); 
	{
	   if(x=a*a*a+b*b*b+c*c*c) 
	   {
	   	  printf("它们是：\n"); 
	   }
	   num=+ ; 
	}
	return 0; 
	
}
