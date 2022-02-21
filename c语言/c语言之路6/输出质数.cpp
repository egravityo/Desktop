//Êä³öÖÊÊı
#include<stdio.h>
int main()
{
	int i=2;
	for(;i<1000;i++)
	{
		int j=2;
		for(;j<i;j++)
		{
			if(i%j!=0)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
 } 
 
