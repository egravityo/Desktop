//С���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ��������ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���
//С�������̰�����������һ���ж���ͬѧ���мҳ���
/*���룺
3
80 100 90	
40 70 65
20 84 93
�����
1    */
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	float arr[10][10]={0};
    float sum;
    int count=0;
    int i;
    float ave[10]={0};
    for(i=0;i<n;i++)
    {
        int j;
        sum=0;
        for(j=0;j<3;j++)
        {
        	scanf("%f",&arr[i][j]);
        	sum+=arr[i][j];
		}
    	sum+=arr[i][j];
    	ave[i]=sum/3.0;
	}
	for(i=0;i<n;i++)
	{
	    if(ave[i]<60)
	    {
	    	count++;
		}
	}
	printf("%d ",count);
	return 0; 
}
