/*����100����һ��:
 ��1��2��3��4�ĸ����֣�����ɶ��ٸ�������ͬ
 �����ظ����ֵ���λ�������Ƕ��٣�*/  
#include<stdio.h>
int main()
{
	int i,j,k;
	int al[100];
	int sum=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++) 
		{
			for(k=1;k<=4;k++) 
			{
			      if(i!=j&&j!=k&&i!=k) 
				  {
				  	al[sum]=i*100+j*10+k;
				  	sum+=1;
		          }
			}
		}
	 } 
     printf("һ�������%d�����ظ�����λ��\n",sum);
     printf("���Ƿֱ���: ",al[sum]); 
     for(i=0;i<sum;i++)
     {
     	printf("%d ",al[i]);
	 }
	 return 0; 
}
