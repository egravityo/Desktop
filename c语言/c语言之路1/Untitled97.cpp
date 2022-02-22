//输入四个小于10的数，且不重复，能组成多少个不同的三位数
//都是多少
#include<stdio.h>
int main()
{
	int a;//百位
	int b;//十位
	int c;//个位
	int i,j,k; 
	int arr[4];
	int sum=0;
	for(i=0;i<4;i++)
	{
		printf("请输入第%d个数\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++) 
	{
		a=arr[i];
		for(j=0;j<4;j++)
		{
			b=arr[j];
			for(k=0;k<4;k++)
			{
			   c=arr[k];
			   if(i!=j&&i!=k&&j!=k)
			   {
			   	   printf("%d\n",a*100+b*10+c);
			   	   sum++;
			   }
		    }
		}
	}
	printf("一共有%d个不重复的数",sum); 
	return 0; 
	
 } 
