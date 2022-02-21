/*输入俩个正整数，求它们的最大公约数*/
#include<stdio.h>
int MaxC(int a,int b)
{
	int c;
	if(a<=0||b<=0)
	{
		return -1; 
	 } 
	while(b!=0)
	{
	  c=a%b;
	  a=b;
	  b=c;
    } 
    return a; 
} 
int main()
{
	int i,k;
	int P; 
	scanf("%d %d",&i,&k);
	P=MaxC(i,k); 
	printf("%d和%d的最大公约数是%d",i,k,P);
	return 0; 
 } 
