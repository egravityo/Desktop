/*���������������������Լ��*/
#include<stdio.h>
int c; 
int MaxC(int a,int b)
{
    if(a<0||b<0)
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
	printf("������������������\n");
    scanf("%d %d",&i,&k); 
	int p;
	p=MaxC(i,k);
	printf("%d",p);
    return 0;
}
