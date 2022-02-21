//Çó1!+2!+3!+...+n!(ÓÃº¯Êý)  
#include<stdio.h>
long jiec2(int n)
{
	long result=1;
	int i;
	for(i=1;i<=n;i++)
	{
		result*=i;
	 } 
	return result;
}
long jiec1(int n)
{
    int i;
    long sum=0;
    for(i=1;i<=n;i++)
    {
       sum+=jiec2(i); 
	}
	return sum;
}
int main()
{
	int n;
	long jiec2(int n);
	scanf("%d",&n);
	long ret = jiec1(n);
	printf("%d",ret);
    return 0;
}
