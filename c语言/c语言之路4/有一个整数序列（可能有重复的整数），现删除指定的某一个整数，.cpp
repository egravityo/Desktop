//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
#include<stdio.h>
int main()
{
	int i,n,m;
	printf("请输入该数组有几个元素：\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
    }
    printf("请输入需要删掉的数：");
    scanf("%d",&m); 
    for(i=0;i<n;i++)
	{
		if(arr[i]!=m)
		{
			printf("%d ",arr[i]);
		}
	 } 
	return 0;
 } 
