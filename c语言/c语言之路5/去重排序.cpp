//ȥ������
/* ���룺��һ�а���һ��������n����ʾ��ʦ������������n��������������n�У�ÿ��һ��������k��
Ϊ������ÿһ��Ԫ�ص�ֵ��(1 �� n �� 105��1 �� k �� n)
���һ�У�Ϊȥ�����������У�ÿ����������һ���ո� */
#include<stdio.h>
int main()
{
	int i,n;
	int m;// 1 2 3 2 2 5 6 
	int arr[105]={0};
	scanf("%d",&n);
	int temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		arr[temp] = temp;
	}
	for(i=0;i<=n;i++)
	{
		if(arr[i]!=0) //��Ϊ������ 
		printf("%d ",arr[i]);
	}
    return 0;
 } 
