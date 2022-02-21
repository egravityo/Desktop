/*书上例题：从键盘输入10个数据保存到数组中，将数组中的元素依次向后移
一个位置，再将最后一个数据放到一个数据中。*/
#include<stdio.h>
int main()
{
    int i;
    int t;//用于交换 
    int arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	 } 
	t=arr[9];
	for(i=1;i>0;i--)
	{
		arr[i]=arr[i-1]; 
	}
	arr[0]=t;
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);	
	 } 
	return 0;
	 
 } 
