//��2+22+222+2222
#include<stdio.h>
int main()
{
	int i,j;
	int m,n,t=0;
	printf("������һ��������0~9)��");
	scanf("%d",&m);
	printf("\n������һ����ӵĸ�����");
	scanf("%d",&n);
	long sum=0;//2+22+222+2222+22222
	for(i=0;i<n;i++)
	{
	    t = t + m; 
	    sum+=t;
	    t = t * 10;
	 } 
	printf("\nsum = %ld",sum);
	return 0;
 } 
