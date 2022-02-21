//小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，三个成绩（语文，数学，外语）平均分低于60的将被请家长，
//小乐乐想编程帮助班主任算一下有多少同学被叫家长。
/*输入：
3
80 100 90	
40 70 65
20 84 93
输出：
1    */
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	float arr[10][10]={0};
    float sum;
    int count=0;
    int i;
    float ave[10]={0};
    for(i=0;i<n;i++)
    {
        int j;
        sum=0;
        for(j=0;j<3;j++)
        {
        	scanf("%f",&arr[i][j]);
        	sum+=arr[i][j];
		}
    	sum+=arr[i][j];
    	ave[i]=sum/3.0;
	}
	for(i=0;i<n;i++)
	{
	    if(ave[i]<60)
	    {
	    	count++;
		}
	}
	printf("%d ",count);
	return 0; 
}
