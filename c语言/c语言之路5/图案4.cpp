//ͼ��4
#include<stdio.h> 
int main()
{
	int i,j,line;
	while(~scanf("%d",&line))
	{
		//����һ���� 
	for(i=0;i<line;i++)
	{
	   for(j=0;j<line-i;j++) 
	   {
	   	  printf("* ");
	   }
	   printf("\n");
	}
	//����һ����
	for(j=0;j<line-1;j++)
	{
		for(i=0;i<=j+1;i++)
		{
			printf("* ");
		}
		printf("\n");
	 } 
    }
	return 0;
}

