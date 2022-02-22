//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
#include<stdio.h>
int main()
{//90 10
    int i,j,k;
    int count=0; 
    int arr[10]={0};
	while(scanf("%d",&i)!=EOF)
	{
	   for(k=0;i>0;k++)//判断每个数字是否为奇偶 
	   {
	   	   if((i%10)%2==0)
	   	   {
	   	   	   arr[k]=0;
	   	   	   count++; 
		   }
		   else
		   {
		       arr[k]=1;
		       count++; 
		   } 
	   	   i/=10;
	   }
	}	 
	for(k=count;k>=0;k--)
	{
		printf("%d",arr[k]); 
	 } 
	return 0;
}
