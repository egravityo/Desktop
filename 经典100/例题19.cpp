/*һ��������պõ��������е�����֮�ͣ��ͳ���"����",����
6=1+2+3,�ҳ�1000�������е�����*/
#include<stdio.h> 
int main()
{
	int i,k;
	int sum=0;
	int count=0; 
	printf("1000���ڵ������ֱ����£�\n"); 
	for(i=2;i<1001;i++)
	{
		sum=0;
		for(k=1;k<i;k++)
		{
			if(i%k==0)
			{
		        sum+=k;
			}
		 } 
		 if(sum==i)
		 {
		 	printf("%d ",i);
		 	count++; 
		 }
	 } 
	 printf("\nһ����%d��",count);
	return 0; 
 } 
