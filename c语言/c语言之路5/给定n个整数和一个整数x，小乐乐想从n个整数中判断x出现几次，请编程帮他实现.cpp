//����n��������һ������x��С�������n���������ж�x���ּ��Σ����̰���ʵ�֡�
/* ���룺
5
1 1 2 1 3
1
�����
3        */
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[10]={0};
	for(;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			count++;
		}
	}
	printf("%d ",count);
    return 0;
} 
