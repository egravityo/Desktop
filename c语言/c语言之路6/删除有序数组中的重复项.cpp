//ɾ�����������е��ظ��� 
#include<stdio.h>
#define N 10
int main()
{
	int arr[N];
    int i=0;
    int temp=0;
    for(i=0;i<N;i++)
    {
    	scanf("%d",&temp);
    	arr[temp]=temp;
	}
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("һ����%d��\n",len);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
