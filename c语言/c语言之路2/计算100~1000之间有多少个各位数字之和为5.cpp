/*����100~1000֮���ж��ٸ���λ����֮��Ϊ5*/
#include<stdio.h>
int main()
{
	int i,a,b,c;
	int count = 0;
	for(i = 100;i <= 999;i ++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(5 == a + b +c)
		{
			count++;
			printf("%d ",i); 
		 } 
	 } 
	printf("\nһ����%d��",count);
	return 0;
 } 
