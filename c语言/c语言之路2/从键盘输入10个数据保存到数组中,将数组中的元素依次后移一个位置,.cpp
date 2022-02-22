/*从键盘输入10个数据保存到数组中,将数组中的元素依次后移一个位置,
再将最后一个输出存放到第一个存储单元中*/
#include<stdio.h>
int main()
{
    int arr[10];
    int i;//用来循环
	int k;//存放arr【9】
	int count = 0;//最后输出按照3行4列输出 
    printf("请输入10个数据：");
    for(i = 0;i < 10;i ++)
	{
		scanf("%d",&arr[i]);
	 } 
	k = arr[9]; 
	for(i = 9;i > 0;i--)
	{
		arr[i] = arr[i-1];
	 } 
	arr[0] = k;
	for(i = 0;i < 10;i ++)
	{
		printf("%3d ",arr[i]);
		count++;
		if(count % 4 == 0) 
		{
			printf("\n");
			printf("\n");
		}
	}
	return 0; 
 } 
