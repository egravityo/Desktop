//输入一个整数序列，判断是否是有序序列.
//有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)
#include<stdio.h>
int main()//2 3 4 5 6
// 3 2 4 5 7 1 
{
    int arr[10]={0};
    int i,j;
    int flag = 0;
    for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	 } 
    for(i=0;i<10;i++)
    {
    	if(arr[i]>=arr[i+1])
    	{
            flag = 1;
        }
        else if(arr[i]<=arr[i+1])
        {
        	flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag == 1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}


