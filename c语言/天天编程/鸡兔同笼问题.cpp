#include<stdio.h>
int main()
{
	int n=0;
	int m=0;
	int a=0;//������� 
	int b=0;//��������
	int flag=1;
	while(~(scanf("%d%d",&n,&m))) 
	{
		for(a=0;a<=n;a++)
		{
			for(b=n-a;b>=0;b--) 
			{
				if(a*2+b*4==m)
				{
					printf("����:%d\n",a);
					printf("����:%d\n",b);
					flag=0;
				}
			}
		}
		if(flag==1) 
		{
			printf("Error!\n");
		}
	}
	return 0;
}
