//����������ͼ��
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("* ");
		 } 
		else if(i!=n-1)
		{
			//��ӡ* 
		    printf("* "); 
		    //��ӡ�ո�
		    for(j=0;j<=i-2;j++)
		    {
	 	     	printf("  ");
		    }
		    //��ӡ*
		    printf("* "); 
		} 
		else
		{
			for(i=0;i<n;i++)
			{
				printf("* "); 
			}
		}
		printf("\n");
	}
	return 0;
 } 
