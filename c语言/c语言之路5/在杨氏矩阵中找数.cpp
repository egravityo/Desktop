//杨氏矩阵
//有一个数学矩阵,每行的每个数都递增,每列的每个数也都递增,
//现在要从中找一个数并返回其下标,请编程 
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
	//找不到 
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
    	printf("找到了！\n");
    	printf("下标是：%d %d",x+1,y+1);
	}
	else
	{
	    printf("找不到！\n");	
	} 
	return 0;
}
