//从头到尾打印链表 
#include<stdio.h>
struct p
{
    int i;
	struct p* next;	
};
int main()
{
	int n=0;
	scanf("%d",&n);
	struct p arr[n],*head,*p;
	//输入链表
	int i=0;
	for(;i<n;i++)
	{
		scanf("%d",arr[i].i);
		arr[i].next=&arr[i+1].i;
	} 
	head=arr[0].i;
    for(i=n-1;i>=0;i--)
    {
    	printf("%d ",arr[i].i);
    	
	}
	return 0;
}
