//��n����������ǰ���λ�������ƶ�m����λ,���m��Ԫ�طŵ���ǰ���m���� 
#include<stdio.h>
int main()
{
    int arr[20],brr[20];
	int m,n;
	scanf("%d%d",&n,&m);
	int i;
	printf("������%d��Ԫ�أ�",n);
	for(i=0;i<n;i++)	
	{ 
	    scanf("%d",&arr[i]);	
	} 
	/* 4 1
	 1 2 3 4
	 4 1 2 3 */
	/* 4 2
	 1 2 3 4
	 3 4 1 2 */
    for(i=0;i<m;i++)
    {
    	int temp=arr[0];
    	int j;
    	for(j=0;j<n-1;j++)
    	{
    		arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		
	
	return 0;
}
