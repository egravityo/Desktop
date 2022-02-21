//喝汽水,一瓶汽水一元一瓶,俩个空瓶可以换一瓶,现在有n元,可以喝多少瓶
#include<stdio.h>
int main()
{
	int money=0;
	scanf("%d",&money);//total=2*money-1
	int total=money;
	int empty=money;
	while(empty>=2)
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	}
	printf("total=%d",total);
	return 0;
 } 
