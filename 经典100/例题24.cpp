/*��һ�������У�2/1,3/2,5/3,8/5,13/8..���������ǰ20���*/
#include<stdio.h>
int main()
{
    /* 
	float i,k;
	float item = i/k;
	float sum=0.0;
	for(i=2.0;i<=13.0;)
	{ 
		for(k=1.0;k<=i;)
		{
			item = i/k;
			sum += item;
			k = i;
		}
		i=i+k; 
	}
	printf("%f",sum); 
	*/
	int a=2,b=1,t,count;
	double sum=0.00;
	for(count=1;count<=20;count++) 
	{
		t = a;
		sum = sum + (double)a/b; 
		a = a+b;
	    b = t; 
	}
	printf("ǰ20����֮��Ϊ��%f\n",sum);
	return 0;
	 
 } 
