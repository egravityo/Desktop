/*��ҵ1:дһ���б������ĺ�������������������һ��������
����Ƿ�Ϊ��������Ϣ*/
#include<stdio.h>
int SS(int x)//SSΪ��������˼ 
{
	int flag=1;
	int k;
    if(x<0)
	{
		printf("�һ���������������"); 
	 } 
	for(k=2;k<x;k++)
	{
		if(x%k==0) 
		{
			printf("������������");
			break; 
	    } 
		else
		{
			printf("����������"); 
		 } 
		 return x ; 
	 } 
	/* 
	for(;x<10000;i+=2) 
	{
		flag=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				flag=0; 
				printf("������Ϊ����");
				break; 
			 } 
		 } 
		 if(flag!=0)
		 {
		 	printf("����Ϊ����",i);
		  } 
		return i; 
	}
	 */
 } 
int main()
{
	int s,z;
	printf("������һ������0��������");
    scanf("%d",&z);
	s=SS(z);
	printf("",s);
    return 0; 
 } 
