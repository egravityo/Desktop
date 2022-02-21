#include<stdio.h>
int max(int x,int y)
{
	return x>y?x:y; 
}
int main()
{
	int (*pa)(int,int);
	int a,b,p;
	scanf("%d%d",&a,&b);
	pa = max;
	p = (*pa)(a,b);
	printf("%d",p); 
    return 0;
 } 
