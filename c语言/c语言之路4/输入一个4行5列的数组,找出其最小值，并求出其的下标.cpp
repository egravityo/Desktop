//����һ��4��5�е�����,�ҳ�����Сֵ�����������±�
#include<stdio.h>
int main()
{
	int i,j;
    int m,n;
    int min=100;
    int arr[4][5]={0};
    for(i=0;i<4;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		scanf("%d",&arr[i][j]);
    		if(min>arr[i][j])
    		{
    			min=arr[i][j];
				m=i+1;
				n=j+1; 
			}
		}
	}
	printf("��СֵΪ%d,������(%d,%d)",min,m,n);
	return 0;
 } 
