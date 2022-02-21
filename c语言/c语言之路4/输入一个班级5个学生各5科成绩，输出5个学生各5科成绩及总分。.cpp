/*输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
输入描述：
五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔 
输出描述：
五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔*/
#include<stdio.h>
/*
int main()
{
	int i,j;
	float arr1[20]={0};
    float arr2[20]={0};
    float arr3[20]={0};
    float arr4[20]={0};
    float arr5[20]={0};
    for(i=0;i<5;i++)
    {
    	scanf("%d",&arr1[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr2[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr3[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr4[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr5[i]); 
	}
	return 0;
 } */
int main()
{
	float arr[5][5];
	float sum[5]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
    /*
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%f",arr[i][j]);
		}
		printf("\n");
	}
	*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum[i]=sum[i]+arr[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3.2f ",arr[i][j]);
		}
		printf("%3.2f ",sum[i]);
		printf("\n");
	}	
 } 
