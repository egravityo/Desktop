//���������������е����У����������кϲ�Ϊһ���������в����
#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("�������������еĸ�����");
	scanf("%d%d",&m,&n); 
	int arr1[m],arr2[n],arr3[m+n];
	for(i=0;i<m;i++)
	{
	   scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
    {
       scanf("%d",&arr2[i]);
	}
	for(i=0;i<m;i++) 
	{
		if(arr1[i]!='\0')
	    {
		   arr3[i]=arr1[i];
	    } 
	}
	for(i=0;i<n;i++)
	{
		if(arr2[i]!='\0') 
		{
			arr3[i+m]=arr2[i]; 
		}
	 } 
	arr3[m+n]='\0';
	for(i=0;i<m+n;i++)
	{
		printf("%d ",arr3[i]); 
	}
	for(i=0;i<m+n-1;i++)
	{
		for(j=0;j<m+n-1-i;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				int temp = 0;
				temp = arr3[j];
				arr3[j] = arr3[j+1];
				arr3[j+1] = temp; 
			 } 
		}
	 } 
	printf("�����Ľ����\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}
