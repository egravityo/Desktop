/*������8�����9*9�˷���*/
#include<stdio.h>
int main()
{
	int i,k;
	printf("9*9�˷���������ʾ��\n"); 
	for(i=1;i<10;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d*%d=%2d ",k,i,i*k);
		}
		printf("\n");
	 } 
	return 0; 
 } 
