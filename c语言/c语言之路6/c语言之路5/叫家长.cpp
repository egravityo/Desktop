//½Ð¼Ò³¤
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int count=0;
    while(i<=n)
    {
    	int a=0,b=0,c=0;
    	scanf("%d%d%d",&a,&b,&c);
    	if(((a+b+c)/3)<60)
    	{
    		count++;
		}
		i++;
	}
	printf("%d ",count);
    return 0;
} 
