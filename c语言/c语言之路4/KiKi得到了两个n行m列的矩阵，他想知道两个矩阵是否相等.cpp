//KiKi�õ�������n��m�еľ�������֪�����������Ƿ����
#include<stdio.h>
int main()
{
	int i,j;
	int arr[15][15],brr[15][15];
	int m,n;
	int flag=1;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&brr[i][j]);
			if(arr[i][j]!=brr[i][j])
		    {
			    flag = 0;
		    }
		}
	}
	if(flag)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
