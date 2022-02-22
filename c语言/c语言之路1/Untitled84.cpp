#include<stdio.h>//求100~1000之间各个数之和为5的数，并且求出它们的个数和 
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
	 printf("一共有%d个\n",sum) ;
	return 0; 
}
