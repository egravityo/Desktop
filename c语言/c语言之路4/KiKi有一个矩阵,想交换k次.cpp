//KiKi有一个矩阵,想交换k次
//r 代表行 c代表列
/*例如输入：2  2
            1  2
		    3  4
		    1
		    r  1  2
	输出:3 4
         1 2 */ 
#include<stdio.h>
int  main()
{
	int i=0,j=0,n=0,m=0;
	int arr[15][15]={0}; 
	scanf("%d%d",&m,&n);
    //存入数组
	for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]); 
		}
	}
    //输入 k
	int k=0;
	scanf("%d",&k);
	//交换
    int t=0,a=0,b=0;
    scanf(" %c %d %d",&t,&a,&b);
	for(i=0;i<k;i++)
	{
		//交换每一次
		if(t=='r') 
		{
		    for(j=0;j<m;j++)
		    {
			    int temp=0;
			    temp = arr[a-1][j];
			    arr[a-1][j] = arr[b-1][j]; 
			    arr[b-1][j] = temp;
		    }
	 	}
	    else if(t=='c')
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		int temp=0; 
	    		temp = arr[j][a-1];
	    		arr[j][a-1] = arr[j][b-1];
	    		arr[j][b-1] = temp;
			}
		}
	 } 
	//输出
	for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]); 
		}
		printf("\n");
	}
	return 0;
}

