//末尾0的个数
#include<stdio.h>
long fun(int n)
{
	if(n==1){
		return 1;
	} 
	else{
		return n*fun(n-1);
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	long ret=fun(n);
	printf("ret=%d\n",ret);
	int sum=0;
	while(ret>0)
	{
	    int a=ret%10;
	    if(a==0)
	    {
	    	sum++;
		}
		ret/=10;
	}
	printf("0的个数：%d",sum);
	return 0;
 } 
