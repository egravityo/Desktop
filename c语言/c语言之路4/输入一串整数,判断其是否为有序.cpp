//����һ���������У��ж��Ƿ�����������.
//����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)
#include<stdio.h>
int main()//2 3 4 5 6
// 3 2 4 5 7 1 
{
    int arr[10]={0};
    int i,j;
    int flag = 0;
    for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	 } 
    for(i=0;i<10;i++)
    {
    	if(arr[i]>=arr[i+1])
    	{
            flag = 1;
        }
        else if(arr[i]<=arr[i+1])
        {
        	flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag == 1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}


