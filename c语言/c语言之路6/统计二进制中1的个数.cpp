//ͳ�ƶ�������1�ĸ���
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100];
	int i=0;
	int count=0;
	int z=0;
	while(n)
	{
	    arr[i]=n%2;
	    z++;
	    if(arr[i]==1)
	    {
	    	count++;
		}
		n/=2;
		i++;
	}
	//���������
	for(i=z-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	 } 
	printf("\n");
	printf("%d ",count); 
	return 0;
 } 
