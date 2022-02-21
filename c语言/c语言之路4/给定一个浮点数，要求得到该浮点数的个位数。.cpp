//给定一个浮点数，要求得到该浮点数的个位数
#include<stdio.h>
int main()
{
    float i;
    int j;
    while(~scanf("%f",&i))
    {
    	j = (int)i % 10;
	    printf("%d\n",j); 
	}
	return 0;
}
