//����һ����������,�����������е����ֵ�˳��,ʹ����λ��
//ǰ�벿��,ż��λ�ں�벿��
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[100]={0};
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=n-1;
	//������ż�� 
	while(left<right)
	{
    	while((left<right)&&(arr[left]%2==1))
	   {
	        left++;
	   }
	//���������� 
	   while((left<right)&&(arr[right]%2==0))
	   {
	    	right--;
	   }
	//����
	    if(left<right)
	    {
	       int temp=arr[right];
	       arr[right]=arr[left];
	       arr[left]=temp; 
	    } 
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
