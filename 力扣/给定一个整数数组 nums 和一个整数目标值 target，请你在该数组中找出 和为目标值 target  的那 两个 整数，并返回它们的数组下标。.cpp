//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值 
//target的那两个整数，并返回它们的数组下标。
/*输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1]  */ 
#include<stdio.h>
int main()
{
	int i,j;
	int nums[100];
	int target=0;	
	int count=0;
    for(i=0;;i++)
    {
    	scanf("%d",&nums[i]);
    	count++;
    	if(getchar()=='\n')break;
	}
    scanf("%d",&target);
    for(i=0;i<count-1;i++)
    {
    	for(j=i+1;j<count;j++)
    	{
    		if(nums[i]+nums[j]==target)
    		{
    			printf("%d,%d\n",i+1,j+1);
			}
		}
	}
	return 0;
}
