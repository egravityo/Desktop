#include<stdio.h>
/* 
	int k = 16/5;
	printf("%d\n",k);
	float x = 313.21;
    printf("%4.2f\n",x);*/
	#include <stdio.h>
#define N 100

int main ()
{
	/********** Begin **********/ 
    int i,j;
	int arr[20];
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
	    scanf("%d",&arr[j]);
	 } 
	for(j=0;j<i-1;j++)
	{
		int k;
		for(k=0;k<i-1-k;k++)
		{
			if(arr[k]<arr[k+1])
			{
				int t;
				t = arr[k];
				arr[k] = arr[i+1];
				arr[i+1] = t;
			}
			for(k=0;k<i;k++)
			{
				printf("%d ",arr[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
