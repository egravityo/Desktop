//����һ������,�����䷴ת�����
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m;
	m=n%10;
	if(m!=0)
	{
		while(n)
		{
			m=n%10;
			n/=10;
			printf("%d",m);
		} 
	}
	else
	{
	   while(n/=10)
	   {
	   	  m=n%10;
	   	  printf("%d",m);
	   }
    }
	return 0;
 } 
