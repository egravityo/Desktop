/*����һ������,�������d������n��ĳλ����,�򷵻�1,���򷵻�0*/
#include<stdio.h>
int Found(int x,int y)
{
    int flag=1;
    for(;x>0;x=x/10)
	{
		x=x%10;
		if(x==y)
		{
	        flag=1; 
		    return 1;
	    } 
	    else
	    {
	    	flag==0; 
		}
	}	
	if(flag==0) 
    {
    	return 0; 
	}
 }
int main()
{
	int i,k;
	printf("������һ������(i>0)��");
	scanf("%d",&i);
	printf("������һ������(0~9)��");
	scanf("%d",&k); 
  	int ret = Found(i,k);
	if(ret==1)
	{
		printf("�ҵ��ˣ�"); 
	 } 
	else
	{
		printf("û�ҵ���"); 
	 } 
	return 0;
 } 
