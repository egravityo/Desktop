//KiKi�õ���һ��n��m�еľ�����������֪����x�е�y�е�ֵ�Ƕ���
#include<stdio.h>
int main()
{
	int n,m,a,b,o,p;
    int count=0;
	int arr[15][15];
    scanf("%d%d",&n,&m);
    for(a=0;a<n;a++)
    {
    	for(b=0;b<m;b++)
    	{
    		scanf("%d",&arr[a][b]);
		}
	}
	for(a=0;a<n;a++)
    {
    	for(b=0;b<m;b++)
    	{
    	    printf("%-2d ",arr[a][b]);
    	    count++;
		}
		if(count%m==0)
		{
			printf("\n");
		 } 
	}
	scanf("%d%d",&o,&p);
	printf("%d",arr[o-1][p-1]);
	return 0; 
 } 
