//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ 
//target�����������������������ǵ������±ꡣ
/*���룺nums = [2,7,11,15], target = 9
�����[0,1]
���ͣ���Ϊ nums[0] + nums[1] == 9 ������ [0, 1]  */ 
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
