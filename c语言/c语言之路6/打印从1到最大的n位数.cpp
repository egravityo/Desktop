//打印从1到最大的n位数
#include<stdio.h>
#include<math.h> 
int main()
{
	int n;	
	scanf("%d",&n);
    int i;
    int count=0;
    for(i=1;i<=pow(10,n)-1;i++)
    {
    	printf("%3d ",i);
    	count++;
        if(count%5==0)
        {
        	printf("\n");
		}
	}
	return 0;
 } 
