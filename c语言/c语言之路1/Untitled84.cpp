#include<stdio.h>//��100~1000֮�������֮��Ϊ5����������������ǵĸ����� 
int main() 
{
    int sum=0;	
    int a,b,c,i;
	printf("%d",sum); 
	for(i=100;i<=1000;i++) 
    { 
    	a=i/100;
		b=i/10%10;
		c=i%10;
		if(5==a+b+c)
		{
			printf("%d\n",i); 
			sum+=1; 
		 }
	}
	 printf("һ����%d��\n",sum) ;
	return 0; 
}
