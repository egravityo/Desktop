/*����һ�������ж����ǲ�������*/
#include<stdio.h>
int main()
{
	int i; 
	int k;
	int flag=1; 
	printf("������һ������0��������\n");
	scanf("%d",&i);
	for(k=2;k<i;k++)
	{
		if(i%k==0)
		{
			flag=0;
			printf("%d����һ������",i);break; 
		}
	}
	 if(flag!=0)
        {
        	printf("%d��һ������",i);
		}
	return 0;
 } 
