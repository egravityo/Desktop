#include<stdio.h>
int main()
{
	char ch1,ch2; 
	printf("��ӭ������ĸת����\n");
	printf("������һ���Ϸ���ĸ��\n");
	scanf("%c%c",&ch1,&ch2);
	if(!(('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z'))) 
	{
		printf("***ע�⿴�⣡***\n");  
    }  
	else
	{ 
	    if('a'<=ch1&&ch1<='z') 
	    {   
	       printf("ת�������ĸΪ��ch2=%c\n",ch2=ch1-32);
	    }  
	    if('A'<=ch1&&ch1<='Z')
		{
		   printf("ת�������ĸΪ��ch2=%c\n",ch2=ch1+32);
		 } 
    }
    return 0;
}
