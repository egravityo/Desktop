/*�����������⣺���д������д���10��С��1000�Ļ���������
������÷�Χ�л��������ĸ�����Ҫ��ÿ�����4������������
���������ĸ���*/
//ԭʼ�� 
#include<stdio.h>
int main()
{
	int i,k,t;
	int a,b,c; 
	int flag=1;
	int count=0; 
	for(i=11;i<1000;i+=2)
	{
		flag=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				flag=0;
			}
		}
		if(flag!=0)
		{
			a=i/100;
			b=i/10%10;
			c=i%10;
			if(a==c||(a==0)&&(b==c)) 
			{
				count++;
				printf("%3d ",i); 
				if(count%4==0)
				{
				   printf("\n");
				 } 
		    	 
			}
		}
	 } 
     printf("\nһ����%d����������",count); 
	 return 0; 
 } 
