//输出数字三角形，多组输入 
#include<stdio.h>
int main()
{
	int i,j;
    int n;
    while((scanf("%d",&n))!=EOF) 
    {
    	for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",j);
        }
        printf("\n");
    }
	}
    return 0;
} 
