/*���ܣ���������
  ���ߣ�������
  ���ڣ�2021.11.11 
*/ 
#include<stdio.h>
int main() 
{
    int k,count=0;
	printf("������һ��������",k);
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
	printf("����%d��\n",count);
	printf("���ֵΪ%.0f\n",max);
	return 0; 
} 
