/*дһ�����������ж�һ�����Ƿ�Ϊ����*/
#include<stdio.h>
int prime(int x)
{
	int flag=1;
	int i;
	if((x<=0)||('a' <= x&&x<='z')|| ('A' <= x&&x<='Z'))
  	{
		printf("ͬѧ����ϸ����");
	 } 
	else
	{ 
        for(i=2;i<x;i++)
	    {
	     	if(x%i==0)
	    	{
			    flag=0;
			    printf("%d����һ������\n",x); 
			    break; 
		    }
	    } 
      	if(flag==1)
     	{
		printf("%dΪ����\n",x); 
	    }
    } 
}
int main()
 {
	int i;
	printf("������һ������0��������");
	scanf("%d",&i);
	int H = prime(i); 
	return 0; 
 } 
