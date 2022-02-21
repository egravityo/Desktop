#include<stdio.h>
int cmp(int *p,int *i)
{
	return *p>*i?*p:*i;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	int a[100],b[100];
	int c[100];
	for(;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[i]=cmp(&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
 } 
