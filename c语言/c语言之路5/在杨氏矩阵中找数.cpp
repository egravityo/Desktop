//���Ͼ���
//��һ����ѧ����,ÿ�е�ÿ����������,ÿ�е�ÿ����Ҳ������,
//����Ҫ������һ�������������±�,���� 
#include<stdio.h>
int FindNum(int arr[3][3],int* px,int* py,int k)
{
	int x=0;
	int y=*py-1;
    while(x<=*px-1&&y>=0)
    {
	   	if(arr[x][y]<k)
	    {
	    	x++;
		}
		else if(arr[x][y]>k)
		{
			y--;
		}
		else
		{
			*px=x;
			*py=y;
			return 1;
		}
	}
	//�Ҳ��� 
	return 0;
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int k=8;
    int x=3;
    int y=3;
    int ret=FindNum(arr,&x,&y,k);
    if(ret==1)
    {
    	printf("�ҵ��ˣ�\n");
    	printf("�±��ǣ�%d %d",x+1,y+1);
	}
	else
	{
	    printf("�Ҳ�����\n");	
	} 
	return 0;
}
