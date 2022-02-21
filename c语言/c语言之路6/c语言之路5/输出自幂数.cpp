//输出自幂数
#include<stdio.h>
#include<math.h>
int main()
{
    
    int i;
    int n;
    for(i=10;i<999999;i++)
    {
       //判断i是n位数
       int temp=i;
       n=1;
       while(temp/=10)
       {
       	   n++;
	   }
       //求和
       int sum=0;
       temp=i;
       while(temp)
       {
       	  sum+=pow(temp%10,n);
       	  temp/=10;
	   }
       //判断i==sum 
       if(i==sum)
       {
       	   printf("%d ",i);
	   }
	}
	return 0;
 } 
