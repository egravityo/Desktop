//����n�����������У�Ҫ���������н���ȥ�ز�������νȥ�أ�
//��ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�
#include<stdio.h>
int main()
{
	int i,j,n,m;
    printf("������������м�������");
    scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]!=arr[j+1])
			{
				printf("%d ",arr[j]); 
			}
		}
	}
	return 0;
 } 
