//��ӡ����
#include<stdio.h>
int main()
{
	int i;
	int j;
	int line=0;//�ϰ벿������ 
	scanf("%d",&line);
	//��ӡ�ϰ벿��
	for(i=0;i<line;i++)
	{
	   //��ӡÿ��
	   for(j=0;j<line-1-i;j++)
	   {
	       //��ӡ�ո�
	       printf("  ");
	   }	
	   for(j=0;j<2*i+1;j++)
	   {
	   	   //��ӡ* 
	   	   printf("* ");
	   }
	   printf("\n");
    } 
	//��ӡ�°벿�� 
	for(i=0;i<line-1;i++)
	{
		//��ӡÿ��
		//��ӡ�ո� 
		for(j=0;j<=i;j++)
		{ 
		   printf("  ");  
		} 
		//��ӡ* 
		for(j=0;j<2*(line-1-i)-1;j++)
		{
		   printf("* ");
		} 
		printf("\n");
	 } 
    return 0;
}
