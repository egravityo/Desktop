//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж���
//�����Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ���
//���Խ���Ϊ�Ӿ�������Ͻ������½ǵ�����
#include<stdio.h>
int main()
{
    int i,j,flag=1;
    int arr[15][15];
    int m;
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		 } 
	}
	for(i=1;i<m;i++) 
	{
		for(j=0;j<i;j++)
		{
			if(arr[i][j]!=0)
			{
				flag=0; 
			 } 
		}
	}
	/*  1 2 3 4
        0 3 4 5
	    0 0 5 6
	    0 0 0 7 */
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
