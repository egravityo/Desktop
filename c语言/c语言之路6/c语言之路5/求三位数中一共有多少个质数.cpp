//����λ����һ���ж��ٸ����� 
#include<stdio.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
		return 1;
}
int main()
{
    int i;
    int count=0;
    for(i=100;i<1000;i++)
    {
    	if(is_prime(i))
    	{
    		count++;
		}
	}
	printf("%d ",count);
	return 0;
}
