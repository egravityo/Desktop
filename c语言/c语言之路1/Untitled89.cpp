/*һ��������պò�С��������������֮����ȣ���Ƹ���Ϊһ��
�����������磺6=1+2+3�����10000���ڵ���������֮�͡�*/
#include<stdio.h>
int main()
{
	int i,k;
    int A=0;
	float sum1=0;
	for(i=6;i<=10000;i++)
	{
		sum1=0;
		A=0;
		for(k=1;k<i;k++)
		{
			if(i%k==0)
			{
				sum1+=k;
			}
		}
		if(sum1==i)
		{
	    printf("%d��һ������\n",i);
		A+=i;
		printf("%d\n",A);	
	   }
    }
	return 0; 
}
