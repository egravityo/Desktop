//X��ͼ��
#include<stdio.h>
int main()
{
	int i,j,k,line;
	scanf("%d",&line);
	//��ӡ����һ���� 
	for(i=0;i<line;i++)
	{
		//��ӡ�ո�
		for(j=0;j<i;j++)
		{
		   printf(" ");	
		}
		//��ӡ*
		printf("*"); 
		//��ӡ�ո�
		for(j=0;j<2-i;j++)
		{
			printf("  ");
		}
		//��ӡ* 
		printf("* \n");
	 } 
	/*��ӡ����һ����
	for(i=0;i<line-1;i++)
	{
		
	 }*/ 
	return 0;
 } 
