//���������
#include<stdio.h>
#include<math.h>
int main()
{
    
    int i;
    int n;
    for(i=10;i<999999;i++)
    {
       //�ж�i��nλ��
       int temp=i;
       n=1;
       while(temp/=10)
       {
       	   n++;
	   }
       //���
       int sum=0;
       temp=i;
       while(temp)
       {
       	  sum+=pow(temp%10,n);
       	  temp/=10;
	   }
       //�ж�i==sum 
       if(i==sum)
       {
       	   printf("%d ",i);
	   }
	}
	return 0;
 } 
