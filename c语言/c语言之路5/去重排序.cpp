//去重排序
/* 输入：第一行包含一个正整数n，表示老师给出的序列有n个数。接下来有n行，每行一个正整数k，
为序列中每一个元素的值。(1 ≤ n ≤ 105，1 ≤ k ≤ n)
输出一行，为去重排序后的序列，每个数后面有一个空格 */
#include<stdio.h>
int main()
{
	int i,n;
	int m;// 1 2 3 2 2 5 6 
	int arr[105]={0};
	scanf("%d",&n);
	int temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		arr[temp] = temp;
	}
	for(i=0;i<=n;i++)
	{
		if(arr[i]!=0) //都为正整数 
		printf("%d ",arr[i]);
	}
    return 0;
 } 
