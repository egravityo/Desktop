#include<stdio.h>
int main()
{
	int i;
	int j;
	int flag ;
	for (i = 2;i <= 200;i++)

	    flag = 1;
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
			if(flag==1)
			{
				printf("%d ", i);
		}
	}
	return 0;
}