//��������������ϳ�Ϊһ���������� 
#include<stdio.h>
#include<string.h> 
void compound(int arr1[],int arr2[],int arr[])
{
	int i=0,j=0;
	while(arr1[i]!='\0')
	{
		arr[i]=arr1[i];
		i++;
	}
	while(arr2[j]!='\0')
	{
		arr[i++]=arr2[j++];
	}	
	//��С��������arr(ð������)
	for(i=0;i<20;i++)
	{
		for(j=0;j<20-i;j++)
		{
			if(arr[j]>arr[j+1])
            {
            	int temp=arr[j];
            	    arr[j]=arr[j+1];
            	    arr[j+1]=temp;
			}
		}
	 } 
}
int main()
{
	int arr1[10]={1,3,5,6,7,10};
	int arr2[10]={2,4,6,7,8,32};
	int arr[20];
	//�ϳ��������� 
	compound(arr1,arr2,arr);
    //����ϲ�������� 
    int i=0;
    int sz=sizeof(arr)/arr[0];
    for(;i<sz;i++)
    {
    	printf("%d ",arr[i]);
	}
	return 0;
 } 
