//8进制转换位10进制
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("请输入8进制:");
	scanf("%d",&n);
    int sum=0;
    int i=0;
    for(;n!=0;i++)
	{
		sum+=(n%10)*(int)pow(8,i);
		n/=10;
	} 
	printf("对应10进制:");
	printf("%d",sum);
	return 0;
 } 
