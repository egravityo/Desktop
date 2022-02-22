#include<stdio.h>
int main()
{/*
	int i = 0;
	int j = 0;
	scanf("%d %d",&i,&j);
	int c = i + j;
	if(c > 100)
	{
		//printf("%d",c);
		int a,b;
		a = c / 10 % 10;
		b = c % 10; 
		printf("%d",a*10+b);
    }
	else
	{
	  printf("%d",c);
	   }   */
	int a,b;
	scanf("%d %d",&a,&b);
	int ret = (a%100+b%100)%100;
    printf("%d",ret); 
	return 0;
}
