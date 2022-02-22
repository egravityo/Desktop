/*输入一个数，判断它是不是素数*/
#include<stdio.h>
int main()
{
	int i; 
	int k;
	int flag=1; 
	printf("请输入一个大于0的整数：\n");
	scanf("%d",&i);
	for(k=2;k<i;k++)
	{
		if(i%k==0)
		{
			flag=0;
			printf("%d不是一个素数",i);break; 
		}
	}
	 if(flag!=0)
        {
        	printf("%d是一个素数",i);
		}
	return 0;
 } 
