/*���������������������ǵ����Լ��*/
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
	printf("%d��%d�����Լ����%d",i,k,P);
	return 0; 
 } 
