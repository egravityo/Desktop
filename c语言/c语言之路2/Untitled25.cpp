/*若有下面的矩阵： 
  100 200 300
  400 500 600
  700 800 900
  则程序输出： 
  100 400 700
  200 500 800 
  300 600 900*/
#include<stdio.h>
#define N 3 
int main()
{
    int arr[N][N]={{100,200,300},{400,500,600},{700,800,900}};
	int i,k,j,delaytime=1000000000;
	printf("转换前：\n");
	for(i=0;i<=N-1;i++)
	{
		for(k=0;k<=N-1;k++)
		{
			printf("%d ",arr[i][k]);
		}
		for(j=0;j<=delaytime;j++)
		{
			
		}
		printf("\n"); 
	 } 
	printf("转换后：\n"); 
	for(i=0;i<=N-1;i++)
	{
		for(k=0;k<=N-1;k++)
		{
			printf("%d ",arr[k][i]); 
		 } 
		 printf("\n");
	    for(j=0;j<=delaytime;j++)
		{
			
		}
		printf("\n"); 
	 } 
    return 0; 
 } 
