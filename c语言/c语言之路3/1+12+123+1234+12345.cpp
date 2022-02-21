//Çó1+12+123+1234+12345
#include<stdio.h>
int main()
{
	int i,n,z;
	long sum = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   z = i+sum*10;
	   sum+=z;
	}
	printf("%d",sum); 
	return 0;
 } 
